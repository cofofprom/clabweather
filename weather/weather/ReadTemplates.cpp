#define _CRT_SECURE_NO_WARNINGS

#include "ReadTemplates.h"
#include <stdio.h>
#include <string.h>

int readAllGreets(char buf[][512])
{
	FILE* greetIn = fopen("greet.txt", "r");

	int bufc = 0;
	while (!feof(greetIn))
	{
		char line[512] = { 0 };
		fgets(line, 512, greetIn);
		line[strlen(line) - 1] = 0;
		strcpy(buf[bufc++], line);
	}

	fclose(greetIn);

	return bufc - 1;
}

int readAllDate(char buf[][512])
{
	return 0;
}

int readAllTemp(char buf[][512])
{
	return 0;
}

int readAllTempNight(char buf[][512])
{
	return 0;
}

int readAllOsadki(char buf[][512])
{
	return 0;
}

int readAllPressure(char buf[][512])
{
	return 0;
}

int readAllWind(char buf[][512])
{
	return 0;
}

int readAllJawlenie(char buf[][512])
{
	return 0;
}

int readAllBye(char buf[][512])
{
	return 0;
}
