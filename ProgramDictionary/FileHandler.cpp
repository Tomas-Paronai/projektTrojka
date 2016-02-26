#include "FileHandler.h"

Language *readDatabase(FILE *inputFile) {
	Language *inputLanguages = NULL;
	if (inputFile != NULL) {
		inputLanguages = (Language*)malloc(sizeof(Language) * SIZE_LANGUAGE);
		fread(inputLanguages, sizeof(Language), SIZE_LANGUAGE, inputFile);
	}

	return inputLanguages;
}