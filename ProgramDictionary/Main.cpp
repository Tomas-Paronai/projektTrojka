#include "FileHandler.h"


int main() {
	Language *datar = (Language*)malloc(sizeof(Language) * SIZE);
	
	FILE *f;
	f = fopen("Database.bin", "rb");
	if (f == NULL)
	{
		printf("\nError: File doesn't exist, or cannot be open!");
		return 1;
	}
	//fwrite(datar, sizeof(Language), SIZE, f);
	datar = readDatabase(f);
	fclose(f);

	///////////////////////////
	
	char c;
	int level = 1;
	int numberOfAvailableCommands = 0;
	char language, type, command;
	do {
		//printLegend();
		if (level == LANG) {
			printData(0, 0, 0, datar);
		}
		else if (level == TYPE) {
			language = c;			
			printData(c, 0, 0, datar);			
		}
		else if (level == COMM) {
			type = c;
			printData(language, c, 0, datar);
			numberOfAvailableCommands = getAvailableCommandsCount(language, getTypeEnum(c - '0'),datar);
		}
		else if (level == DET) {
			printData(language, type, c, datar);
		}
		


		c = _getch(); //get user input
		if (level == LANG && c-'0' > -1 && c-'0' < SIZE) {
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