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

int readHighWinter(char buf[][512])
{
	FILE* greetIn = fopen("an_hight_winter.txt", "r");

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

int readLowWinter(char buf[][512])
{
	FILE* greetIn = fopen("an_low_winter.txt", "r");

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

int readAvWinter(char buf[][512])
{
	FILE* greetIn = fopen("norm_winter.txt", "r");

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

int readHighSummer(char buf[][512])
{
	FILE* greetIn = fopen("an_hight_summer.txt", "r");

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

int readLowSummer(char buf[][512])
{
	FILE* greetIn = fopen("an_low_summer.txt", "r");

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

int readAvSummer(char buf[][512])
{
	FILE* greetIn = fopen("norm_summer.txt", "r");

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

int readHighOther(char buf[][512])
{
	FILE* greetIn = fopen("an_hight_double.txt", "r");

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

int readLowOther(char buf[][512])
{
	FILE* greetIn = fopen("an_low_double.txt", "r");

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

int readAvOther(char buf[][512])
{
	FILE* greetIn = fopen("norm_double.txt", "r");

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

void printHello(FILE* out, int dice)
{
	char tTemplates[20][512] = { 0 };
	int sz = 0;
	sz = readAllGreets(tTemplates);

	fprintf(out, tTemplates[dice % sz]);
}

void printDayTemp(int temp, FILE* out, int dice)
{
	char tTemplates[20][512] = { 0 };
	int sz = 0;
	sz = readAllTemp(tTemplates);

	fprintf(out, tTemplates[dice % sz], temp);
}

void printDate(char* date, FILE* out, int dice)
{
	char tTemplates[20][512] = { 0 };
	int sz = 0;
	sz = readAllDate(tTemplates);

	fprintf(out, tTemplates[dice % sz], date);
}

void printNightTemp(int temp, FILE* out, int dice)
{
	char tTemplates[20][512] = { 0 };
	int sz = 0;
	sz = readAllTempNight(tTemplates);

	fprintf(out, tTemplates[dice % sz], temp);
}

void printOsadki(char* os, FILE* out, int dice)
{
	char tTemplates[20][512] = { 0 };
	int sz = 0;
	sz = readAllOsadki(tTemplates);

	fprintf(out, tTemplates[dice % sz], os);
}

void printPresure(int pr, FILE* out, int dice)
{
	char tTemplates[20][512] = { 0 };
	int sz = 0;
	sz = readAllPressure(tTemplates);

	fprintf(out, tTemplates[dice % sz], pr);
}

void printWind(int wspeed, FILE* out, int dice)
{
	char tTemplates[20][512] = { 0 };
	int sz = 0;
	sz = readAllWind(tTemplates);

	fprintf(out, tTemplates[dice % sz], wspeed);
}

void printJawlenie(char* w, FILE* out, int dice)
{
	char tTemplates[20][512] = { 0 };
	int sz = 0;
	sz = readAllJawlenie(tTemplates);

	fprintf(out, tTemplates[dice % sz], w);
}

void printBye(FILE* out, int dice)
{
	char tTemplates[20][512] = { 0 };
	int sz = 0;
	sz = readAllBye(tTemplates);

	fprintf(out, tTemplates[dice % sz]);
}

void printReaction(int temp, int season, FILE* out, int dice)
{
	char tTemplates[20][512] = { 0 };
	int sz = 0;
	switch (season)
	{
	case 0:
		if(temp >= 30)
			sz = readHighSummer(tTemplates);
		else if(temp <= 10)
			sz = readLowSummer(tTemplates);
		else
			sz = readAvSummer(tTemplates);
		break;
	case 1:
		if (temp >= -5)
			sz = readHighWinter(tTemplates);
		else if (temp <= -30) 
			sz = readLowWinter(tTemplates);
		else
			sz = readAvWinter(tTemplates);
		break;
	case 2:
		if(temp >= 20)
			sz = readHighOther(tTemplates);
		else if (temp <= -5)
			sz = readLowOther(tTemplates);
		else
			sz = readAvOther(tTemplates);
		break;
	}
	fprintf(out, tTemplates[dice % sz]);
}

int readNoOsadki(char buf[][512])
{
	FILE* greetIn = fopen("net_osadki.txt", "r");

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

void printNoOsadki(FILE* out, int dice)
{
	char tTemplates[20][512] = { 0 };
	int sz = 0;
	sz = readNoOsadki(tTemplates);

	fprintf(out, tTemplates[dice % sz], out);
}