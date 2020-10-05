#include "Methods.h"

void line();

char floor[10];
COORD getXY() {
	COORD Cur;
	CONSOLE_SCREEN_BUFFER_INFO a;

	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &a);
	Cur.X = a.dwCursorPosition.X;
	Cur.Y = a.dwCursorPosition.Y;
	return Cur;
}
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

	gotoxy(tmpXY.X + 0.5 * w, tmpXY.Y + 0.5 * h);
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
void clear() {
	system("cls");
	gotoxy(0, 0);
}
void fullMap() {
	printf("����� ��ü ����");
}
void rightBuilding() {
	printf(" ����� ������ ���� �Դϴ�.\n\n");
	printf("          *--------------*");   printf("\t*----------*");		printf("\t     *-------*\n");
	printf("          |\t\t |");            printf("\t|\t   |");		printf("\t     |\t     |\n");
	printf("          |   ȭ����     |");   printf("\t|��õ����  |");		printf("\t     | ������|\n");
	printf("          |\t\t |");            printf("\t|\t   |");		printf("\t     |\t     |\n");
	printf("          *--------------*");	printf("\t*----------*");     printf("\t     *-------*\n");

	printf("*---------------*\n");
	printf("|\t\t|\n");
	printf("| 80�ֳ� ���� |");            printf("          *-------*");                                printf("\t\t\t*--------*\n");
	printf("|\t\t|");                       printf("          |\t   |");      printf("*-------*");        printf("\t\t|\t |\n");
	printf("|\t\t|");                       printf("          | �񸶰�|");    printf("| �ٻ���|");        printf("\t\t| ������ |\n");
	printf("*---------------*");            printf("          |\t   |");      printf("*-------*");        printf("\t\t|\t |\n");
	printf("\t\t\t   *-------*");                                 printf("\t\t\t*--------*\n\n");
	printf("*---------------*\n");
	printf("|\t\t|");                                             printf("\t\t\t*-------*\n");
	printf("| ������        |");                                  printf("\t\t\t|\t|\n");
	printf("|\t\t|");                                             printf("\t\t\t|���ǰ� |\n");
	printf("*---------------*");                                  printf("\t\t\t|\t|\n");
	printf("\t\t\t\t\t*-------*\n\n");
}
void leftBuilding() {
	printf("����� ���� ���� �Դϴ�.\n\n");
	printf("\t\t\t*-------------------*\n");
	printf("\t\t\t| ���ͳ��ų� �Ͽ콺 |\n");
	printf("\t\t\t|\t\t    |\n");
	printf("\t\t\t*-------------------*\n");

	printf("\t\t\t\t\t*----------*\n");
	printf("\t\t\t\t\t|  ������  |\n");
	printf("\t\t\t\t\t|\t   |\n");
	printf("\t\t\t\t\t*----------*\n");

	printf("\t\t    *-------------------*\n");
	printf("\t\t    |\t������\t\t|\n");
	printf("\t\t    |\t\t\t|\n");
	printf("\t\t    *-------------------*\n");

										printf("\t\t\t\t\t\t*---------------*\n");
										printf("\t\t\t\t\t\t| �ѿ��\t|\n");
	printf("\t\t  *--------------*");	printf("\t\t|\t--------*\n");
	printf("\t\t  |\t\t |");			printf("\t\t|\t|\n");
	printf("\t\t  |\tǲ����\t |");		printf("\t\t|\t|\n");
	printf("\t\t  |\t\t |");			printf("\t\t*-------*\n");
	printf("\t\t  *--------------*");   printf("\t    *----------*\n");
	printf("\t\t  *--------------*");	printf("\t    |���̽���ũ|\n");
	printf("\t\t  |\t����\t |");		printf("\t    *----------*\n");
	printf("\t\t  |\t\t |");					printf("\t\t*-----------------*\n");
	printf("\t\t  *--------------*");			printf("\t\t|\t\t  |\n");
												printf("\t\t\t\t\t\t| ���ع�ȭ������  |\n");
												printf("\t\t\t\t\t\t|\t\t  |");					printf("*------*\n");
												printf("\t\t\t\t\t\t*-----------------*");		printf("|������|\n");
												printf("*---------*");							printf("\t\t\t\t\t\t\t   *------*\n");
	printf("|\t  |\n");
	printf("| ������  |\n");
	printf("|\t  |\n");
	printf("*---------*\n\n");

}
void rbuildingName(char *bName) {

	if (strcmp(bName, "�񸶰�")==0) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%s", floor);
		clear();
		line(0, 25);
		line(80, 0);
		line(0, -25);

		gotoxy(50, 1);
		printBuilding(10, 10, "���");

		gotoxy(30, 0);
		printBuilding(18, 6, "�μ��");

		gotoxy(2, 10);
		printBuilding(25, 6, "�����н�����");

		gotoxy(0, 26);
		
	}
	if (strcmp(bName, "��õ����")==0) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%s", floor);
	}
	if (strcmp(bName, "������")==0) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%s", floor);
	}
	if (strcmp(bName, "80�ֳ����")==0) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%s", floor);
	}
	if (strcmp(bName, "ȭ����")==0) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%s", floor);
	}
	if (strcmp(bName, "���ǰ�")==0) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%s", floor);
	}
	if (strcmp(bName, "������")==0) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%s", floor);
	}
	if (strcmp(bName, "������")==0) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%s", floor);
	}
	if (strcmp(bName, "�ٻ���")==0) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%s", floor);
	}
}
void lbuildingName(char *bName) {
	if (!strcmp(bName, "������")) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%s", floor);
	}
	if (!strcmp(bName, "���ع�ȭ������")) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%s", floor);
	}	
	if (!strcmp(bName, "���̽���ũ")) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%s", floor);
	}
	if (!strcmp(bName, "������")) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%s", floor);
	}
	if (!strcmp(bName, "������")) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%s", floor);
	}
	if (!strcmp(bName, "��õ��")) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%s", floor);
	}
	if (!strcmp(bName, "������")) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%s", floor);
	}
	if (!strcmp(bName, "�ѿ��")) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%s", floor);
	}
	if (!strcmp(bName, "���ͳ��ų� �Ͽ콺")) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%s", floor);
	}
};