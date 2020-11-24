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

	gotoxy(tmpXY.X + 0.5*w- strlen(name)/2, tmpXY.Y + 0.5 * h);
	printf("%s", name);
}

void printAutoBuilding(int br, char name[]) {
	COORD tmpXY = getXY();
	int strSize = strlen(name);
	char *first;
	char *second;
	if (br == 0) {
		line(strSize + 4, 0);
		line(0, 2);
		line(-(strSize + 4), 0);
		line(0, -2);
		gotoxy(tmpXY.X + 2, tmpXY.Y +1);
		printf("%s", name);
	}else{
		first = subString(0, br * 2, name);
		second = subString(br * 2 + 1, strSize, name);
		int first_len = strlen(first);
		int second_len = strlen(second);
		if (second_len > first_len) {
			strSize = second_len;
		}
		else {
			strSize = first_len;
		}
		line(strSize + 4, 0);
		line(0, 3);
		line(-(strSize + 4), 0);
		line(0, -3);
		
		gotoxy(tmpXY.X + 2, tmpXY.Y + 1);
		printf("%s", first);
		gotoxy(tmpXY.X + 2, tmpXY.Y + 2);
		printf("%s", second);
	}
}

char *subString(int s, int e, char *str) {
	char *new = (char *)malloc(e - s + 2);
	strncpy(new, str + s, e -s+1);
	new[e - s + 1] = 0;
	return new;
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
void printOffice_br(int locX, int locY,int br, char name[]) {
	gotoxy(locX, locY);
	printAutoBuilding(br, name);
}
void printOffice(int locX, int locY, char name[]) {
	gotoxy(locX, locY);
	printAutoBuilding(0, name);
}
void clear() {
	system("cls");
	gotoxy(0, 0);
}

void fullMap() {
	printf("����� ��ü ����");
}