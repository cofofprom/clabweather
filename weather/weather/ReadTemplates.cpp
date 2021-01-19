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

	return bufc - 1;
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

	return bufc - 1;
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

	return bufc - 1;
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

	return bufc - 1;
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

	return bufc - 1;
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

	return bufc - 1;
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

	return bufc - 1;
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

	return bufc - 1;
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

	return bufc - 1;
}
