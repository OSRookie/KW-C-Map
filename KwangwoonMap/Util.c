#include "Methods.h"

COORD getXY() {
	COORD Cur;
	CONSOLE_SCREEN_BUFFER_INFO a;

	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &a);
	Cur.X = a.dwCursorPosition.X;
	Cur.Y = a.dwCursorPosition.Y;
	return Cur;
}

/// <summary>
/// gotoxy설명
/// </summary>
/// <param name="x">좌표 x 값이 </param>
/// <param name="y">좌표 y 값이</param>
void gotoxy(int x, int y) {
	COORD pos = { x,y }; //x, y 좌표 설정
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); //커서 설정
}

void printBuilding(int w, int h, char name[]) {
	COORD tmpXY = getXY();
	line(w, 0);
	line(0, h);
	line(-w, 0);
	line(0, -h);

	gotoxy(tmpXY.X + 0.5*w, tmpXY.Y + 0.5 * h);
	printf("%s", name);
}

void line(int x, int y) { //대각선x
	if (y == 0) {
		if (x > 0) {
			for (int i = 0; i < x; i++)
				printf("*");
		}
		else {
			COORD tmpXY = getXY();
			int j = x * -1;
			gotoxy(tmpXY.X - (-1 * x), getXY().Y);
			for (int i = x; i <= 0; i++)
				printf("*");
			gotoxy(tmpXY.X - (-1 * x), getXY().Y);

		}
	}
	else if (x == 0) {
		int tmpX = getXY().X;
		int tmpY = getXY().Y;
		if (y > 0) {
			for (int i = 0; i < y; i++) {
				gotoxy(tmpX, tmpY++);
				printf("*\n");
			}
			gotoxy(tmpX, tmpY);
		}
		else {
			for (int i = y; i <= 0; i++) {
				gotoxy(tmpX, tmpY--);
				printf("*\n");
			}
			gotoxy(tmpX, tmpY);
		}
	}
}

/// <summary>
/// lineGroup건축 그리기
/// </summary>
/// <param name="x">건축의 너비</param>
/// <param name="y">건축의 길이</param>
void lineGroup(int x, int y) {
	line(0, y);
	line(x, 0);
	line(0, -y + 1);
	line(-x, 0);
}

/// <summary>
/// arroffice함수설명
/// </summary>
/// <param name="a">좌표 x 반환</param>
/// <param name="b">좌표 y 반환</param>
/// <param name="c">사무실의 너비</param>
/// <param name="d">사무실의 길이</param>
/// <param name="name"></param>
void arrOffice(int a, int b, int c, int d, char name[]) {
	gotoxy(a, b);
	printBuilding(c, d, name);
}
void clear() {
	system("cls");
	gotoxy(0, 0);
}

void fullMap() {
	printf("광운대 전체 지도");
}