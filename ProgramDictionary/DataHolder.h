#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define SIZE_LANGUAGE 4
#define  TYPE_SIZE 4

typedef enum CommType {
	IN_PUT,
	OUT_PUT,
	LOGIC,
	ARITMETIC,
}CommType;


typedef struct Command {
	CommType type;
	char *lib;
	char *name;
	char *disc;
	char *syntax;
}Command;

typedef struct Language {
	char *name;
	Command *commands;
	int numberOfCommands;
}Language;

Language *getData();
