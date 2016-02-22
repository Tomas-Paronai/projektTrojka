#define SIZE 2
#define  TYPE_SIZE 4

typedef enum CommType {
	IN,
	OUT,
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
