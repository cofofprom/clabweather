#define _CRT_SECURE_NO_WARNINGS

#include "ReadTemplates.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int readAllGreets(char buf[][512])
{
	FILE* greetIn = fopen("greet.txt", "r");

	int bufc = 0;
	char line[512] = { 0 };
	while (fgets(line, 512, greetIn))
	{		
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
	char line[512] = { 0 };
	while (fgets(line, 512, greetIn))
	{	
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
	char line[512] = { 0 };
	while (fgets(line, 512, greetIn))
	{	
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
	char line[512] = { 0 };
	while (fgets(line, 512, greetIn))
	{
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
	char line[512] = { 0 };
	while (fgets(line, 512, greetIn))
	{
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
	char line[512] = { 0 };
	while (fgets(line, 512, greetIn))
	{
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
	char line[512] = { 0 };
	while (fgets(line, 512, greetIn))
	{
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
	char line[512] = { 0 };
	while (fgets(line, 512, greetIn))
	{
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
	char line[512] = { 0 };
	while (fgets(line, 512, greetIn))
	{
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
	char line[512] = { 0 };
	while (fgets(line, 512, greetIn))
	{
		line[strlen(line) - 1] = 0;
		strcpy(buf[bufc++], line);
	}

	fclose(greetIn);

	return bufc;
}

void printHello(FILE* out)
{
	char tTemplates[20][512] = { 0 };
	int sz = 0;
	sz = readAllGreets(tTemplates);

	fprintf(out, tTemplates[rand() % sz]);
}

void printDayTemp(int temp, FILE* out)
{
	char tTemplates[20][512] = { 0 };
	int sz = 0;
	sz = readAllTemp(tTemplates);

	fprintf(out, tTemplates[rand() % sz], temp);
}

void printDate(char* date, FILE* out)
{
	char tTemplates[20][512] = { 0 };
	int sz = 0;
	sz = readAllDate(tTemplates);

	fprintf(out, tTemplates[rand() % sz], date);
}

void printNightTemp(int temp, FILE* out)
{
	char tTemplates[20][512] = { 0 };
	int sz = 0;
	sz = readAllTempNight(tTemplates);

	fprintf(out, tTemplates[rand() % sz], temp);
}

void printOsadki(char* os, FILE* out)
{
	char tTemplates[20][512] = { 0 };
	int sz = 0;
	sz = readAllOsadki(tTemplates);

	fprintf(out, tTemplates[rand() % sz], os);
}

void printPresure(int pr, FILE* out)
{
	char tTemplates[20][512] = { 0 };
	int sz = 0;
	sz = readAllPressure(tTemplates);

	fprintf(out, tTemplates[rand() % sz], pr);
}

void printWind(int wspeed, FILE* out)
{
	char tTemplates[20][512] = { 0 };
	int sz = 0;
	sz = readAllWind(tTemplates);

	fprintf(out, tTemplates[rand() % sz], wspeed);
}

void printJawlenie(char* w, FILE* out)
{
	char tTemplates[20][512] = { 0 };
	int sz = 0;
	sz = readAllJawlenie(tTemplates);

	fprintf(out, tTemplates[rand() % sz], w);
}

void printBye(FILE* out)
{
	char tTemplates[20][512] = { 0 };
	int sz = 0;
	sz = readAllBye(tTemplates);

	fprintf(out, tTemplates[rand() % sz]);
}
