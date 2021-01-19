#define _CRT_SECURE_NO_WARNINGS

#include "ReadTemplates.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

	return bufc;
}

int readAllDate(char buf[][512])
{
	FILE* greetIn = fopen("Date.txt", "r");

	int bufc = 0;
	while (!feof(greetIn))
	{
		char line[512] = { 0 };
		fgets(line, 512, greetIn);
		line[strlen(line) - 1] = 0;
		strcpy(buf[bufc++], line);
	}

	fclose(greetIn);

	return bufc;
}

int readAllTemp(char buf[][512])
{
	FILE* greetIn = fopen("Temp.txt", "r");

	int bufc = 0;
	while (!feof(greetIn))
	{
		char line[512] = { 0 };
		fgets(line, 512, greetIn);
		line[strlen(line) - 1] = 0;
		strcpy(buf[bufc++], line);
	}

	fclose(greetIn);

	return bufc;
}

int readAllTempNight(char buf[][512])
{
	FILE* greetIn = fopen("TempNight.txt", "r");

	int bufc = 0;
	while (!feof(greetIn))
	{
		char line[512] = { 0 };
		fgets(line, 512, greetIn);
		line[strlen(line) - 1] = 0;
		strcpy(buf[bufc++], line);
	}

	fclose(greetIn);

	return bufc;
}

int readAllReactions(char buf[][512])
{
	FILE* greetIn = fopen("Reactions.txt", "r");

	int bufc = 0;
	while (!feof(greetIn))
	{
		char line[512] = { 0 };
		fgets(line, 512, greetIn);
		line[strlen(line) - 1] = 0;
		strcpy(buf[bufc++], line);
	}

	fclose(greetIn);

	return bufc;
}

int readAllOsadki(char buf[][512])
{
	FILE* greetIn = fopen("Osadki.txt", "r");

	int bufc = 0;
	while (!feof(greetIn))
	{
		char line[512] = { 0 };
		fgets(line, 512, greetIn);
		line[strlen(line) - 1] = 0;
		strcpy(buf[bufc++], line);
	}

	fclose(greetIn);

	return bufc;
}

int readAllPressure(char buf[][512])
{
	FILE* greetIn = fopen("Pressure.txt", "r");

	int bufc = 0;
	while (!feof(greetIn))
	{
		char line[512] = { 0 };
		fgets(line, 512, greetIn);
		line[strlen(line) - 1] = 0;
		strcpy(buf[bufc++], line);
	}

	fclose(greetIn);

	return bufc;
}

int readAllWind(char buf[][512])
{
	FILE* greetIn = fopen("Wind.txt", "r");

	int bufc = 0;
	while (!feof(greetIn))
	{
		char line[512] = { 0 };
		fgets(line, 512, greetIn);
		line[strlen(line) - 1] = 0;
		strcpy(buf[bufc++], line);
	}

	fclose(greetIn);

	return bufc;
}

int readAllJawlenie(char buf[][512])
{
	FILE* greetIn = fopen("Jawlenie.txt", "r");

	int bufc = 0;
	while (!feof(greetIn))
	{
		char line[512] = { 0 };
		fgets(line, 512, greetIn);
		line[strlen(line) - 1] = 0;
		strcpy(buf[bufc++], line);
	}

	fclose(greetIn);

	return bufc;
}

int readAllBye(char buf[][512])
{
	FILE* greetIn = fopen("Bye.txt", "r");

	int bufc = 0;
	while (!feof(greetIn))
	{
		char line[512] = { 0 };
		fgets(line, 512, greetIn);
		line[strlen(line) - 1] = 0;
		strcpy(buf[bufc++], line);
	}

	fclose(greetIn);

	return bufc;
}

char* pickRandomTemp()
{
	char tTemplates[20][512] = { 0 };
	switch (rand() % 2)
	{
	case 0:
		int sz = readAllTemp(tTemplates);
		return (tTemplates[rand() % sz]);
		break;
	case 1:
		readAllTempNight(tTemplates);
		return (tTemplates[rand() % sz]);
		break;


	}
}
