#pragma once

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

int readAllGreets(char buf[][512]);
int readAllDate(char buf[][512]);
int readAllTemp(char buf[][512]);
int readAllTempNight(char buf[][512]);
int readAllReactions(char buf[][512]);
int readAllOsadki(char buf[][512]);
int readAllPressure(char buf[][512]);
int readAllWind(char buf[][512]);
int readAllJawlenie(char buf[][512]);
int readAllBye(char buf[][512]);

char* pickRandomTemp();
