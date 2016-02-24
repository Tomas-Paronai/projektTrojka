#include "Dictionary.h"

void printData(char languageIndex, char typeIndex, char commandIndex, Language *data) {
	int l_index = languageIndex - '0';
	int c_index = commandIndex - '0';
	int t_index = typeIndex - '0';

	Command *availableCommands = NULL;
	if (t_index >= 0) {
		availableCommands = (Command*)malloc(sizeof(Command)*getAvailableCommandsCount(languageIndex, getTypeEnum(t_index), data));
		int i, index = 0;
		for (i = 0; i < data[l_index].numberOfCommands; i++) {
			if (data[l_index].commands[i].type == getTypeEnum(t_index)) {
				availableCommands[index++] = data[l_index].commands[i];
			}
		}
	}	

	printf("### %d %d %d\n", l_index, t_index, c_index);
	if (data != NULL) {
		if (l_index < 0) {
			printf("Select language:\n");
			int i;
			for (i = 0; i < SIZE; i++) {
				printf("%d. ", i);
				printf("%s\n", data[i].name);
			}
		}
		else if (t_index < 0 && l_index >= 0) {
			printf("You have selected %s\n", data[l_index].name);
			int i;
			for (i = 0; i < TYPE_SIZE; i++) {
				printf("%d. ", i, getTypeString(i));
				printf("%s\n", getTypeString(i));
			}
		}
		else if (l_index >= 0 && t_index >= 0 && c_index < 0) {
			printf("You have selected %s and %s\n", data[l_index].name, getTypeString(t_index));
			int i, index = 0;
			for (i = 0; i < data[l_index].numberOfCommands; i++) {
				if (data[l_index].commands[i].type == getTypeEnum(t_index)) {
					printf("%d. ", index++);
					if (data[l_index].commands[i].name != NULL) {
						printf("%s\n", data[l_index].commands[i].name);
					}					
				}
			}
		}
		else {
			if (availableCommands != NULL) {
				if (availableCommands[c_index].name != NULL) {
					printf("You have selected command: %s\n", availableCommands[c_index].name);
				}
				else {
					printf("You have selected %d. command in list\n", c_index);
				}
				
				if (availableCommands[c_index].disc != NULL) {
					printf("\n%s\n", availableCommands[c_index].disc);
				}
				if (availableCommands[c_index].lib != NULL) {
					printf("Libraries: %s\n", availableCommands[c_index].lib);
				}
				else {
					printf("No libraries required.");
				}
				if (availableCommands[c_index].syntax != NULL) {
					printf("\n%s\n", availableCommands[c_index].syntax);
				}				
			}
					
		}
	}
}

void printLegend() {	
	printf("q - exit\nb - back\n0-9 - choose from list\n");
	printf("\n---------------------------------\n");
}

int getAvailableCommandsCount(char languageIndex, CommType type, Language *data) {
	int l_index = languageIndex - '0';

	int i, result = 0;
	for (i = 0; i < data[l_index].numberOfCommands; i++) {
		if (data[l_index].commands[i].type == type) {
			result++;
		}
	}
	return result;
}

char *getTypeString(int index) {
	CommType type[] = { IN,OUT,LOGIC,ARITMETIC };
	switch (type[index]) {
	case IN: return "Input";
	case OUT: return "Output";
	case LOGIC: return "Logic";
	case ARITMETIC: return "Aritmetic";
	}
	return "Empty";
}

CommType getTypeEnum(int index) {
	switch (index) {
	case 0: return IN;
	case 1: return OUT;
	case 2: return LOGIC;
	case 3: return ARITMETIC;
	}
	return IN;
}