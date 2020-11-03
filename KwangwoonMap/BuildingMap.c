#include "Methods.h"

void line();
int floor;

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
//�ǹ� �ٴ� ũ��
void lineGroup(int x, int y) {
	line(0, y);
	line(x, 0);
	line(0, -y+1);
	line(-x, 0);
}
//�� ���� �繰��
void arrOffice(int a, int b, int c, int d, char name[]) {
	gotoxy(a, b);
	printBuilding(c,d,name);
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
		printf("�ǹ� ������ ���� �ͽ��ϱ�?(����:0)");
		scanf("%d", &floor);
		struct Floor* floor1;
		while (floor != 0) {
			switch (floor) {
			case 1:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(80, 25);
				floor1->arrOffice(50, 1, 10, 10, "���");
				floor1->arrOffice(30, 1, 18, 6, "�μ��");
				floor1->arrOffice(2, 10, 25, 6, "�����н�����");
				floor1->gotoxy(0, 26);
				break;
			default:
				printf("�� ���� ���� ���� ��ȹ�� �����ϴ�.\n");
				break;
			}
			printf("�ǹ� ������ ���� �ͽ��ϱ�?(����:0)");
			scanf("%d", &floor);
		}
	}
	if (strcmp(bName, "��õ����")==0) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		clear();
		lineGroup(60,20);
		arrOffice(2, 2, 15, 15, "�౸��");
		arrOffice(20, 4, 15, 10, "����");
		gotoxy(0, 26);	
	}
	if (strcmp(bName, "������")==0) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%d", &floor);
	}
	if (strcmp(bName, "80�ֳ����")==0) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%d", &floor);
	}
	if (strcmp(bName, "ȭ����")==0) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%d", &floor);
	}
	if (strcmp(bName, "���ǰ�")==0) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%d", &floor);
	}
	if (strcmp(bName, "������")==0) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%d", &floor);
	}
	if (strcmp(bName, "������")==0) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%d", &floor);
	}
	if (strcmp(bName, "�ٻ���")==0) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%d", &floor);
	}
}
void lbuildingName(char *bName) {
	if (!strcmp(bName, "������")) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%d", &floor);
	}
	if (!strcmp(bName, "���ع�ȭ������")) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%d", &floor);
	}	
	if (!strcmp(bName, "���̽���ũ")) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%d", &floor);
	}
	if (!strcmp(bName, "������")) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%d", &floor);
	}
	if (!strcmp(bName, "������")) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%d", &floor);
	}
	if (!strcmp(bName, "��õ��")) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%d", &floor);
	}
	if (!strcmp(bName, "������")) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%d", &floor);
	}
	if (!strcmp(bName, "�ѿ��")) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%d", &floor);
	}
	if (!strcmp(bName, "���ͳ��ų� �Ͽ콺")) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%d", &floor);
	}
};