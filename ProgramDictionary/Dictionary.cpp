#include "Dictionary.h"

void printData(char languageIndex, char typeIndex, char commandIndex, Language *data) {
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, WHITE);

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

	//printf("### %d %d %d\n", l_index, t_index, c_index);
	if (data != NULL) {
		if (l_index < 0) {
			SetConsoleTextAttribute(hConsole, WHITE);
			printf("Select language:\n");
			int i;
			for (i = 0; i < SIZE_LANGUAGE; i++) {
				SetConsoleTextAttribute(hConsole, WHITE);
				printf("%d. ", i);		
				SetConsoleTextAttribute(hConsole, CYAN);
				printf("%s\n", data[i].name);
			}
			SetConsoleTextAttribute(hConsole, WHITE);
		}
		else if (t_index < 0 && l_index >= 0) {
			SetConsoleTextAttribute(hConsole, WHITE);
			printf("You have selected");
			SetConsoleTextAttribute(hConsole, CYAN);
			printf(" %s\n" ,data[l_index].name);
			
			int i;
			for (i = 0; i < TYPE_SIZE; i++) {
				SetConsoleTextAttribute(hConsole, WHITE);
				printf("%d. ", i);
				SetConsoleTextAttribute(hConsole, RED);
				printf("%s\n", getTypeString(i));
			}
			SetConsoleTextAttribute(hConsole, WHITE);
		}
		else if (l_index >= 0 && t_index >= 0 && c_index < 0) {
			SetConsoleTextAttribute(hConsole, WHITE);
			printf("You have selected");
			SetConsoleTextAttribute(hConsole, CYAN);
			printf(" %s", data[l_index].name);
			SetConsoleTextAttribute(hConsole, WHITE);
			printf(" and");
			SetConsoleTextAttribute(hConsole, RED);
			printf(" %s\n", getTypeString(t_index));
			int i, index = 0;			
			for (i = 0; i < data[l_index].numberOfCommands; i++) {
				if (data[l_index].commands[i].type == getTypeEnum(t_index)) {
					SetConsoleTextAttribute(hConsole, WHITE);
					printf("%d. ", index++);
					if (data[l_index].commands[i].name != NULL) {
						SetConsoleTextAttribute(hConsole, YELLOW);
						printf("%s\n", data[l_index].commands[i].name);
					}					
				}
			}
			SetConsoleTextAttribute(hConsole, WHITE);
		}
		else {
			if (availableCommands != NULL) {
				if (availableCommands[c_index].name != NULL) {
					printf("You have selected command: ");
					SetConsoleTextAttribute(hConsole, YELLOW);
					printf("%s\n", availableCommands[c_index].name);
					SetConsoleTextAttribute(hConsole, WHITE);
				}
				else {
					printf("You have selected");
					SetConsoleTextAttribute(hConsole, YELLOW);
					printf(" %d", c_index);
					SetConsoleTextAttribute(hConsole, WHITE);
					printf(" command in list\n");
				}
				
				if (availableCommands[c_index].disc != NULL) {
					printf("\n%s\n", availableCommands[c_index].disc);
				}
				if (availableCommands[c_index].lib != NULL) {					
					printf("Libraries: ");
					SetConsoleTextAttribute(hConsole, GREEN);
					printf("%s\n", availableCommands[c_index].lib);
					SetConsoleTextAttribute(hConsole, WHITE);
				}
				else {
					printf("No libraries required.");
				}
				if (availableCommands[c_index].syntax != NULL) {
					SetConsoleTextAttribute(hConsole, YELLOW);
					printf("\nExample:\n");
					SetConsoleTextAttribute(hConsole, WHITE);
					printf("\n%s\n", availableCommands[c_index].syntax);
				}				
			}
					
		}
	}
}

void printLegend() {	
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, PINK);
	printf("q - exit\nb - back\n0-9 - choose from list\n");
	printf("\n---------------------------------\n");
	SetConsoleTextAttribute(hConsole, WHITE);
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
	CommType type[] = { IN_PUT,OUT_PUT,LOGIC,ARITMETIC };
	switch (type[index]) {
	case IN_PUT: return "Input";
	case OUT_PUT: return "Output";
	case LOGIC: return "Logic";
	case ARITMETIC: return "Aritmetic";
	}
	return "Empty";
}

CommType getTypeEnum(int index) {
	switch (index) {
	case 0: return IN_PUT;
	case 1: return OUT_PUT;
	case 2: return LOGIC;
	case 3: return ARITMETIC;
	}
	return IN_PUT;
}

