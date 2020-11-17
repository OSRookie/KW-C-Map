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
/// gotoxy����
/// </summary>
/// <param name="x">��ǥ x ���� </param>
/// <param name="y">��ǥ y ����</param>
void gotoxy(int x, int y) {
	COORD pos = { x,y }; //x, y ��ǥ ����
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); //Ŀ�� ����
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

void line(int x, int y) { //�밢��x
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
/// lineGroup���� �׸���
/// </summary>
/// <param name="x">������ �ʺ�</param>
/// <param name="y">������ ����</param>
void lineGroup(int x, int y) {
	line(0, y);
	line(x, 0);
	line(0, -y + 1);
	line(-x, 0);
}

/// <summary>
/// arroffice�Լ�����
/// </summary>
/// <param name="a">��ǥ x ��ȯ</param>
/// <param name="b">��ǥ y ��ȯ</param>
/// <param name="c">�繫���� �ʺ�</param>
/// <param name="d">�繫���� ����</param>
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
	printf("����� ��ü ����");
}