#pragma once

#include<stdio.h>
#include<string.h>
#include<Windows.h>

COORD getXY();
void gotoxy(int x, int y);
void printBuilding(int w, int h, char name[]);
void line(int x, int y);
void clear();
void fullMap();	//����� ��ü ����
void lbuildingName(char *bName);	//����� ���� ����
void rbuildingName(char *bName);	//����� ������ ����
void leftBuilding();	//����� ���� �ǹ�
void rightBuilding();	//����� ������ �ǹ�
void lineGroup(int x, int y);//
void arrOffice(int a,int b,int c,int d, char name[]);
struct Floor {
	void (*clear)();
	void (*lineGroup)(int* a, int* b);
	void(*arrOffice)();
	void (*gotoxy)(int* x,int* y);
};
struct Building
{
	char name[10];
	struct Floor;
};