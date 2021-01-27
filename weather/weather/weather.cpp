﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "ReadTemplates.h"

int main()
{
	setlocale(LC_ALL, "ru");
	FILE* output = fopen("out.txt", "w");
	srand(time(0));
	rand();
	FILE* dataIn = fopen("data.txt", "r");
	char buf[1024] = { 0 };
	RECORD list[10] = { 0 };
	int flist = 0;
	while (!feof(dataIn))
	{
		fscanf(dataIn, "%s", buf);
		strcpy(list[flist].date, buf);
		if (list[flist].date[3] == '0' && (list[flist].date[4] == '6' || list[flist].date[4] == '7' || list[flist].date[4] == '8')) list[flist].season = 0; // leto
		else if (list[flist].date[3] == '0' && (list[flist].date[4] == '1' || list[flist].date[4] == '2') || (list[flist].date[3] == '1' && list[flist].date[4] == '2')) list[flist].season = 1; // zima
		else list[flist].season = 2;
		fscanf(dataIn, "%s", buf);
		list[flist].dayTemp = atoi(buf);
		fscanf(dataIn, "%s", buf);
		list[flist].nightTemp = atoi(buf);
		fscanf(dataIn, "%s", buf);
		strcpy(list[flist].osadki, buf);
		fscanf(dataIn, "%s", buf);
		list[flist].pressure = atoi(buf);
		fscanf(dataIn, "%s", buf);
		list[flist].wSpeed = atoi(buf);
		fscanf(dataIn, "%s", buf);
		strcpy(list[flist].jawlenie, buf);
		flist++;
	}

	// приветствие дата (рандомно температура) (рандомно осадки или явления) (рандомно давление или скорость ветра) прощание
	for (int i = 0; i < flist; i++)
	{
		printHello(output);
		fprintf(output, " ");
		printDate(list[i].date, output);
		fprintf(output, " ");
		printReaction(list[i].dayTemp, list[i].season, output);
		fprintf(output, " ");
		printDayTemp(list[i].dayTemp, output);
		fprintf(output, " ");
		printNightTemp(list[i].nightTemp, output);
		fprintf(output, " ");
		printOsadki(list[i].osadki, output);
		fprintf(output, " ");
		printJawlenie(list[i].jawlenie, output);
		fprintf(output, " ");
		printPresure(list[i].pressure, output);
		fprintf(output, " ");
		printWind(list[i].wSpeed, output);
		fprintf(output, " ");
		printBye(output);
		fprintf(output, "\n");
	}


	fclose(output);
	return 0;
}

