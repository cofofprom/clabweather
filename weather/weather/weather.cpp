#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "ReadTemplates.h"

typedef struct 
{
	char date[512];
	int dayTemp;
	int nightTemp;
	char osadki[512];
	int pressure;
	int wSpeed;
	char jawlenie[512];
} RECORD;

int main()
{
	setlocale(LC_ALL, "ru");
	FILE* output = stdout;
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
	
	char greetings[20][512] = { 0 };
	char date[20][512] = { 0 };
	char temp[20][512] = { 0 };
	char osadki[20][512] = { 0 };
	char pressure[20][512] = { 0 };
	char speed[20][512] = { 0 };
	char jawlenie[20][512] = { 0 };
	char bye[20][512] = { 0 };
	int grettingsSize = readAllGreets(greetings);

	// приветствие дата (рандомно температура) (рандомно осадки или явления) (рандомно давление или скорость ветра) прощание
	fprintf(output, "%s ", greetings[rand() % grettingsSize]);



	return 0;
}

