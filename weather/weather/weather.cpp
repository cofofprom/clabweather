#define _CRT_SECURE_NO_WARNINGS
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
	RECORD test = { 0 };
	while (!feof(dataIn))
	{
		fscanf(dataIn, "%s", buf);
		strcpy(test.date, buf);
		fscanf(dataIn, "%s", buf);
		test.dayTemp = atoi(buf);
		fscanf(dataIn, "%s", buf);
		test.nightTemp = atoi(buf);
		fscanf(dataIn, "%s", buf);
		strcpy(test.osadki, buf);
		fscanf(dataIn, "%s", buf);
		test.pressure = atoi(buf);
		fscanf(dataIn, "%s", buf);
		test.wSpeed = atoi(buf);
		fscanf(dataIn, "%s", buf);
		strcpy(test.jawlenie, buf);
	}

	// приветствие дата (рандомно температура) (рандомно осадки или явления) (рандомно давление или скорость ветра) прощание
	printHello(output);
	fprintf(output, " ");
	printDate(test.date, output);
	fprintf(output, " ");
	printDayTemp(test.dayTemp, output);
	fprintf(output, " ");
	printNightTemp(test.nightTemp, output);
	fprintf(output, " ");
	printOsadki(test.osadki, output);
	fprintf(output, " ");
	printJawlenie(test.jawlenie, output);
	fprintf(output, " ");
	printPresure(test.pressure, output);
	fprintf(output, " ");
	printWind(test.wSpeed, output);
	fprintf(output, " ");
	printBye(output);
	fprintf(output, "\n");


	fclose(output);
	return 0;
}

