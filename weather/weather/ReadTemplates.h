#pragma once
#include <stdio.h>

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

void printHello(FILE* out);
void printDayTemp(int temp, FILE* out);
void printDate(char* date, FILE* out);
void printNightTemp(int temp, FILE* out);
void printOsadki(char* os, FILE* out);
void printPresure(int pr, FILE* out);
void printWind(int wspeed, FILE* out);
void printJawlenie(char* w, FILE* out);
void printBye(FILE* out);
