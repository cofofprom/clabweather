#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

	return 0;
}

