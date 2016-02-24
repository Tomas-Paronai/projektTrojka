#include "FileHandler.h"

Language *readDatabase(FILE *inputFile) {
	Language inputLanguages[SIZE];
	if (inputFile != NULL) {
		//inputLanguages = (Language*)malloc(sizeof(Language) * SIZE);
		fread(inputLanguages, sizeof(Language), SIZE, inputFile);
	}

	return inputLanguages;
}