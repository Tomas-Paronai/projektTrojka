#include "Dictionary.h"


int main() {
	Language *data = (Language*)malloc(sizeof(Language) * 1);
	Command command1, command2, command3, command4;
	char *syn1 = "command1\0";
	command1.type = IN;
	command1.name = (char*)malloc(sizeof(char)*(strlen(syn1) + 1));
	strcpy(command1.name, syn1);

	char *syn2 = "command2\0";
	command2.type = IN;
	command2.name = (char*)malloc(sizeof(char)*(strlen(syn2) + 1));
	strcpy(command2.name, syn2);

	char *syn3 = "command3\0";
	command3.type = IN;
	command3.name = (char*)malloc(sizeof(char)*(strlen(syn3) + 1));
	strcpy(command3.name, syn3);

	char *syn4 = "command4\0";
	command4.type = IN;
	command4.name = (char*)malloc(sizeof(char)*(strlen(syn4) + 1));
	strcpy(command4.name, syn4);


	char *name = "java\0";	
	
	data[0].name = (char*)malloc(sizeof(char)*(strlen(name) + 1));
	strcpy(data[0].name, name);
	data[0].commands = (Command*)malloc(sizeof(Command) * 2);
	data[0].commands[0] = command1;
	data[0].commands[1] = command2;
	data[0].numberOfCommands = 2;

	char *syn = "while(arg)\n{\n\tprintf(\"daco\");\n}\0";
	data[0].commands[0].syntax = (char*)malloc(sizeof(char)*(strlen(syn) + 1));
	strcpy(data[0].commands[0].syntax, syn);
	char *lib = "stdio.h\0";
	data[0].commands[0].lib = (char*)malloc(sizeof(char)*(strlen(lib) + 1));
	strcpy(data[0].commands[0].lib, lib);
	char* disc = "Loop till the condition is true.\0";
	data[0].commands[0].disc = (char*)malloc(sizeof(char)*(strlen(disc) + 1));
	strcpy(data[0].commands[0].disc, disc);

	char name2[] = "C++\0";
	data[1].name = (char*)malloc(sizeof(char)*(strlen(name2) + 1));
	strcpy(data[1].name, name2);
	data[1].commands = (Command*)malloc(sizeof(Command) * 2);
	data[1].commands[0] = command3;
	data[1].commands[1] = command4; 
	data[1].numberOfCommands = 2;

	char c;
	int level = 1;
	int numberOfAvailableCommands = 0;
	char language, type, command;
	do {
		printLegend();
		if (level == LANG) {
			printData(0, 0, 0, data);
		}
		else if (level == TYPE) {
			language = c;			
			printData(c, 0, 0, data);			
		}
		else if (level == COMM) {
			type = c;
			printData(language, c, 0, data);
			numberOfAvailableCommands = getAvailableCommandsCount(language, getTypeEnum(c - '0'),data);
		}
		else if (level == DET) {
			printData(language, type, c, data);
		}
		


		c = _getch(); //get user input
		if (level == LANG && c-'0' > -1 && c-'0s' < SIZE) {
			level++;
		}
		else if(level == TYPE && c - '0' > -1 && c - '0' < TYPE_SIZE){
			level++;
		}
		else if (level == COMM && c - '0' > -1 && c - '0' < numberOfAvailableCommands) {
			level++;
		}
		else if (level > 1 && tolower(c) == 'b') {
			level--;
			c = '0';
		}
		
		system("cls");
	} while (tolower(c) != 'q');


	return 0;
}