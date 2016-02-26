#include "DataHolder.h"

Language *getData() {
	Language *data = (Language*)malloc(sizeof(Language)*SIZE_LANGUAGE);

	Command command1, command2, command3, command4;
	command1.type = IN_PUT;
	command2.type = OUT_PUT;
	command3.type = ARITMETIC;
	command4.type = IN_PUT;

	char* libr[5][14];
	char* nam[5][14];
	char* dis[5][14];
	char* com[5][14];
	int i, j;

	char *name = "java\0";
	data[0].name = (char*)malloc(sizeof(char)*(strlen(name) + 1));
	strcpy(data[0].name, name);
	data[0].commands = (Command*)malloc(sizeof(Command) * 14);
	data[0].numberOfCommands = 14;

	//command Println

	data[0].commands[0].type = OUT_PUT;

	libr[0][0] = "null\0";
	data[0].commands[0].lib = NULL;
	//strcpy(data[0].commands[0].lib, libr[0][0]);

	nam[0][0] = "Println\0";
	data[0].commands[0].name = (char*)malloc(sizeof(char)*(strlen(nam[0][0]) + 1));
	strcpy(data[0].commands[0].name, nam[0][0]);

	dis[0][0] = "System.out.print is a standard output function used in java. where System specifies the package name, out specifies the class name and print is a function in that class.\0";
	data[0].commands[0].disc = (char*)malloc(sizeof(char)*(strlen(dis[0][0]) + 1));
	strcpy(data[0].commands[0].disc, dis[0][0]);

	com[0][0] = "System.out.println(\"Hello World\");\0";
	data[0].commands[0].syntax = (char*)malloc(sizeof(char)*(strlen(com[0][0]) + 1));
	strcpy(data[0].commands[0].syntax, com[0][0]);

	//command scanner int

	data[0].commands[1].type = IN_PUT;

	libr[0][1] = "java.util.Scanner";
	data[0].commands[1].lib = (char*)malloc(sizeof(char)*(strlen(libr[0][1]) + 1));
	strcpy(data[0].commands[1].lib, libr[0][1]);

	nam[0][1] = "Scanner Int\0";
	data[0].commands[1].name = (char*)malloc(sizeof(char)*(strlen(nam[0][1]) + 1));
	strcpy(data[0].commands[1].name, nam[0][1]);

	dis[0][1] = "The Java method Scans the next token of the input as an int\0";
	data[0].commands[1].disc = (char*)malloc(sizeof(char)*(strlen(dis[0][1]) + 1));
	strcpy(data[0].commands[1].disc, dis[0][1]);

	com[0][1] = "int number = scanner.nextInt();\0";
	data[0].commands[1].syntax = (char*)malloc(sizeof(char)*(strlen(com[0][1]) + 1));
	strcpy(data[0].commands[1].syntax, com[0][1]);

	//command scanner double

	data[0].commands[2].type = IN_PUT;

	libr[0][2] = "java.util.Scanner";
	data[0].commands[2].lib = (char*)malloc(sizeof(char)*(strlen(libr[0][2]) + 1));
	strcpy(data[0].commands[2].lib, libr[0][2]);

	nam[0][2] = "Scanner Double\0";
	data[0].commands[2].name = (char*)malloc(sizeof(char)*(strlen(nam[0][2]) + 1));
	strcpy(data[0].commands[2].name, nam[0][2]);

	dis[0][2] = "The Java method Scans the next token of the input as a double\0";
	data[0].commands[2].disc = (char*)malloc(sizeof(char)*(strlen(dis[0][2]) + 1));
	strcpy(data[0].commands[2].disc, dis[0][2]);

	com[0][2] = "double number = scanner.nextDouble();\0";
	data[0].commands[2].syntax = (char*)malloc(sizeof(char)*(strlen(com[0][2]) + 1));
	strcpy(data[0].commands[2].syntax, com[0][2]);

	//command scanner char

	data[0].commands[3].type = IN_PUT;

	libr[0][3] = "null\0";
	data[0].commands[3].lib = NULL;
	//strcpy(data[0].commands[3].lib, libr[0][3]);

	nam[0][3] = "Scanner char\0";
	data[0].commands[3].name = (char*)malloc(sizeof(char)*(strlen(nam[0][3]) + 1));
	strcpy(data[0].commands[3].name, nam[0][3]);

	dis[0][3] = "NextChar() isn't a method of the scanner class, it doesn't work.\0";
	data[0].commands[3].disc = (char*)malloc(sizeof(char)*(strlen(dis[0][3]) + 1));
	strcpy(data[0].commands[3].disc, dis[0][3]);

	com[0][3] = "null\0";
	data[0].commands[3].syntax = NULL;
	//strcpy(data[0].commands[3].syntax, com[0][3]);

	//command scanner string

	data[0].commands[4].type = IN_PUT;

	libr[0][4] = "java.util.Scanner";
	data[0].commands[4].lib = (char*)malloc(sizeof(char)*(strlen(libr[0][4]) + 1));
	strcpy(data[0].commands[4].lib, libr[0][4]);

	nam[0][4] = "Scanner String\0";
	data[0].commands[4].name = (char*)malloc(sizeof(char)*(strlen(nam[0][4]) + 1));
	strcpy(data[0].commands[4].name, nam[0][4]);

	dis[0][4] = "The Java method Scans the next token of the input as a string\0";
	data[0].commands[4].disc = (char*)malloc(sizeof(char)*(strlen(dis[0][4]) + 1));
	strcpy(data[0].commands[4].disc, dis[0][4]);

	com[0][4] = "string input = scanner.nextLine();\0";
	data[0].commands[4].syntax = (char*)malloc(sizeof(char)*(strlen(com[0][4]) + 1));
	strcpy(data[0].commands[4].syntax, com[0][4]);

	//command Putchar

	data[0].commands[5].type = OUT_PUT;

	libr[0][5] = "java.nio.ByteBuffer\0";
	data[0].commands[5].lib = (char*)malloc(sizeof(char)*(strlen(libr[0][5]) + 1));
	strcpy(data[0].commands[5].lib, libr[0][5]);

	nam[0][5] = "Putchar\0";
	data[0].commands[5].name = (char*)malloc(sizeof(char)*(strlen(nam[0][5]) + 1));
	strcpy(data[0].commands[5].name, nam[0][5]);

	dis[0][5] = "The getChar() method read  2 byte from current position and increment position.\0";
	data[0].commands[5].disc = (char*)malloc(sizeof(char)*(strlen(dis[0][5]) + 1));
	strcpy(data[0].commands[5].disc, dis[0][5]);

	com[0][5] = "System.out.print(bytebuf.getChar());\0";
	data[0].commands[5].syntax = (char*)malloc(sizeof(char)*(strlen(com[0][5]) + 1));
	strcpy(data[0].commands[5].syntax, com[0][5]);

	//command Getchar

	data[0].commands[6].type = IN_PUT;

	libr[0][6] = "java.lang.*;\0";
	data[0].commands[6].lib = (char*)malloc(sizeof(char)*(strlen(libr[0][6]) + 1));
	strcpy(data[0].commands[6].lib, libr[0][6]);

	nam[0][6] = "Getchar\0";
	data[0].commands[6].name = (char*)malloc(sizeof(char)*(strlen(nam[0][6]) + 1));
	strcpy(data[0].commands[6].name, nam[0][6]);

	dis[0][6] = "This method copies characters from this string into the destination character array.\0";
	data[0].commands[6].disc = (char*)malloc(sizeof(char)*(strlen(dis[0][6]) + 1));
	strcpy(data[0].commands[6].disc, dis[0][6]);

	com[0][6] = "/* copies characters from starting and ending index into the destination character array */\n str.getChars(12, 26, chararr, 0)\n System.out.println(chararr);\0";
	data[0].commands[6].syntax = (char*)malloc(sizeof(char)*(strlen(com[0][6]) + 1));
	strcpy(data[0].commands[6].syntax, com[0][6]);

	//command For

	data[0].commands[7].type = ARITMETIC;

	libr[0][7] = "null\0";
	data[0].commands[7].lib = NULL;
	//strcpy(data[0].commands[7].lib, libr[0][7]);

	nam[0][7] = "For\0";
	data[0].commands[7].name = (char*)malloc(sizeof(char)*(strlen(nam[0][7]) + 1));
	strcpy(data[0].commands[7].name, nam[0][7]);

	dis[0][7] = "For executes a block of statements repeatedly until the specified condition returns false.\0";
	data[0].commands[7].disc = (char*)malloc(sizeof(char)*(strlen(dis[0][7]) + 1));
	strcpy(data[0].commands[7].disc, dis[0][7]);

	com[0][7] = "for(int b=0; b<=9; b++)\n System.out.println(b)\0";
	data[0].commands[7].syntax = (char*)malloc(sizeof(char)*(strlen(com[0][7]) + 1));
	strcpy(data[0].commands[7].syntax, com[0][7]);

	//command While

	data[0].commands[8].type = LOGIC;

	libr[0][8] = "null\0";
	data[0].commands[8].lib = NULL;
	//strcpy(data[0].commands[8].lib, libr[0][8]);

	nam[0][8] = "While\0";
	data[0].commands[8].name = (char*)malloc(sizeof(char)*(strlen(nam[0][8]) + 1));
	strcpy(data[0].commands[8].name, nam[0][8]);

	dis[0][8] = "The while statement continually executes a block of statements while a particular condition is true.\0";
	data[0].commands[8].disc = (char*)malloc(sizeof(char)*(strlen(dis[0][8]) + 1));
	strcpy(data[0].commands[8].disc, dis[0][8]);

	com[0][8] = "int n=0;\n while(n<=5) {\n System.out.println(n);\n n++;\n }\0";
	data[0].commands[8].syntax = (char*)malloc(sizeof(char)*(strlen(com[0][8]) + 1));
	strcpy(data[0].commands[8].syntax, com[0][8]);

	//command Do_While

	data[0].commands[9].type = LOGIC;

	libr[0][9] = "null\0";
	data[0].commands[9].lib = NULL;
	//strcpy(data[0].commands[9].lib, libr[0][9]);

	nam[0][9] = "Do_While\0";
	data[0].commands[9].name = (char*)malloc(sizeof(char)*(strlen(nam[0][9]) + 1));
	strcpy(data[0].commands[9].name, nam[0][9]);

	dis[0][9] = "Do-while loop evaluates the boolean expression at the end of the loop’s body. Therefore the set of statements gets executed at-least once before the check of boolean expression.\0";
	data[0].commands[9].disc = (char*)malloc(sizeof(char)*(strlen(dis[0][9]) + 1));
	strcpy(data[0].commands[9].disc, dis[0][9]);

	com[0][9] = "int i=5;\n do{\n System.out.println(i);\n i--;\n }while(i>=1);\0";
	data[0].commands[9].syntax = (char*)malloc(sizeof(char)*(strlen(com[0][9]) + 1));
	strcpy(data[0].commands[9].syntax, com[0][9]);

	//command If

	data[0].commands[10].type = LOGIC;

	libr[0][10] = "null\0";
	data[0].commands[10].lib = NULL;
	//strcpy(data[0].commands[10].lib, libr[0][10]);

	nam[0][10] = "If\0";
	data[0].commands[10].name = (char*)malloc(sizeof(char)*(strlen(nam[0][10]) + 1));
	strcpy(data[0].commands[10].name, nam[0][10]);

	dis[0][10] = "The if-then statement is the most basic of all the control flow statements. It tells your program to execute a certain section of code only if a particular test evaluates to true.\0";
	data[0].commands[10].disc = (char*)malloc(sizeof(char)*(strlen(dis[0][10]) + 1));
	strcpy(data[0].commands[10].disc, dis[0][10]);

	com[0][10] = "int a=50;\n if(a>=0 && a<=100)\n System.out.println(\"Number was from <0-100> range.\");\n else\n System.out.println(\"Number was not from <0-100> range.\");\0";
	data[0].commands[10].syntax = (char*)malloc(sizeof(char)*(strlen(com[0][10]) + 1));
	strcpy(data[0].commands[10].syntax, com[0][10]);

	//Mallloc

	data[0].commands[11].type = LOGIC;

	libr[0][11] = "null\0";
	data[0].commands[11].lib = NULL;
	//strcpy(data[0].commands[11].lib, libr[0][11]);

	nam[0][11] = "Malloc\0";
	data[0].commands[11].name = (char*)malloc(sizeof(char)*(strlen(nam[0][11]) + 1));
	strcpy(data[0].commands[11].name, nam[0][11]);

	dis[0][11] = "In Java, memory is managed for you, so you cannot explicitly delete or free an object.\0";
	data[0].commands[11].disc = (char*)malloc(sizeof(char)*(strlen(dis[0][11]) + 1));
	strcpy(data[0].commands[11].disc, dis[0][11]);

	com[0][11] = "null\0";
	data[0].commands[11].syntax = NULL;
	//strcpy(data[0].commands[11].syntax, com[0][11]);

	//command Enum

	data[0].commands[12].type = LOGIC;

	libr[0][12] = "null\0";
	data[0].commands[12].lib = NULL;
	//strcpy(data[0].commands[12].lib, libr[0][12]);

	nam[0][12] = "Enum\0";
	data[0].commands[12].name = (char*)malloc(sizeof(char)*(strlen(nam[0][12]) + 1));
	strcpy(data[0].commands[12].name, nam[0][12]);

	dis[0][12] = "A Java Enum is a special Java type used to define collections of constants.\0";
	data[0].commands[12].disc = (char*)malloc(sizeof(char)*(strlen(dis[0][12]) + 1));
	strcpy(data[0].commands[12].disc, dis[0][12]);

	com[0][12] = "public enum Margin\n{\n\tTOP,\n\tRIGHT,\n\tBOTTOM,\n\tLEFT\n}\n\npublic static void main(String[] args){\n\tint count = 1;\n\tfor (Margin m: Margin.values()) {\n\t\tSystem.out.printf(\"Margin %d = %s\", count++, m);\n\t}\n}\0";
	data[0].commands[12].syntax = (char*)malloc(sizeof(char)*(strlen(com[0][12]) + 1));
	strcpy(data[0].commands[12].syntax, com[0][12]);


	//command Switch

	data[0].commands[13].type = LOGIC;

	libr[0][13] = "null\0";
	data[0].commands[13].lib = NULL;
	//strcpy(data[0].commands[13].lib, libr[0][13]);

	nam[0][13] = "Switch\0";
	data[0].commands[13].name = (char*)malloc(sizeof(char)*(strlen(nam[0][13]) + 1));
	strcpy(data[0].commands[13].name, nam[0][13]);

	dis[0][13] = "A switch statement is useful when you need to select one of several alternatives based on the value of an integer, a character, or a String variable.\0";
	data[0].commands[13].disc = (char*)malloc(sizeof(char)*(strlen(dis[0][13]) + 1));
	strcpy(data[0].commands[13].disc, dis[0][13]);

	com[0][13] = "int month = 2;\n String monthString;\n switch (month) {\n case 1:  monthString = \"January\";\n break;\n case 2:  monthString = \"February\";\n break;\n case 3:  monthString = \"March\";\n break;\n default: monthString = \"Invalid month\";\n break;\n}\n System.out.println(monthString);\0";
	data[0].commands[13].syntax = (char*)malloc(sizeof(char)*(strlen(com[0][13]) + 1));
	strcpy(data[0].commands[13].syntax, com[0][13]);

	char* name2 = "C++\0";
	data[1].name = (char*)malloc(sizeof(char)*(strlen(name2) + 1));
	strcpy(data[1].name, name2);
	data[1].commands = (Command*)malloc(sizeof(Command) * 14);
	data[1].numberOfCommands = 14;

	//command printf

	data[1].commands[0].type = OUT_PUT;

	libr[1][0] = "stdio.h\0";
	data[1].commands[0].lib = (char*)malloc(sizeof(char)*(strlen(libr[1][0]) + 1));
	strcpy(data[1].commands[0].lib, libr[1][0]);

	nam[1][0] = "printf\0";
	data[1].commands[0].name = (char*)malloc(sizeof(char)*(strlen(nam[1][0]) + 1));
	strcpy(data[1].commands[0].name, nam[1][0]);

	dis[1][0] = "This command writes everything you want at console\0";
	data[1].commands[0].disc = (char*)malloc(sizeof(char)*(strlen(dis[1][0]) + 1));
	strcpy(data[1].commands[0].disc, dis[1][0]);

	com[1][0] = "printf(\"Hello World\");\0";
	data[1].commands[0].syntax = (char*)malloc(sizeof(char)*(strlen(com[1][0]) + 1));
	strcpy(data[1].commands[0].syntax, com[1][0]);

	//command scanf int

	data[1].commands[1].type = IN_PUT;

	libr[1][1] = "stdio.h\0";
	data[1].commands[1].lib = (char*)malloc(sizeof(char)*(strlen(libr[1][1]) + 1));
	strcpy(data[1].commands[1].lib, libr[1][1]);

	nam[1][1] = "scanf int\0";
	data[1].commands[1].name = (char*)malloc(sizeof(char)*(strlen(nam[1][1]) + 1));
	strcpy(data[1].commands[1].name, nam[1][1]);

	dis[1][1] = "This command find out, what of whole number you write at console\0";
	data[1].commands[1].disc = (char*)malloc(sizeof(char)*(strlen(dis[1][1]) + 1));
	strcpy(data[1].commands[1].disc, dis[1][1]);

	com[1][1] = "int number;\nprintf(\"Enter the whole number : \");\nscanf_s(\"%d\", &number);\0";
	data[1].commands[1].syntax = (char*)malloc(sizeof(char)*(strlen(com[1][1]) + 1));
	strcpy(data[1].commands[1].syntax, com[1][1]);

	//command scanf float or double

	data[1].commands[2].type = IN_PUT;

	libr[1][2] = "stdio.h\0";
	data[1].commands[2].lib = (char*)malloc(sizeof(char)*(strlen(libr[1][2]) + 1));
	strcpy(data[1].commands[2].lib, libr[1][2]);

	nam[1][2] = "scanf float or double\0";
	data[1].commands[2].name = (char*)malloc(sizeof(char)*(strlen(nam[1][2]) + 1));
	strcpy(data[1].commands[2].name, nam[1][2]);

	dis[1][2] = "This command find out, what of decimal number you write at console and save it to the variable\0";
	data[1].commands[2].disc = (char*)malloc(sizeof(char)*(strlen(dis[1][2]) + 1));
	strcpy(data[1].commands[2].disc, dis[1][2]);

	com[1][2] = "float number;\nprintf(\"Enter the decimal number : \");\nscanf_s(\"%f\", &number);\0";
	data[1].commands[2].syntax = (char*)malloc(sizeof(char)*(strlen(com[1][2]) + 1));
	strcpy(data[1].commands[2].syntax, com[1][2]);

	//command scanf char

	data[1].commands[3].type = IN_PUT;

	libr[1][3] = "stdio.h\0";
	data[1].commands[3].lib = (char*)malloc(sizeof(char)*(strlen(libr[1][3]) + 1));
	strcpy(data[1].commands[3].lib, libr[1][3]);

	nam[1][3] = "scanf character\0";
	data[1].commands[3].name = (char*)malloc(sizeof(char)*(strlen(nam[1][3]) + 1));
	strcpy(data[1].commands[3].name, nam[1][3]);

	dis[1][3] = "This command find out, what of character you write at console and save it to the variable\0";
	data[1].commands[3].disc = (char*)malloc(sizeof(char)*(strlen(dis[1][3]) + 1));
	strcpy(data[1].commands[3].disc, dis[1][3]);

	com[1][3] = "char c;\nprintf(\"Enter character : \");\nscanf_s(\"%c\", &c);\0";
	data[1].commands[3].syntax = (char*)malloc(sizeof(char)*(strlen(com[1][3]) + 1));
	strcpy(data[1].commands[3].syntax, com[1][3]);

	//command scanf string

	data[1].commands[4].type = IN_PUT;

	libr[1][4] = "stdio.h string.h\0";
	data[1].commands[4].lib = (char*)malloc(sizeof(char)*(strlen(libr[1][4]) + 1));
	strcpy(data[1].commands[4].lib, libr[1][4]);

	nam[1][4] = "scanf string\0";
	data[1].commands[4].name = (char*)malloc(sizeof(char)*(strlen(nam[1][4]) + 1));
	strcpy(data[1].commands[4].name, nam[1][4]);

	dis[1][4] = "This command find out, what of word you write at console and save it to the variable\0";
	data[1].commands[4].disc = (char*)malloc(sizeof(char)*(strlen(dis[1][4]) + 1));
	strcpy(data[1].commands[4].disc, dis[1][4]);

	com[1][4] = "char* w;\nprintf(\"Enter word : \");\nscanf_s(\"%s\", &w);\0";
	data[1].commands[4].syntax = (char*)malloc(sizeof(char)*(strlen(com[1][4]) + 1));
	strcpy(data[1].commands[4].syntax, com[1][4]);

	//command getchar

	data[1].commands[5].type = IN_PUT;

	libr[1][5] = "stdio.h stdlib.h\0";
	data[1].commands[5].lib = (char*)malloc(sizeof(char)*(strlen(libr[1][5]) + 1));
	strcpy(data[1].commands[5].lib, libr[1][5]);

	nam[1][5] = "Getchar\0";
	data[1].commands[5].name = (char*)malloc(sizeof(char)*(strlen(nam[1][5]) + 1));
	strcpy(data[1].commands[5].name, nam[1][5]);

	dis[1][5] = "This command is used, when you need read (getchar) something from file\0";
	data[1].commands[5].disc = (char*)malloc(sizeof(char)*(strlen(dis[1][5]) + 1));
	strcpy(data[1].commands[5].disc, dis[1][5]);

	com[1][5] = "int c;\nc = getchar();\0";
	data[1].commands[5].syntax = (char*)malloc(sizeof(char)*(strlen(com[1][5]) + 1));
	strcpy(data[1].commands[5].syntax, com[1][5]);

	//command putchar

	data[1].commands[6].type = OUT_PUT;

	libr[1][6] = "stdio.h stdlib.h\0";
	data[1].commands[6].lib = (char*)malloc(sizeof(char)*(strlen(libr[1][6]) + 1));
	strcpy(data[1].commands[6].lib, libr[1][6]);

	nam[1][6] = "Putchar\0";
	data[1].commands[6].name = (char*)malloc(sizeof(char)*(strlen(nam[1][6]) + 1));
	strcpy(data[1].commands[6].name, nam[1][6]);

	dis[1][6] = "This command is used, when you need read (getchar) something from file\0";
	data[1].commands[6].disc = (char*)malloc(sizeof(char)*(strlen(dis[1][6]) + 1));
	strcpy(data[1].commands[6].disc, dis[1][6]);

	com[1][6] = "int c;\nwhile (c != EOF) { \n\tputchar(c);\n\tc = getchar();\n }\0";
	data[1].commands[6].syntax = (char*)malloc(sizeof(char)*(strlen(com[1][6]) + 1));
	strcpy(data[1].commands[6].syntax, com[1][6]);

	//for loop

	data[1].commands[7].type = ARITMETIC;

	libr[1][7] = "stdio.h\0";
	data[1].commands[7].lib = (char*)malloc(sizeof(char)*(strlen(libr[1][7]) + 1));
	strcpy(data[1].commands[7].lib, libr[1][7]);

	nam[1][7] = "for\0";
	data[1].commands[7].name = (char*)malloc(sizeof(char)*(strlen(nam[1][7]) + 1));
	strcpy(data[1].commands[7].name, nam[1][7]);

	dis[1][7] = "This loop is used, when you know, how much do you want to repeat something\0";
	data[1].commands[7].disc = (char*)malloc(sizeof(char)*(strlen(dis[1][7]) + 1));
	strcpy(data[1].commands[7].disc, dis[1][7]);

	com[1][7] = "int i;\nfor(i = 0; i < 5; i++){\n\tprintf(\"Hello World\");\n}\0";
	data[1].commands[7].syntax = (char*)malloc(sizeof(char)*(strlen(com[1][7]) + 1));
	strcpy(data[1].commands[7].syntax, com[1][7]);

	//while loop

	data[1].commands[8].type = LOGIC;

	libr[1][8] = "stdio.h\0";
	data[1].commands[8].lib = (char*)malloc(sizeof(char)*(strlen(libr[1][8]) + 1));
	strcpy(data[1].commands[8].lib, libr[1][8]);

	nam[1][8] = "while\0";
	data[1].commands[8].name = (char*)malloc(sizeof(char)*(strlen(nam[1][8]) + 1));
	strcpy(data[1].commands[8].name, nam[1][8]);

	dis[1][8] = "This loop is used, if you don't know, how much do you want to repeat something, so this loop will be repeatet till the consition isn't complied.\0";
	data[1].commands[8].disc = (char*)malloc(sizeof(char)*(strlen(dis[1][8]) + 1));
	strcpy(data[1].commands[8].disc, dis[1][8]);

	com[1][8] = "int i = 15;\nwhile(i > 8){\n\tprintf(\"Hello World\");\ni = i - 2\n}\0";
	data[1].commands[8].syntax = (char*)malloc(sizeof(char)*(strlen(com[1][8]) + 1));
	strcpy(data[1].commands[8].syntax, com[1][8]);

	//do while loop

	data[1].commands[9].type = LOGIC;

	libr[1][9] = "stdio.h\0";
	data[1].commands[9].lib = (char*)malloc(sizeof(char)*(strlen(libr[1][9]) + 1));
	strcpy(data[1].commands[9].lib, libr[1][9]);

	nam[1][9] = "do while\0";
	data[1].commands[9].name = (char*)malloc(sizeof(char)*(strlen(nam[1][9]) + 1));
	strcpy(data[1].commands[9].name, nam[1][9]);

	dis[1][9] = "It's another method of while loop. At first is did something, then it's checked, if condition isn't complied.\0";
	data[1].commands[9].disc = (char*)malloc(sizeof(char)*(strlen(dis[1][9]) + 1));
	strcpy(data[1].commands[9].disc, dis[1][9]);

	com[1][9] = "int i = 15;\ndo{\n\tprintf(\"Hello World\");\ni = i - 2\n} while(i > 8);\0";
	data[1].commands[9].syntax = (char*)malloc(sizeof(char)*(strlen(com[1][9]) + 1));
	strcpy(data[1].commands[9].syntax, com[1][9]);

	//if else statement

	data[1].commands[10].type = LOGIC;

	libr[1][10] = "stdio.h\0";
	data[1].commands[10].lib = (char*)malloc(sizeof(char)*(strlen(libr[1][10]) + 1));
	strcpy(data[1].commands[10].lib, libr[1][10]);

	nam[1][10] = "if else\0";
	data[1].commands[10].name = (char*)malloc(sizeof(char)*(strlen(nam[1][10]) + 1));
	strcpy(data[1].commands[10].name, nam[1][10]);

	dis[1][10] = "If you want to find out, if something is true, or false. You can use it just as if statement too.\0";
	data[1].commands[10].disc = (char*)malloc(sizeof(char)*(strlen(dis[1][10]) + 1));
	strcpy(data[1].commands[10].disc, dis[1][10]);

	com[1][10] = "if(arg1){\n\tprintf(\"arg1\");\nelse\n\tprintf(\"arg2\");\n}\0";
	data[1].commands[10].syntax = (char*)malloc(sizeof(char)*(strlen(com[1][10]) + 1));
	strcpy(data[1].commands[10].syntax, com[1][10]);

	//memmory allocation

	data[1].commands[11].type = LOGIC;

	libr[1][11] = "stdio.h stdlib.h\0";
	data[1].commands[11].lib = (char*)malloc(sizeof(char)*(strlen(libr[1][11]) + 1));
	strcpy(data[1].commands[11].lib, libr[1][11]);

	nam[1][11] = "malloc\0";
	data[1].commands[11].name = (char*)malloc(sizeof(char)*(strlen(nam[1][11]) + 1));
	strcpy(data[1].commands[11].name, nam[1][11]);

	dis[1][11] = "If you need to create some struct, but you don't know, how large it should be, you can use malloc command, to prepare enough free space in your RAM.\0";
	data[1].commands[11].disc = (char*)malloc(sizeof(char)*(strlen(dis[1][11]) + 1));
	strcpy(data[1].commands[11].disc, dis[1][11]);

	com[1][11] = "int field[] = (int*)malloc(sizeof(int)*(5));\0";
	data[1].commands[11].syntax = (char*)malloc(sizeof(char)*(strlen(com[1][11]) + 1));
	strcpy(data[1].commands[11].syntax, com[1][11]);

	//enumeration type

	data[1].commands[12].type = LOGIC;

	libr[1][12] = "stdio.h\0";
	data[1].commands[12].lib = (char*)malloc(sizeof(char)*(strlen(libr[1][12]) + 1));
	strcpy(data[1].commands[12].lib, libr[1][12]);

	nam[1][12] = "enum\0";
	data[1].commands[12].name = (char*)malloc(sizeof(char)*(strlen(nam[1][12]) + 1));
	strcpy(data[1].commands[12].name, nam[1][12]);

	dis[1][12] = "Enumerated types are used to make a program clearer to the reader/maintainer of the program\0";
	data[1].commands[12].disc = (char*)malloc(sizeof(char)*(strlen(dis[1][12]) + 1));
	strcpy(data[1].commands[12].disc, dis[1][12]);

	com[1][12] = "typedef enum Answer{\n\targ1\n\targ2\n};\n\nint i;\nAnswer answer;\nscanf(\"%d\", &i);\nif (i == 1){\n\tanswer = arg1;\n}\nelse{\n\tanswer = arg2;\n}";
	data[1].commands[12].syntax = (char*)malloc(sizeof(char)*(strlen(com[1][12]) + 1));
	strcpy(data[1].commands[12].syntax, com[1][12]);

	//switch

	data[1].commands[13].type = LOGIC;

	libr[1][13] = "stdio.h\0";
	data[1].commands[13].lib = (char*)malloc(sizeof(char)*(strlen(libr[1][13]) + 1));
	strcpy(data[1].commands[13].lib, libr[1][13]);

	nam[1][13] = "switch\0";
	data[1].commands[13].name = (char*)malloc(sizeof(char)*(strlen(nam[1][13]) + 1));
	strcpy(data[1].commands[13].name, nam[1][13]);

	dis[1][13] = "A switch statement allows a variable to be tested for equality against a list of values. Each value is called a case, and the variable being switched on is checked for each switch case.\0";
	data[1].commands[13].disc = (char*)malloc(sizeof(char)*(strlen(dis[1][13]) + 1));
	strcpy(data[1].commands[13].disc, dis[1][13]);

	com[1][13] = "switch(variable){\n\tcase 1:\n\t\tprintf(\"args1\");\n\t\tbreak;\n\tcase 2:\n\t\tprintf(\"args2\");\n\t\tbreak;\n\tcase default:\n\t\tprintf(\"args3\");\n\t\tbreak;\n}\0";
	data[1].commands[13].syntax = (char*)malloc(sizeof(char)*(strlen(com[1][13]) + 1));
	strcpy(data[1].commands[13].syntax, com[1][13]);


	char* name3 = "C\0";
	data[2].name = (char*)malloc(sizeof(char)*(strlen(name3) + 1));
	strcpy(data[2].name, name3);
	data[2].commands = (Command*)malloc(sizeof(Command) * 14);
	data[2].numberOfCommands = 14;

	//command printf

	data[2].commands[0].type = OUT_PUT;

	libr[2][0] = "stdio.h\0";
	data[2].commands[0].lib = (char*)malloc(sizeof(char)*(strlen(libr[2][0]) + 1));
	strcpy(data[2].commands[0].lib, libr[2][0]);

	nam[2][0] = "printf\0";
	data[2].commands[0].name = (char*)malloc(sizeof(char)*(strlen(nam[2][0]) + 1));
	strcpy(data[2].commands[0].name, nam[2][0]);

	dis[2][0] = "This command writes everything you want at console\0";
	data[2].commands[0].disc = (char*)malloc(sizeof(char)*(strlen(dis[2][0]) + 1));
	strcpy(data[2].commands[0].disc, dis[2][0]);

	com[2][0] = "printf(\"Hello World\");\0";
	data[2].commands[0].syntax = (char*)malloc(sizeof(char)*(strlen(com[2][0]) + 1));
	strcpy(data[2].commands[0].syntax, com[2][0]);

	//command scanf int

	data[2].commands[1].type = IN_PUT;

	libr[2][1] = "stdio.h\0";
	data[2].commands[1].lib = (char*)malloc(sizeof(char)*(strlen(libr[2][1]) + 1));
	strcpy(data[2].commands[1].lib, libr[2][1]);

	nam[2][1] = "scanf int\0";
	data[2].commands[1].name = (char*)malloc(sizeof(char)*(strlen(nam[2][1]) + 1));
	strcpy(data[2].commands[1].name, nam[2][1]);

	dis[2][1] = "This command find out, what of whole number you write at console\0";
	data[2].commands[1].disc = (char*)malloc(sizeof(char)*(strlen(dis[2][1]) + 1));
	strcpy(data[2].commands[1].disc, dis[2][1]);

	com[2][1] = "int number;\nprintf(\"Enter the whole number : \");\nscanf_s(\"%d\", &number);\0";
	data[2].commands[1].syntax = (char*)malloc(sizeof(char)*(strlen(com[2][1]) + 1));
	strcpy(data[2].commands[1].syntax, com[2][1]);

	//command scanf float or double

	data[2].commands[2].type = IN_PUT;

	libr[2][2] = "stdio.h\0";
	data[2].commands[2].lib = (char*)malloc(sizeof(char)*(strlen(libr[2][2]) + 1));
	strcpy(data[2].commands[2].lib, libr[2][2]);

	nam[2][2] = "scanf float or double\0";
	data[2].commands[2].name = (char*)malloc(sizeof(char)*(strlen(nam[2][2]) + 1));
	strcpy(data[2].commands[2].name, nam[2][2]);

	dis[2][2] = "This command find out, what of decimal number you write at console and save it to the variable\0";
	data[2].commands[2].disc = (char*)malloc(sizeof(char)*(strlen(dis[2][2]) + 1));
	strcpy(data[2].commands[2].disc, dis[2][2]);

	com[2][2] = "float number;\nprintf(\"Enter the decimal number : \");\nscanf_s(\"%f\", &number);\0";
	data[2].commands[2].syntax = (char*)malloc(sizeof(char)*(strlen(com[2][2]) + 1));
	strcpy(data[2].commands[2].syntax, com[2][2]);

	//command scanf char

	data[2].commands[3].type = IN_PUT;

	libr[2][3] = "stdio.h\0";
	data[2].commands[3].lib = (char*)malloc(sizeof(char)*(strlen(libr[2][3]) + 1));
	strcpy(data[2].commands[3].lib, libr[2][3]);

	nam[2][3] = "scanf character\0";
	data[2].commands[3].name = (char*)malloc(sizeof(char)*(strlen(nam[2][3]) + 1));
	strcpy(data[2].commands[3].name, nam[2][3]);

	dis[2][3] = "This command find out, what of character you write at console and save it to the variable\0";
	data[2].commands[3].disc = (char*)malloc(sizeof(char)*(strlen(dis[2][3]) + 1));
	strcpy(data[2].commands[3].disc, dis[2][3]);

	com[2][3] = "char c;\nprintf(\"Enter character : \");\nscanf_s(\"%c\", &c);\0";
	data[2].commands[3].syntax = (char*)malloc(sizeof(char)*(strlen(com[2][3]) + 1));
	strcpy(data[2].commands[3].syntax, com[2][3]);

	//command scanf string

	data[2].commands[4].type = IN_PUT;

	libr[2][4] = "stdio.h string.h\0";
	data[2].commands[4].lib = (char*)malloc(sizeof(char)*(strlen(libr[2][4]) + 1));
	strcpy(data[2].commands[4].lib, libr[2][4]);

	nam[2][4] = "scanf string\0";
	data[2].commands[4].name = (char*)malloc(sizeof(char)*(strlen(nam[2][4]) + 1));
	strcpy(data[2].commands[4].name, nam[2][4]);

	dis[2][4] = "This command find out, what of word you write at console and save it to the variable\0";
	data[2].commands[4].disc = (char*)malloc(sizeof(char)*(strlen(dis[2][4]) + 1));
	strcpy(data[2].commands[4].disc, dis[2][4]);

	com[2][4] = "char* w;\nprintf(\"Enter word : \");\nscanf_s(\"%s\", &w);\0";
	data[2].commands[4].syntax = (char*)malloc(sizeof(char)*(strlen(com[2][4]) + 1));
	strcpy(data[2].commands[4].syntax, com[2][4]);

	//command getchar

	data[2].commands[5].type = IN_PUT;

	libr[2][5] = "stdio.h stdlib.h\0";
	data[2].commands[5].lib = (char*)malloc(sizeof(char)*(strlen(libr[2][5]) + 1));
	strcpy(data[2].commands[5].lib, libr[2][5]);

	nam[2][5] = "Getchar\0";
	data[2].commands[5].name = (char*)malloc(sizeof(char)*(strlen(nam[2][5]) + 1));
	strcpy(data[2].commands[5].name, nam[2][5]);

	dis[2][5] = "This command is used, when you need find ouf, if some character is in the file\0";
	data[2].commands[5].disc = (char*)malloc(sizeof(char)*(strlen(dis[2][5]) + 1));
	strcpy(data[2].commands[5].disc, dis[2][5]);

	com[2][5] = "int c;\nc = getchar();\0";
	data[2].commands[5].syntax = (char*)malloc(sizeof(char)*(strlen(com[2][5]) + 1));
	strcpy(data[2].commands[5].syntax, com[2][5]);

	//command putchar

	data[2].commands[6].type = OUT_PUT;

	libr[2][6] = "stdio.h stdlib.h\0";
	data[2].commands[6].lib = (char*)malloc(sizeof(char)*(strlen(libr[2][6]) + 1));
	strcpy(data[2].commands[6].lib, libr[2][6]);

	nam[2][6] = "Putchar\0";
	data[2].commands[6].name = (char*)malloc(sizeof(char)*(strlen(nam[2][6]) + 1));
	strcpy(data[2].commands[6].name, nam[2][6]);

	dis[2][6] = "This command is used, when you need find out, if some character is in the file\0";
	data[2].commands[6].disc = (char*)malloc(sizeof(char)*(strlen(dis[2][6]) + 1));
	strcpy(data[2].commands[6].disc, dis[2][6]);

	com[2][6] = "int c;\nwhile (c != EOF) { \n\tputchar(c);\n\tc = getchar();\n }\0";
	data[2].commands[6].syntax = (char*)malloc(sizeof(char)*(strlen(com[2][6]) + 1));
	strcpy(data[2].commands[6].syntax, com[2][6]);

	//for loop

	data[2].commands[7].type = ARITMETIC;

	libr[2][7] = "stdio.h\0";
	data[2].commands[7].lib = (char*)malloc(sizeof(char)*(strlen(libr[2][7]) + 1));
	strcpy(data[2].commands[7].lib, libr[2][7]);

	nam[2][7] = "for\0";
	data[2].commands[7].name = (char*)malloc(sizeof(char)*(strlen(nam[2][7]) + 1));
	strcpy(data[2].commands[7].name, nam[2][7]);

	dis[2][7] = "This loop is used, when you know, how much do you want to repeat something\0";
	data[2].commands[7].disc = (char*)malloc(sizeof(char)*(strlen(dis[2][7]) + 1));
	strcpy(data[2].commands[7].disc, dis[2][7]);

	com[2][7] = "int i;\nfor(i = 0; i < 5; i++){\n\tprintf(\"Hello World\");\n}\0";
	data[2].commands[7].syntax = (char*)malloc(sizeof(char)*(strlen(com[2][7]) + 1));
	strcpy(data[2].commands[7].syntax, com[2][7]);

	//while loop

	data[2].commands[8].type = LOGIC;

	libr[2][8] = "stdio.h\0";
	data[2].commands[8].lib = (char*)malloc(sizeof(char)*(strlen(libr[2][8]) + 1));
	strcpy(data[2].commands[8].lib, libr[2][8]);

	nam[2][8] = "while\0";
	data[2].commands[8].name = (char*)malloc(sizeof(char)*(strlen(nam[2][8]) + 1));
	strcpy(data[2].commands[8].name, nam[2][8]);

	dis[2][8] = "This loop is used, if you don't know, how much do you want to repeat something, so this loop will be repeatet till the consition isn't complied.\0";
	data[2].commands[8].disc = (char*)malloc(sizeof(char)*(strlen(dis[2][8]) + 1));
	strcpy(data[2].commands[8].disc, dis[2][8]);

	com[2][8] = "int i = 15;\nwhile(i > 8){\n\tprintf(\"Hello World\");\ni = i - 2\n}\0";
	data[2].commands[8].syntax = (char*)malloc(sizeof(char)*(strlen(com[2][8]) + 1));
	strcpy(data[2].commands[8].syntax, com[2][8]);

	//do while loop

	data[2].commands[9].type = LOGIC;

	libr[2][9] = "stdio.h\0";
	data[2].commands[9].lib = (char*)malloc(sizeof(char)*(strlen(libr[2][9]) + 1));
	strcpy(data[2].commands[9].lib, libr[2][9]);

	nam[2][9] = "do while\0";
	data[2].commands[9].name = (char*)malloc(sizeof(char)*(strlen(nam[2][9]) + 1));
	strcpy(data[2].commands[9].name, nam[2][9]);

	dis[2][9] = "It's another method of while loop. At first is did something, then it's checked, if condition isn't complied.\0";
	data[2].commands[9].disc = (char*)malloc(sizeof(char)*(strlen(dis[2][9]) + 1));
	strcpy(data[2].commands[9].disc, dis[2][9]);

	com[2][9] = "int i = 15;\ndo{\n\tprintf(\"Hello World\");\ni = i - 2\n} while(i > 8);\0";
	data[2].commands[9].syntax = (char*)malloc(sizeof(char)*(strlen(com[2][9]) + 1));
	strcpy(data[2].commands[9].syntax, com[2][9]);

	//if else statement

	data[2].commands[10].type = LOGIC;

	libr[2][10] = "stdio.h\0";
	data[2].commands[10].lib = (char*)malloc(sizeof(char)*(strlen(libr[2][10]) + 1));
	strcpy(data[2].commands[10].lib, libr[2][10]);

	nam[2][10] = "if else\0";
	data[2].commands[10].name = (char*)malloc(sizeof(char)*(strlen(nam[2][10]) + 1));
	strcpy(data[2].commands[10].name, nam[2][10]);

	dis[2][10] = "If you want to find out, if something is true, or false. You can use it just as if statement too.\0";
	data[2].commands[10].disc = (char*)malloc(sizeof(char)*(strlen(dis[2][10]) + 1));
	strcpy(data[2].commands[10].disc, dis[2][10]);

	com[2][10] = "if(arg1){\n\tprintf(\"arg1\");\nelse\n\tprintf(\"arg2\");\n}\0";
	data[2].commands[10].syntax = (char*)malloc(sizeof(char)*(strlen(com[2][10]) + 1));
	strcpy(data[2].commands[10].syntax, com[2][10]);

	//memmory allocation

	data[2].commands[11].type = LOGIC;

	libr[2][11] = "stdio.h stdlib.h\0";
	data[2].commands[11].lib = (char*)malloc(sizeof(char)*(strlen(libr[2][11]) + 1));
	strcpy(data[2].commands[11].lib, libr[2][11]);

	nam[2][11] = "malloc\0";
	data[2].commands[11].name = (char*)malloc(sizeof(char)*(strlen(nam[2][11]) + 1));
	strcpy(data[2].commands[11].name, nam[2][11]);

	dis[2][11] = "If you need to create some struct, but you don't know, how large it should be, you can use malloc command, to prepare enough free space in your RAM.\0";
	data[2].commands[11].disc = (char*)malloc(sizeof(char)*(strlen(dis[2][11]) + 1));
	strcpy(data[2].commands[11].disc, dis[2][11]);

	com[2][11] = "int field[] = (int*)malloc(sizeof(int)*(5));\0";
	data[2].commands[11].syntax = (char*)malloc(sizeof(char)*(strlen(com[2][11]) + 1));
	strcpy(data[2].commands[11].syntax, com[2][11]);

	//enumeration type

	data[2].commands[12].type = LOGIC;

	libr[2][12] = "stdio.h\0";
	data[2].commands[12].lib = (char*)malloc(sizeof(char)*(strlen(libr[2][12]) + 1));
	strcpy(data[2].commands[12].lib, libr[2][12]);

	nam[2][12] = "enum\0";
	data[2].commands[12].name = (char*)malloc(sizeof(char)*(strlen(nam[2][12]) + 1));
	strcpy(data[2].commands[12].name, nam[2][12]);

	dis[2][12] = "Enumerated types are used to make a program clearer to the reader/maintainer of the program\0";
	data[2].commands[12].disc = (char*)malloc(sizeof(char)*(strlen(dis[2][12]) + 1));
	strcpy(data[2].commands[12].disc, dis[2][12]);

	com[2][12] = "typedef enum Answer{\n\targ1\n\targ2\n};\n\nint i;\nAnswer answer;\nscanf(\"%d\", &i);\nif (i == 1){\n\tanswer = arg1;\n}\nelse{\n\tanswer = arg2;\n}";
	data[2].commands[12].syntax = (char*)malloc(sizeof(char)*(strlen(com[2][12]) + 1));
	strcpy(data[2].commands[12].syntax, com[2][12]);

	//switch

	data[2].commands[13].type = LOGIC;

	libr[2][13] = "stdio.h\0";
	data[2].commands[13].lib = (char*)malloc(sizeof(char)*(strlen(libr[2][13]) + 1));
	strcpy(data[2].commands[13].lib, libr[2][13]);

	nam[2][13] = "switch\0";
	data[2].commands[13].name = (char*)malloc(sizeof(char)*(strlen(nam[2][13]) + 1));
	strcpy(data[2].commands[13].name, nam[2][13]);

	dis[2][13] = "A switch statement allows a variable to be tested for equality against a list of values. Each value is called a case, and the variable being switched on is checked for each switch case.\0";
	data[2].commands[13].disc = (char*)malloc(sizeof(char)*(strlen(dis[2][13]) + 1));
	strcpy(data[2].commands[13].disc, dis[2][13]);

	com[2][13] = "switch(variable){\n\tcase 1:\n\t\tprintf(\"args1\");\n\t\tbreak;\n\tcase 2:\n\t\tprintf(\"args2\");\n\t\tbreak;\n\tcase default:\n\t\tprintf(\"args3\");\n\t\tbreak;\n}\0";
	data[2].commands[13].syntax = (char*)malloc(sizeof(char)*(strlen(com[2][13]) + 1));
	strcpy(data[2].commands[13].syntax, com[2][13]);

	char* name4 = "C#\0";
	data[3].name = (char*)malloc(sizeof(char)*(strlen(name4) + 1));
	strcpy(data[3].name, name4);
	data[3].commands = (Command*)malloc(sizeof(Command) * 14);
	data[3].numberOfCommands = 14;

	//command printf

	data[3].commands[0].type = OUT_PUT;

	libr[3][0] = "null\0";
	data[3].commands[0].lib = NULL;
	//strcpy(data[3].commands[0].lib, libr[3][0]);

	nam[3][0] = "Console.Write\0";
	data[3].commands[0].name = (char*)malloc(sizeof(char)*(strlen(nam[3][0]) + 1));
	strcpy(data[3].commands[0].name, nam[3][0]);

	dis[3][0] = "This command writes everything you want at console\0";
	data[3].commands[0].disc = (char*)malloc(sizeof(char)*(strlen(dis[3][0]) + 1));
	strcpy(data[3].commands[0].disc, dis[3][0]);

	com[3][0] = "int i = 5;\nSystem.Console.Write(\"Hello World\");\nConsole.WriteLine(i);\0";
	data[3].commands[0].syntax = (char*)malloc(sizeof(char)*(strlen(com[3][0]) + 1));
	strcpy(data[3].commands[0].syntax, com[3][0]);

	//command scanf int

	data[3].commands[1].type = IN_PUT;

	libr[3][1] = "null\0";
	data[3].commands[1].lib = NULL;
	//strcpy(data[3].commands[1].lib, libr[3][1]);

	nam[3][1] = "Console.ReadLine int\0";
	data[3].commands[1].name = (char*)malloc(sizeof(char)*(strlen(nam[3][1]) + 1));
	strcpy(data[3].commands[1].name, nam[3][1]);

	dis[3][1] = "This command find out, what of whole number you write at console\0";
	data[3].commands[1].disc = (char*)malloc(sizeof(char)*(strlen(dis[3][1]) + 1));
	strcpy(data[3].commands[1].disc, dis[3][1]);

	com[3][1] = "int x = System.Console.Read();\0";
	data[3].commands[1].syntax = (char*)malloc(sizeof(char)*(strlen(com[3][1]) + 1));
	strcpy(data[3].commands[1].syntax, com[3][1]);

	//command scanf float or double

	data[3].commands[2].type = IN_PUT;

	libr[3][2] = "null\0";
	data[3].commands[2].lib = NULL;
	//strcpy(data[3].commands[2].lib, libr[3][2]);

	nam[3][2] = "Console.ReadLine float or double\0";
	data[3].commands[2].name = (char*)malloc(sizeof(char)*(strlen(nam[3][2]) + 1));
	strcpy(data[3].commands[2].name, nam[3][2]);

	dis[3][2] = "This command find out, what of decimal number you write at console and save it to the variable\0";
	data[3].commands[2].disc = (char*)malloc(sizeof(char)*(strlen(dis[3][2]) + 1));
	strcpy(data[3].commands[2].disc, dis[3][2]);

	com[3][2] = "float x = System.Console.Read();\0";
	data[3].commands[2].syntax = (char*)malloc(sizeof(char)*(strlen(com[3][2]) + 1));
	strcpy(data[3].commands[2].syntax, com[3][2]);

	//command scanf char

	data[3].commands[3].type = IN_PUT;

	libr[3][3] = "null\0";
	data[3].commands[3].lib = NULL;
	//strcpy(data[3].commands[3].lib, libr[3][3]);

	nam[3][3] = "Console.ReadLine character\0";
	data[3].commands[3].name = (char*)malloc(sizeof(char)*(strlen(nam[3][3]) + 1));
	strcpy(data[3].commands[3].name, nam[3][3]);

	dis[3][3] = "This command find out, what of character you write at console and save it to the variable\0";
	data[3].commands[3].disc = (char*)malloc(sizeof(char)*(strlen(dis[3][3]) + 1));
	strcpy(data[3].commands[3].disc, dis[3][3]);

	com[3][3] = "char x = System.Console.Read();\0";
	data[3].commands[3].syntax = (char*)malloc(sizeof(char)*(strlen(com[3][3]) + 1));
	strcpy(data[3].commands[3].syntax, com[3][3]);

	//command scanf string

	data[3].commands[4].type = IN_PUT;

	libr[3][4] = "null\0";
	data[3].commands[4].lib = NULL;
	//strcpy(data[3].commands[4].lib, libr[3][4]);

	nam[3][4] = "Console.ReadLine string\0";
	data[3].commands[4].name = (char*)malloc(sizeof(char)*(strlen(nam[3][4]) + 1));
	strcpy(data[3].commands[4].name, nam[3][4]);

	dis[3][4] = "This command find out, what of word you write at console and save it to the variable\0";
	data[3].commands[4].disc = (char*)malloc(sizeof(char)*(strlen(dis[3][4]) + 1));
	strcpy(data[3].commands[4].disc, dis[3][4]);

	com[3][4] = "string x = System.Console.ReadLine();\0";
	data[3].commands[4].syntax = (char*)malloc(sizeof(char)*(strlen(com[3][4]) + 1));
	strcpy(data[3].commands[4].syntax, com[3][4]);

	//command getchar

	data[3].commands[5].type = IN_PUT;

	libr[3][5] = "null\0";
	data[3].commands[5].lib = NULL;
	//strcpy(data[3].commands[5].lib, libr[3][5]);

	nam[3][5] = "Getchar\0";
	data[3].commands[5].name = (char*)malloc(sizeof(char)*(strlen(nam[3][5]) + 1));
	strcpy(data[3].commands[5].name, nam[3][5]);

	dis[3][5] = "This command find out, what of character you write at console and save it to the variable\0";
	data[3].commands[5].disc = (char*)malloc(sizeof(char)*(strlen(dis[3][5]) + 1));
	strcpy(data[3].commands[5].disc, dis[3][5]);

	com[3][5] = "char x;\nx = System.Console.Read();\0";
	data[3].commands[5].syntax = (char*)malloc(sizeof(char)*(strlen(com[3][5]) + 1));
	strcpy(data[3].commands[5].syntax, com[3][5]);

	//command putchar

	data[3].commands[6].type = OUT_PUT;

	libr[3][6] = "null\0";
	data[3].commands[6].lib = NULL;
	//strcpy(data[3].commands[6].lib, libr[3][6]);

	nam[3][6] = "Putchar\0";
	data[3].commands[6].name = (char*)malloc(sizeof(char)*(strlen(nam[3][6]) + 1));
	strcpy(data[3].commands[6].name, nam[3][6]);

	dis[3][6] = "This command writes everything you want at console\0";
	data[3].commands[6].disc = (char*)malloc(sizeof(char)*(strlen(dis[3][6]) + 1));
	strcpy(data[3].commands[6].disc, dis[3][6]);

	com[3][6] = "char x;\nx = System.Console.Write();\0";
	data[3].commands[6].syntax = (char*)malloc(sizeof(char)*(strlen(com[3][6]) + 1));
	strcpy(data[3].commands[6].syntax, com[3][6]);

	//for loop

	data[3].commands[7].type = ARITMETIC;

	libr[3][7] = "null\0";
	data[3].commands[7].lib = NULL;
	//strcpy(data[3].commands[7].lib, libr[3][7]);

	nam[3][7] = "for\0";
	data[3].commands[7].name = (char*)malloc(sizeof(char)*(strlen(nam[3][7]) + 1));
	strcpy(data[3].commands[7].name, nam[3][7]);

	dis[3][7] = "This loop is used, when you know, how much do you want to repeat something\0";
	data[3].commands[7].disc = (char*)malloc(sizeof(char)*(strlen(dis[3][7]) + 1));
	strcpy(data[3].commands[7].disc, dis[3][7]);

	com[3][7] = "int i;\nfor(i = 0; i < 5; i++){\n\tConsole.WriteLine(\"Hello World\");\n}\0";
	data[3].commands[7].syntax = (char*)malloc(sizeof(char)*(strlen(com[3][7]) + 1));
	strcpy(data[3].commands[7].syntax, com[3][7]);

	//while loop

	data[3].commands[8].type = LOGIC;

	libr[3][8] = "null\0";
	data[3].commands[8].lib = NULL;
	//strcpy(data[3].commands[8].lib, libr[3][8]);

	nam[3][8] = "while\0";
	data[3].commands[8].name = (char*)malloc(sizeof(char)*(strlen(nam[3][8]) + 1));
	strcpy(data[3].commands[8].name, nam[3][8]);

	dis[3][8] = "This loop is used, if you don't know, how much do you want to repeat something, so this loop will be repeatet till the consition isn't complied.\0";
	data[3].commands[8].disc = (char*)malloc(sizeof(char)*(strlen(dis[3][8]) + 1));
	strcpy(data[3].commands[8].disc, dis[3][8]);

	com[3][8] = "int i = 15;\nwhile(i > 8){\n\tConsole.Write(\"Hello World\");\ni = i - 2\n}\0";
	data[3].commands[8].syntax = (char*)malloc(sizeof(char)*(strlen(com[3][8]) + 1));
	strcpy(data[3].commands[8].syntax, com[3][8]);

	//do while loop

	data[3].commands[9].type = LOGIC;

	libr[3][9] = "null\0";
	data[3].commands[9].lib = NULL;
	//strcpy(data[3].commands[9].lib, libr[3][9]);

	nam[3][9] = "do while\0";
	data[3].commands[9].name = (char*)malloc(sizeof(char)*(strlen(nam[3][9]) + 1));
	strcpy(data[3].commands[9].name, nam[3][9]);

	dis[3][9] = "It's another method of while loop. At first is did something, then it's checked, if condition isn't complied.\0";
	data[3].commands[9].disc = (char*)malloc(sizeof(char)*(strlen(dis[3][9]) + 1));
	strcpy(data[3].commands[9].disc, dis[3][9]);

	com[3][9] = "int i = 15;\ndo{\n\tConsole.Write(\"Hello World\");\ni = i - 2\n} while(i > 8);\0";
	data[3].commands[9].syntax = (char*)malloc(sizeof(char)*(strlen(com[3][9]) + 1));
	strcpy(data[3].commands[9].syntax, com[3][9]);

	//if else statement

	data[3].commands[10].type = LOGIC;

	libr[3][10] = "null\0";
	data[3].commands[10].lib = NULL;
	//strcpy(data[3].commands[10].lib, libr[3][10]);

	nam[3][10] = "if else\0";
	data[3].commands[10].name = (char*)malloc(sizeof(char)*(strlen(nam[3][10]) + 1));
	strcpy(data[3].commands[10].name, nam[3][10]);

	dis[3][10] = "If you want to find out, if something is true, or false. You can use it just as if statement too.\0";
	data[3].commands[10].disc = (char*)malloc(sizeof(char)*(strlen(dis[3][10]) + 1));
	strcpy(data[3].commands[10].disc, dis[3][10]);

	com[3][10] = "if(arg1){\n\tConsole.Write(\"arg1\");\nelse\n\tConsole.Write(\"arg2\");\0";
	data[3].commands[10].syntax = (char*)malloc(sizeof(char)*(strlen(com[3][10]) + 1));
	strcpy(data[3].commands[10].syntax, com[3][10]);

	//memmory allocation

	data[3].commands[11].type = LOGIC;

	libr[3][11] = "System.Runtime.InteropServices\0";
	data[3].commands[11].lib = (char*)malloc(sizeof(char)*(strlen(libr[3][11]) + 1));
	strcpy(data[3].commands[11].lib, libr[3][11]);

	nam[3][11] = "malloc\0";
	data[3].commands[11].name = (char*)malloc(sizeof(char)*(strlen(nam[3][11]) + 1));
	strcpy(data[3].commands[11].name, nam[3][11]);

	dis[3][11] = "If you need to create some struct, but you don't know, how large it should be, you can use malloc command, to prepare enough free space in your RAM.\0";
	data[3].commands[11].disc = (char*)malloc(sizeof(char)*(strlen(dis[3][11]) + 1));
	strcpy(data[3].commands[11].disc, dis[3][11]);

	com[3][11] = "IntPtr pointer = Marshal.AllocHGlobal(SIZE);\0";
	data[3].commands[11].syntax = (char*)malloc(sizeof(char)*(strlen(com[3][11]) + 1));
	strcpy(data[3].commands[10].syntax, com[3][11]);

	//enumeration type

	data[3].commands[12].type = LOGIC;

	libr[3][12] = "null\0";
	data[3].commands[12].lib = NULL;
	//strcpy(data[3].commands[12].lib, libr[3][12]);

	nam[3][12] = "enum\0";
	data[3].commands[12].name = (char*)malloc(sizeof(char)*(strlen(nam[3][12]) + 1));
	strcpy(data[3].commands[12].name, nam[3][12]);

	dis[3][12] = "Enumerated types are used to make a program clearer to the reader/maintainer of the program\0";
	data[3].commands[12].disc = (char*)malloc(sizeof(char)*(strlen(dis[3][12]) + 1));
	strcpy(data[3].commands[12].disc, dis[3][12]);

	com[3][12] = "enum Importance{\n\tNone,\n\tTrivial,\n\tRegular,\n\tImportant,\n\tCritical\n};\n\nstatic void Main(){\n\tImportance value = Importance.Critical;\n\tif (value == Importance.Trivial){\n\t\tConsole.WriteLine(\"Not true\");\n\t}\n\telse if (value == Importance.Critical){\n\t\tConsole.WriteLine(\"True\");\n\t}\n}";
	data[3].commands[12].syntax = (char*)malloc(sizeof(char)*(strlen(com[3][12]) + 1));
	strcpy(data[3].commands[12].syntax, com[3][12]);

	//switch

	data[3].commands[13].type = LOGIC;

	libr[3][13] = "null\0";
	data[3].commands[13].lib = NULL;
	//strcpy(data[3].commands[13].lib, libr[3][13]);

	nam[3][13] = "switch\0";
	data[3].commands[13].name = (char*)malloc(sizeof(char)*(strlen(nam[3][13]) + 1));
	strcpy(data[3].commands[13].name, nam[3][13]);

	dis[3][13] = "A switch statement allows a variable to be tested for equality against a list of values. Each value is called a case, and the variable being switched on is checked for each switch case.\0";
	data[3].commands[13].disc = (char*)malloc(sizeof(char)*(strlen(dis[3][13]) + 1));
	strcpy(data[3].commands[13].disc, dis[3][13]);

	com[3][13] = "int i = 1;switch(i){\n\tcase 1:\n\t\tConsole.WriteLine(\"args1\");\n\t\tbreak;\n\tcase 2:\n\t\tConsole.WriteLine(\"args2\");\n\t\tbreak;\n\tcase default:\n\t\tConsole.WriteLine(\"Case: default\");\n\t\tbreak;\n}\0";
	data[3].commands[13].syntax = (char*)malloc(sizeof(char)*(strlen(com[3][13]) + 1));
	strcpy(data[3].commands[13].syntax, com[3][13]);

	char *name5 = "Python\0";
	data[4].name = (char*)malloc(sizeof(char)*(strlen(name5) + 1));
	strcpy(data[4].name	, name5);
	data[4].commands = (Command*)malloc(sizeof(Command) * 14);
	data[4].numberOfCommands = 14;

	//command Print

	data[4].commands[0].type = OUT_PUT;

	libr[4][0] = "null\0";
	data[4].commands[0].lib = NULL;
	//strcpy(data[4].commands[0].lib, libr[4][0]);

	nam[4][0] = "Print\0";
	data[4].commands[0].name = (char*)malloc(sizeof(char)*(strlen(nam[4][0]) + 1));
	strcpy(data[4].commands[0].name, nam[4][0]);

	dis[4][0] = "Print is a standard output function used in Python.\0";
	data[4].commands[0].disc = (char*)malloc(sizeof(char)*(strlen(dis[4][0]) + 1));
	strcpy(data[4].commands[0].disc, dis[4][0]);

	com[4][0] = "print \"Hello, Python!\"\0";
	data[4].commands[0].syntax = (char*)malloc(sizeof(char)*(strlen(com[4][0]) + 1));
	strcpy(data[4].commands[0].syntax, com[4][0]);

	//command Scanf Int

	data[4].commands[1].type = IN_PUT;

	libr[4][1] = "null\0";
	data[4].commands[1].lib = NULL;
	//strcpy(data[4].commands[1].lib, libr[4][1]);

	nam[4][1] = "Scanf Int\0";
	data[4].commands[1].name = (char*)malloc(sizeof(char)*(strlen(nam[4][1]) + 1));
	strcpy(data[4].commands[1].name, nam[4][1]);

	dis[4][1] = "Python does not return inputs as int.\0";
	data[4].commands[1].disc = (char*)malloc(sizeof(char)*(strlen(dis[4][1]) + 1));
	strcpy(data[4].commands[1].disc, dis[4][1]);

	com[4][1] = "null\0";
	data[4].commands[1].syntax = NULL;
	//strcpy(data[4].commands[1].syntax, com[4][1]);

	//command Scanf Double

	data[4].commands[2].type = IN_PUT;

	libr[4][2] = "null\0";
	data[4].commands[2].lib = NULL;
	//strcpy(data[4].commands[2].lib, libr[4][2]);

	nam[4][2] = "Scanf Double\0";
	data[4].commands[2].name = (char*)malloc(sizeof(char)*(strlen(nam[4][2]) + 1));
	strcpy(data[4].commands[2].name, nam[4][2]);

	dis[4][2] = "Python does not return inputs as double.\0";
	data[4].commands[2].disc = (char*)malloc(sizeof(char)*(strlen(dis[4][2]) + 1));
	strcpy(data[4].commands[2].disc, dis[4][2]);

	com[4][2] = "null\0";
	data[4].commands[2].syntax = NULL;
	//strcpy(data[4].commands[2].syntax, com[4][1]);

	//command Scanf Char

	data[4].commands[3].type = IN_PUT;

	libr[4][3] = "null\0";
	data[4].commands[3].lib = NULL;
	//strcpy(data[4].commands[3].lib, libr[4][3]);

	nam[4][3] = "Scanf Char\0";
	data[4].commands[3].name = (char*)malloc(sizeof(char)*(strlen(nam[4][3]) + 1));
	strcpy(data[4].commands[3].name, nam[4][3]);

	dis[4][3] = "Python does not return inputs as char.\0";
	data[4].commands[3].disc = (char*)malloc(sizeof(char)*(strlen(dis[4][3]) + 1));
	strcpy(data[4].commands[3].disc, dis[4][3]);

	com[4][3] = "null\0";
	data[4].commands[3].syntax = NULL;
	//strcpy(data[4].commands[3].syntax, com[4][3]);

	//command Scanf String

	data[4].commands[4].type = IN_PUT;

	libr[4][4] = "null\0";
	data[4].commands[4].lib = NULL;
	//strcpy(data[4].commands[4].lib, libr[4][4]);

	nam[4][4] = "Scanf String\0";
	data[4].commands[4].name = (char*)malloc(sizeof(char)*(strlen(nam[4][4]) + 1));
	strcpy(data[4].commands[4].name, nam[4][4]);

	dis[4][4] = "Python only return inputs as Strings.\0";
	data[4].commands[4].disc = (char*)malloc(sizeof(char)*(strlen(dis[4][4]) + 1));
	strcpy(data[4].commands[4].disc, dis[4][4]);

	com[4][4] = "user_input = input('Give me a number: ')\n user_input\n print ('Your number was %s' % (user_input))\0";
	data[4].commands[4].syntax = (char*)malloc(sizeof(char)*(strlen(com[4][4]) + 1));
	strcpy(data[4].commands[4].syntax, com[4][4]);

	//command Putchar

	data[4].commands[5].type = OUT_PUT;

	libr[4][5] = "null\0";
	data[4].commands[5].lib = NULL;
	//strcpy(data[4].commands[5].lib, libr[4][5]);

	nam[4][5] = "Putchar\0";
	data[4].commands[5].name = (char*)malloc(sizeof(char)*(strlen(nam[4][5]) + 1));
	strcpy(data[4].commands[5].name, nam[4][5]);

	dis[4][5] = "Putchar() takes an int value and outputs a single character to stdou.\0";
	data[4].commands[5].disc = (char*)malloc(sizeof(char)*(strlen(dis[4][5]) + 1));
	strcpy(data[4].commands[5].disc, dis[4][5]);

	com[4][5] = "sys.stdout.write(char(c))\0";
	data[4].commands[5].syntax = (char*)malloc(sizeof(char)*(strlen(com[4][5]) + 1));
	strcpy(data[4].commands[5].syntax, com[4][5]);

	//command Getchar

	data[4].commands[6].type = IN_PUT;

	libr[4][6] = "readchar\0";
	data[4].commands[6].lib = (char*)malloc(sizeof(char)*(strlen(libr[4][6]) + 1));
	strcpy(data[4].commands[6].lib, libr[4][6]);

	nam[4][6] = "Getchar\0";
	data[4].commands[6].name = (char*)malloc(sizeof(char)*(strlen(nam[4][6]) + 1));
	strcpy(data[4].commands[6].name, nam[4][6]);

	dis[4][6] = "For reading one single character we use the readchar library, which is in part based on the ActiveState recipe.\0";
	data[4].commands[6].disc = (char*)malloc(sizeof(char)*(strlen(dis[4][6]) + 1));
	strcpy(data[4].commands[6].disc, dis[4][6]);

	com[4][6] = "import readchar\n print(\"Reading a char:\")\n print(repr(readchar.readchr()))\0";
	data[4].commands[6].syntax = (char*)malloc(sizeof(char)*(strlen(com[4][6]) + 1));
	strcpy(data[4].commands[6].syntax, com[4][6]);

	//command For

	data[4].commands[7].type = ARITMETIC;

	libr[4][7] = "null\0";
	data[4].commands[7].lib = NULL;
	//strcpy(data[4].commands[7].lib, libr[4][7]);

	nam[4][7] = "For\0";
	data[4].commands[7].name = (char*)malloc(sizeof(char)*(strlen(nam[4][7]) + 1));
	strcpy(data[4].commands[7].name, nam[4][7]);

	dis[4][7] = "The for statement is used to iterate over the elements of a sequence (such as a string, tuple or list) or other iterable object.\0";
	data[4].commands[7].disc = (char*)malloc(sizeof(char)*(strlen(dis[4][7]) + 1));
	strcpy(data[4].commands[7].disc, dis[4][7]);

	com[4][7] = "words = ['cat', 'window', 'defenestrate']\n for w in words:\n print w, len(w)\0";
	data[4].commands[7].syntax = (char*)malloc(sizeof(char)*(strlen(com[4][7]) + 1));
	strcpy(data[4].commands[7].syntax, com[4][7]);

	//command While

	data[4].commands[8].type = LOGIC;

	libr[4][8] = "null\0";
	data[4].commands[8].lib = NULL;
	//strcpy(data[4].commands[8].lib, libr[4][8]);

	nam[4][8] = "While\0";
	data[4].commands[8].name = (char*)malloc(sizeof(char)*(strlen(nam[4][8]) + 1));
	strcpy(data[4].commands[8].name, nam[4][8]);

	dis[4][8] = "The while statement is used for repeated execution as long as an expression is true.\0";
	data[4].commands[8].disc = (char*)malloc(sizeof(char)*(strlen(dis[4][8]) + 1));
	strcpy(data[4].commands[8].disc, dis[4][8]);

	com[4][8] = "number = 1\n while (number < 10):\n print(number)\n number = number + 1\0";
	data[4].commands[8].syntax = (char*)malloc(sizeof(char)*(strlen(com[4][8]) + 1));
	strcpy(data[4].commands[8].syntax, com[4][8]);

	//command Do_While

	data[4].commands[9].type = LOGIC;

	libr[4][9] = "null\0";
	data[4].commands[9].lib = NULL;
	//strcpy(data[4].commands[9].lib, libr[4][9]);

	nam[4][9] = "Do_While\0";
	data[4].commands[9].name = (char*)malloc(sizeof(char)*(strlen(nam[4][9]) + 1));
	strcpy(data[4].commands[9].name, nam[4][9]);

	dis[4][9] = "You can only emulate do while loops if you really want to use them.\0";
	data[4].commands[9].disc = (char*)malloc(sizeof(char)*(strlen(dis[4][9]) + 1));
	strcpy(data[4].commands[9].disc, dis[4][9]);

	com[4][9] = "null\0";
	data[4].commands[9].syntax = NULL;
	//strcpy(data[4].commands[9].syntax, com[4][9]);

	//command If

	data[4].commands[10].type = LOGIC;

	libr[4][10] = "null\0";
	data[4].commands[10].lib = NULL;
	//strcpy(data[4].commands[10].lib, libr[4][10]);

	nam[4][10] = "If\0";
	data[4].commands[10].name = (char*)malloc(sizeof(char)*(strlen(nam[4][10]) + 1));
	strcpy(data[4].commands[10].name, nam[4][10]);

	dis[4][10] = "The if statement is used for conditional execution.\0";
	data[4].commands[10].disc = (char*)malloc(sizeof(char)*(strlen(dis[4][10]) + 1));
	strcpy(data[4].commands[10].disc, dis[4][10]);

	com[4][10] = "var = 100\n if var == 200:\n print \"Our number is 200\"\n print var\n elif var == 100:\n print \"Our number is 100\"\n print var\n else:\n print \"Number is not 100 or 200\"\n print var\0";
	data[4].commands[10].syntax = (char*)malloc(sizeof(char)*(strlen(com[4][10]) + 1));
	strcpy(data[4].commands[10].syntax, com[4][10]);

	//command Malloc

	data[4].commands[11].type = LOGIC;

	libr[4][11] = "null\0";
	data[4].commands[11].lib = NULL;
	//strcpy(data[4].commands[11].lib, libr[4][11]);

	nam[4][11] = "Malloc\0";
	data[4].commands[11].name = (char*)malloc(sizeof(char)*(strlen(nam[4][11]) + 1));
	strcpy(data[4].commands[11].name, nam[4][11]);

	dis[4][11] = "Allocates n bytes and returns a pointer of type void* to the allocated memory, or NULL if the request fails.\0";
	data[4].commands[11].disc = (char*)malloc(sizeof(char)*(strlen(dis[4][11]) + 1));
	strcpy(data[4].commands[11].disc, dis[4][11]);

	com[4][11] = "void* PyMem_RawMalloc(size_t n)\0";
	data[4].commands[11].syntax = (char*)malloc(sizeof(char)*(strlen(com[4][11]) + 1));
	strcpy(data[4].commands[11].syntax, com[4][11]);

	//command Enum

	data[4].commands[12].type = LOGIC;

	libr[4][12] = "null\0";
	data[4].commands[12].lib = NULL;
	//strcpy(data[4].commands[12].lib, libr[4][12]);

	nam[4][12] = "Enum\0";
	data[4].commands[12].name = (char*)malloc(sizeof(char)*(strlen(nam[4][12]) + 1));
	strcpy(data[4].commands[12].name, nam[4][12]);

	dis[4][12] = "An enumeration is a set of symbolic names (members) bound to unique, constant values.\0";
	data[4].commands[12].disc = (char*)malloc(sizeof(char)*(strlen(dis[4][12]) + 1));
	strcpy(data[4].commands[12].disc, dis[4][12]);

	com[4][12] = "class Animals(Enum):\n ant = 1\n bee = 2\n cat = 3\n\n def __init__(self, Type):\n self.value = Type\n def __str__(self):\n\n if self.value == Animals.bee:\n return 'Bee'\n if self.value == Animals.cat:\n return 'Cat'\n\n def __eq__(self,y):\n return self.value==y.value\0";
	data[4].commands[12].syntax = (char*)malloc(sizeof(char)*(strlen(com[4][12]) + 1));
	strcpy(data[4].commands[12].syntax, com[4][12]);

	//command Switch

	data[4].commands[13].type = LOGIC;

	libr[4][13] = "null\0";
	data[4].commands[13].lib = NULL;
	//strcpy(data[4].commands[13].lib, libr[4][13]);

	nam[4][13] = "Switch\0";
	data[4].commands[13].name = (char*)malloc(sizeof(char)*(strlen(nam[4][13]) + 1));
	strcpy(data[4].commands[13].name, nam[4][13]);

	dis[4][13] = "Python does not appear to have a switch statement.\0";
	data[4].commands[13].disc = (char*)malloc(sizeof(char)*(strlen(dis[4][13]) + 1));
	strcpy(data[4].commands[13].disc, dis[4][13]);

	com[4][13] = "null\0";
	data[4].commands[13].syntax = NULL;
	//strcpy(data[4].commands[13].syntax, com[4][13]);

	

	return data;
}