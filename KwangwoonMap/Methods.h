#pragma once

#include<stdio.h>
#include<string.h>
#include<Windows.h>

COORD getXY();
void gotoxy(int x, int y);
void printBuilding(int w, int h, char name[]);
void line(int x, int y);
void clear();
void fullMap();	//광운대 전체 지도
void lbuildingName(char *bName);	//광운대 왼쪽 지도
void rbuildingName(char *bName);	//광운대 오른쪽 지도
void leftBuilding();	//광운대 왼쪽 건물
void rightBuilding();	//광운대 오른쪽 건물