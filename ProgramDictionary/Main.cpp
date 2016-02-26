#include "FileHandler.h"




int main() {
	Language *data = (Language*)malloc(sizeof(Language) * SIZE_LANGUAGE);
	data = getData();
	
	char c = '0';
	int level = 1;
	int numberOfAvailableCommands = 0;
	char language, type, command;
	do {
		printLegend();
		if (level == LANG) {
			printData(0, 0, 0, data);
		}
		else if (level == TYPE) {			
			printData(language, 0, 0, data);			
		}
		else if (level == COMM) {
			printData(language, type, 0, data);
			numberOfAvailableCommands = getAvailableCommandsCount(language, getTypeEnum(c - '0'),data);
		}
		else if (level == DET) {
			printData(language, type, c, data);
		}
		


		c = _getch(); //get user input
		//c = getchar();
		//scanf("%c", &c);
		if (level == LANG && c-'0' > -1 && c-'0' < SIZE_LANGUAGE) {
			level++;
			language = c;
		}
		else if(level == TYPE && c - '0' > -1 && c - '0' < TYPE_SIZE){
			level++;
			type = c;
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