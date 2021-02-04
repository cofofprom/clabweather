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
	int season;
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

int readHighWinter(char buf[][512]);
int readLowWinter(char buf[][512]);
int readAvWinter(char buf[][512]);
int readHighSummer(char buf[][512]);
int readLowSummer(char buf[][512]);
int readAvSummer(char buf[][512]);
int readHighOther(char buf[][512]);
int readLowOther(char buf[][512]);
int readAvOther(char buf[][512]);

void printHello(FILE* out, int dice);
void printDayTemp(int temp, FILE* out, int dice);
void printDate(char* date, FILE* out, int dice);
void printNightTemp(int temp, FILE* out, int dice);
void printOsadki(char* os, FILE* out, int dice);
void printPresure(int pr, FILE* out, int dice);
void printWind(int wspeed, FILE* out, int dice);
void printJawlenie(char* w, FILE* out, int dice);
void printBye(FILE* out, int dice);
void printReaction(int temp, int season, FILE* out, int dice);