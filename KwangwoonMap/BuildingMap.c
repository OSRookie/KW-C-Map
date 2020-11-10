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

	gotoxy(tmpXY.X +1 , tmpXY.Y + 0.5 * h);
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
	line(0, -y+1);
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
		struct Floor* floorB2, * floorB1, * floor1, * floor2, * floor3, * floor4, * floor5, * floor6, * floor7, * floor8, * floor9, * floor10;
		while (floor != 0) {
			switch (floor) {
			case -2:
				floorB2 = (struct Floor*)malloc(sizeof(struct Floor));
				floorB2->clear = clear;
				floorB2->lineGroup = lineGroup;
				floorB2->arrOffice = arrOffice;
				floorB2->gotoxy = gotoxy;
				floorB2->clear();
				floorB2->lineGroup(85, 40);
				floorB2->arrOffice(1, 1, 14, 4, "��ȭ�� �ްԽ�");
				floorB2->arrOffice(1, 6, 10, 4, "B203");
				floorB2->arrOffice(1, 11, 10, 2, "B204");
				floorB2->arrOffice(1, 14, 10, 2, "B205");
				floorB2->arrOffice(1, 17, 10, 2, "B206");
				floorB2->arrOffice(1, 23, 10, 4, "B207");
				floorB2->arrOffice(1, 28, 10, 4, "B218");
				floorB2->arrOffice(1, 33, 10, 2, "B217");
				floorB2->arrOffice(1, 36, 10, 2, "B216");

				floorB2->arrOffice(17, 1, 7, 4, "���");
				floorB2->arrOffice(13, 35, 10, 4, "B215");

				floorB2->arrOffice(24, 35, 10, 4, "B14");

				floorB2->arrOffice(27,1,10,4,"B201");
				floorB2->arrOffice(35, 35, 10, 4, "B212");

				floorB2->arrOffice(38, 1, 10, 4, "B202");
				floorB2->arrOffice(38,23,10,2,"B210");
				floorB2->arrOffice(38,26,10,4,"B209");

				floorB2->arrOffice(49, 1, 10, 4, "B222-1");
				floorB2->arrOffice(49, 17, 9, 4, "B211");

				floorB2->arrOffice(60, 1, 10, 4, "B222-2");
				floorB2->arrOffice(77,1,7,4,"���");

				floorB2->arrOffice(74,17,10,4,"ȭ���");

				floorB2->gotoxy(0,41);
				printf("B201���ǽ�\tB202���ǽ�\tB222-1���ǽ�\tB222-2���ǽ�\tB203 �������ó USP���͸���\n");
				printf("B204~B206���ǽ�\tB207�ｺ��\tB218�̵����к� Ƽ���Ÿ�\tB216~B217���ǽ�\n");
				printf("B215�ֽ�ġ��SDM\tB211(��)Ƽ�ؾ�����TNCPRO\tB212��ȭ�� �ްԽ�\tB209IDEC�ǽ���\n");
				printf("B210���ǽ�\tB211IDEC������\n");
				break;
			case -1:
				floorB1 = (struct Floor*)malloc(sizeof(struct Floor));
				floorB1->clear = clear;
				floorB1->lineGroup = lineGroup;
				floorB1->arrOffice = arrOffice;
				floorB1->gotoxy = gotoxy;
				floorB1->clear();
				floorB1->lineGroup(128, 20);
				floorB1->arrOffice(5, 1, 7, 4, "���");
				floorB1->arrOffice(1, 6, 10, 4, "B110");
				floorB1->arrOffice(1, 11, 11, 4, "B111/B11-2");
				
				floorB1->arrOffice(15, 1, 11, 4, "����Ż�ǽ�");
				floorB1->arrOffice(27, 1, 11, 4, "����Ż�ǽ�");
				floorB1->arrOffice(39, 1, 10, 4, "B107");
				floorB1->arrOffice(50, 1, 10, 4, "B106");
				floorB1->arrOffice(61, 1, 10, 4, "B105");
				floorB1->arrOffice(72, 1, 10, 4, "B104");
				floorB1->arrOffice(83, 1, 10, 4, "B103");
				floorB1->arrOffice(94, 1, 10, 4, "B102");
				floorB1->arrOffice(105, 1, 10, 4, "B101");
				floorB1->arrOffice(116, 1, 7, 4, "���");

				floorB1->arrOffice(118, 10, 9, 4, "B119");

				floorB1->arrOffice(69, 15, 10, 4, "B116-3");
				floorB1->arrOffice(83, 15, 10, 4, "ȭ���");

				floorB1->gotoxy(0, 21);
				printf("B110��Ȱü���а� ������\tB111�������б�������������ü ���� �� ���� ȫ����\tB111-2�����濵�ǽ���\n");
				printf("B107����ƮȨ������\tB106�Ǳ⿬����1\tB105�ӻ���2\tB104���ڹ��̿������а� �������п� ������\n");
				printf("B102������ ������\tB101�ӻ���1\tB119����ǰ ������\tB116-3����\n");
				
				break;

			case 1:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(70, 20);
				floor1->arrOffice(1, 3, 7, 4, "���");
				floor1->arrOffice(9,1,11,4,"����������");
				floor1->arrOffice(1, 15, 10, 4, "�ϳ�����");

				floor1->arrOffice(22, 3, 10, 2, "102");
				floor1->arrOffice(13, 15, 7, 4, "�Ա�");

				floor1->arrOffice(23, 6, 10, 4, "103");
				floor1->arrOffice(34, 6, 10, 4, "104");
				floor1->arrOffice(45, 6, 10, 4, "105");
				floor1->arrOffice(56, 6, 7, 4, "���");
				floor1->arrOffice(59, 11, 10, 4, "107");

				floor1->arrOffice(34, 15, 10, 4, "110");
				floor1->arrOffice(45, 15, 10, 4, "109");
				floor1->arrOffice(56, 16, 10, 3, "108");

				floor1->gotoxy(71,0);
				floor1->lineGroup(35, 25);
				floor1->arrOffice(85,1,7,4,"�Ա�");
				floor1->arrOffice(72, 6, 10, 4, "111");
				floor1->arrOffice(72, 11, 10, 4, "111-1");
				floor1->arrOffice(72, 18, 7, 4, "ȭ���");

				floor1->arrOffice(94, 8, 10, 2, "121");
				floor1->arrOffice(94, 11, 10, 2, "120");
				floor1->arrOffice(94, 14, 10, 2, "119");
				floor1->arrOffice(94, 17, 10, 2, "118");

				floor1->arrOffice(85, 20, 7, 4, "�Ա�");

				floor1->gotoxy(0,26);
				printf("�ϳ�����(�л����߱�)\t102������\t103�������ó SW���߽�\t104�������ó �������\t105�������ó ó���\n");
				printf("107�������ó ��ſ��\t108��ǻ�Ͱ��ǽ�\t�������ó ��Ž�\t110�������ó ��⺸����\t111������ ������\n");
				printf("111-1������ �����\t118~121���ǽ�\n");

				break;
			case 2:
				floor2 = (struct Floor*)malloc(sizeof(struct Floor));
				floor2->clear = clear;
				floor2->lineGroup = lineGroup;
				floor2->arrOffice = arrOffice;
				floor2->gotoxy = gotoxy;
				floor2->clear();
				floor2->lineGroup(61, 12);
				floor2->arrOffice(1, 1, 7, 4, "���");
				floor2->arrOffice(5, 7, 10, 4, "201");
				floor2->arrOffice(11, 1, 8, 4, "ȭ���");
				floor2->arrOffice(20, 1, 10, 4, "202");
				floor2->arrOffice(31, 1, 10, 4, "203");
				floor2->arrOffice(42, 1, 10, 4, "204");
				floor2->arrOffice(50, 6, 10, 4, "205");
				floor2->gotoxy(0,13);
				printf("201~202��ǻ�Ͱ��ǽ�\t203��ȯ��\t204~205��ǻ�Ͱ��ǽ�\n");
				break;
			case 3:
				floor3 = (struct Floor*)malloc(sizeof(struct Floor));
				floor3->clear = clear;
				floor3->lineGroup = lineGroup;
				floor3->arrOffice = arrOffice;
				floor3->gotoxy = gotoxy;
				floor3->clear();
				floor3->lineGroup(71, 18);
				floor3->arrOffice(3, 1, 7, 4, "���");
				floor3->arrOffice(1, 6, 10, 4, "��ȭâ��");
				floor3->arrOffice(5, 13, 10, 4, "301");
				floor3->arrOffice(12, 1, 8, 4, "ȭ���");
				floor3->arrOffice(16, 13, 10, 4, "302");
				floor3->arrOffice(27, 13, 10, 4, "303");
				floor3->arrOffice(22, 1, 10, 4, "304");
				floor3->arrOffice(33, 1, 10, 4, "305");
				floor3->arrOffice(44, 1, 10, 4, "306");
				floor3->arrOffice(55, 1, 7, 4, "���");
				floor3->arrOffice(60, 6, 10, 4, "307");
				floor3->gotoxy(0, 19);
				printf("301�����Ͽ��кδ��� �����뱳��\t302~304��ǻ�Ͱ��ǽ�\t305�������ó �ǽ����\t306�������ó ��ǻ�Ͱ��ǽ�\t307PC�ǽ���\n");
				break;
			case 4:
				floor4 = (struct Floor*)malloc(sizeof(struct Floor));
				floor4->clear = clear;
				floor4->lineGroup = lineGroup;
				floor4->arrOffice = arrOffice;
				floor4->gotoxy = gotoxy;
				floor4->clear();
				floor4->lineGroup(98, 15);
				floor4->arrOffice(1, 1, 7, 4, "���");			
				floor4->arrOffice(5, 10, 10, 4, "401");
				floor4->arrOffice(11, 1, 7, 4, "ȭ���");
				floor4->arrOffice(16, 10, 10, 4, "402");
				
				floor4->arrOffice(22, 1, 10, 4, "404");
				floor4->arrOffice(33, 1, 10, 4, "405");
				floor4->arrOffice(44, 1, 10, 4, "406");
				floor4->arrOffice(55, 1, 10, 4, "407");
				floor4->arrOffice(66, 1, 10, 4, "408");
				
				floor4->arrOffice(80, 1, 7, 4, "���");
				floor4->gotoxy(0, 17);
				printf("401~402��ǻ�Ͱ��ǽ�\t404~405���ǽ�\t406�������б����� ������ �����繫��\t407�����Ͽ��кδ��� �����繫��\n");
				printf("408 3D���÷��̿�����\n");
				break;
			case 5:
				floor5 = (struct Floor*)malloc(sizeof(struct Floor));
				floor5->clear = clear;
				floor5->lineGroup = lineGroup;
				floor5->arrOffice = arrOffice;
				floor5->gotoxy = gotoxy;
				floor5->clear();
				floor5->lineGroup(71, 15);
				floor5->arrOffice(1, 1, 7, 4, "���");
				floor5->arrOffice(11, 1, 7, 4, "ȭ���");
				floor5->arrOffice(5, 10, 10, 4, "501");
				floor5->arrOffice(17, 10, 10, 4, "502-1");
				floor5->arrOffice(29, 10, 10, 4, "502");
				floor5->arrOffice(23, 1, 10, 4, "504");
				floor5->arrOffice(35, 1, 10, 4, "505");
				floor5->arrOffice(41, 10, 10, 4, "503");
				floor5->arrOffice(60, 6, 10, 4, "506");

				floor5->gotoxy(0,16);
				printf("501�������\t502-1/502�������б����� �����繫��(������)\t503�������б����� �����繫��\t504���ǽ�\n");
				printf("505���ǽ� �������б�����\t506�����ް��\n");
				break;
			case 6:
				floor6 = (struct Floor*)malloc(sizeof(struct Floor));
				floor6->clear = clear;
				floor6->lineGroup = lineGroup;
				floor6->arrOffice = arrOffice;
				floor6->gotoxy = gotoxy;
				floor6->clear();
				floor6->lineGroup(71, 15);
				floor6->arrOffice(1, 1, 7, 4, "���");
				floor6->arrOffice(11, 1, 7, 4, "ȭ���");
				floor6->arrOffice(23, 1, 10, 4, "604");
				floor6->arrOffice(34, 1, 10, 4, "605");
				floor6->arrOffice(45, 1, 10, 4, "606");
				floor6->arrOffice(56, 1, 10, 4, "607");
				floor6->arrOffice(17, 10, 10, 4, "601");
				floor6->arrOffice(28, 10, 10, 4, "603");
				floor6->arrOffice(39, 10, 10, 4, "603-1");
				floor6->arrOffice(50, 10, 10, 4, "603-2");

				floor6->gotoxy(0, 16);
				printf("601Smart Home Center\t603~606����Ͽ��кδ��� �����繫��(603-1,603-2����)\t603-1�����Ѹ��� �����繫��\n");
				break;
			case 7:
				floor7 = (struct Floor*)malloc(sizeof(struct Floor));
				floor7->clear = clear;
				floor7->lineGroup = lineGroup;
				floor7->arrOffice = arrOffice;
				floor7->gotoxy = gotoxy;
				floor7->clear();
				floor7->lineGroup(61, 15);
				floor7->arrOffice(1, 1, 7, 4, "���");
				floor7->arrOffice(11, 1, 7, 4, "ȭ���");
				floor7->arrOffice(23, 1, 10, 4, "704");
				floor7->arrOffice(34, 1, 10, 4, "705");
				floor7->arrOffice(6, 10, 10, 4, "701-1");
				floor7->arrOffice(17, 10, 10, 4, "701-2");
				floor7->arrOffice(28, 10, 10, 4, "701");
				floor7->arrOffice(39, 10, 10, 4, "702");
				floor7->arrOffice(50, 10, 10, 4, "703");

				floor7->gotoxy(0, 16);
				printf("701-1���ǽ�\t701-2����������������\t701~703���ǽ�\t704Smart H&B Technology Laboratory\t705���ڰ��а� �����繫��\n");
				break;
			case 8:
				floor8 = (struct Floor*)malloc(sizeof(struct Floor));
				floor8->clear = clear;
				floor8->lineGroup = lineGroup;
				floor8->arrOffice = arrOffice;
				floor8->gotoxy = gotoxy;
				floor8->clear();
				floor8->lineGroup(61, 15);
				floor8->arrOffice(1, 1, 7, 4, "���");
				floor8->arrOffice(11, 1, 7, 4, "ȭ���");
				floor8->arrOffice(23, 1, 10, 4, "805");
				floor8->arrOffice(34, 1, 10, 4, "804");
				floor8->arrOffice(6, 10, 10, 4, "801");
				floor8->arrOffice(17, 10, 10, 4, "801-1");
				floor8->arrOffice(28, 10, 10, 4, "802");
				floor8->arrOffice(39, 10, 10, 4, "802-1");
				floor8->arrOffice(50, 10, 10, 4, "803");

				floor8->gotoxy(0, 16);
				printf("801~805���ǽ�(801-1,802-1���ǽ�)\n");
				break;
			default:
				printf("�� ���� ���� ���� ��ȹ�� �����ϴ�.\n");
				break;
			}
			printf("\n");
			printf("�ǹ� ������ ���� �ͽ��ϱ�?(����:0)");
			scanf("%d", &floor);
		}
	}
	if (!strcmp(bName, "���ع�ȭ������")) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%d", &floor);
		struct Floor *floorB1;
		while (floor != 0) {
			switch (floor)
			{
			case -1:
				floorB1 = (struct Floor*)malloc(sizeof(struct Floor));
				floorB1->clear = clear;
				floorB1->lineGroup = lineGroup;
				floorB1->arrOffice = arrOffice;
				floorB1->gotoxy = gotoxy;
				floorB1->clear();
				floorB1->lineGroup(55, 20);
				floorB1->arrOffice(21, 6, 15, 4, "Ǫ����Ʈ");
				floorB1->arrOffice(5, 15, 10, 4, "���");
				floorB1->arrOffice(38, 15, 10, 4, "���");
				
				floorB1->gotoxy(0,21);
				break;
			default:
				printf("�� ���� ���� ���� ��ȹ�� �����ϴ�.\n");
				break;
			}
			printf("\n");
			printf("�ǹ� ������ ���� �ͽ��ϱ�?(����:0)");
			scanf("%d", &floor);
		}
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
		struct Floor* floor1, * floor2, * floor3, * floor4, * floor5;
		while (floor != 0) {
			switch (floor) {
			case 1:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(80, 36);
				floor1->arrOffice(1, 1, 10, 4, "113");
				floor1->arrOffice(1, 6, 10, 4, "112");
				floor1->arrOffice(1, 11, 10, 4, "111");
				floor1->arrOffice(1, 16, 10, 4, "110");
				floor1->arrOffice(1, 21, 10, 4, "109");
				floor1->arrOffice(1, 26, 10, 4, "108");
				floor1->arrOffice(1, 31, 10, 4, "107");

				floor1->arrOffice(20, 4, 13, 4, "ȭ���");
				floor1->arrOffice(20, 16, 13, 4, "���");

				floor1->arrOffice(38, 6, 15, 4, "����������");
				floor1->arrOffice(36, 14, 13, 4, "101");
				floor1->arrOffice(36, 22, 13, 4, "102");
				floor1->arrOffice(36, 30, 15, 4, "��ȭ�� ����");

				floor1->arrOffice(53, 15, 13, 4, "���");

				floor1->arrOffice(70, 15, 9, 4, "�Ա�");


				floor1->gotoxy(0, 38);
				printf("101�����(�����)\t102�����(�����)\t107/108Ȯ�������� ���ǽ�\n");
				printf("109/110������ǻ�� ��������\t111�ǰ��������ܸ��� �������(ITRC)");
				printf("112���� ��Ʃ���1\t112������Ẹ����\n");
				break;
			case 2:
				floor2 = (struct Floor*)malloc(sizeof(struct Floor));
				floor2->clear = clear;
				floor2->lineGroup = lineGroup;
				floor2->arrOffice = arrOffice;
				floor2->gotoxy = gotoxy;
				floor2->clear();
				floor2->lineGroup(90, 61);
				floor2->arrOffice(1, 1, 10, 4, "214");
				floor2->arrOffice(1, 8, 10, 4, "212");
				floor2->arrOffice(1, 18, 10, 4, "211");
				floor2->arrOffice(1, 22, 10, 4, "207");
				floor2->arrOffice(1, 30, 10, 4, "206");
				floor2->arrOffice(1, 35, 10, 4, "205");
				floor2->arrOffice(1, 40, 10, 4, "204");
				floor2->arrOffice(1, 46, 10, 4, "203");
				floor2->arrOffice(1, 56, 10, 4, "CU");

				floor2->arrOffice(14, 3, 10, 4, "216");
				floor2->arrOffice(14, 10, 10, 4, "ȭ���");
				floor2->arrOffice(14, 35, 10, 4, "201");

				floor2->arrOffice(26, 3, 10, 4, "232");
				floor2->arrOffice(26, 30, 7, 4, "���");

				floor2->arrOffice(40, 3, 10, 4, "233");
				floor2->arrOffice(40, 25, 11, 4, "����������");
				floor2->arrOffice(40, 56, 10, 4, "�Ա�");

				floor2->arrOffice(54, 30, 7, 4, "���");

				floor2->arrOffice(65, 10, 10, 4, "217");
				floor2->arrOffice(65, 35, 10, 4, "231");
				floor2->arrOffice(65, 56, 10, 4, "230");

				floor2->arrOffice(79, 1, 10, 4, "218");
				floor2->arrOffice(79, 6, 10, 4, "219");
				floor2->arrOffice(79, 11, 10, 4, "221");
				floor2->arrOffice(79, 16, 10, 4, "222");
				floor2->arrOffice(79, 21, 10, 4, "223");
				floor2->arrOffice(79, 26, 10, 4, "224");
				floor2->arrOffice(79, 31, 10, 4, "225");
				floor2->arrOffice(79, 36, 10, 4, "226(4�г�)");
				floor2->arrOffice(79, 41, 10, 4, "226(3�г�)");
				floor2->arrOffice(79, 46, 10, 4, "227");
				floor2->arrOffice(79, 51, 10, 4, "228");
				floor2->arrOffice(79, 56, 10, 4, "229");

				floor2->gotoxy(0, 63);
				printf("214����ȸ����(CPA PREP)\T212����ȸ��� �н�������(CPA PREP Support)\t221����ȸ���� ������\n");
				printf("207�������б����� �����繫��\t206�̵��Ŀ�´����̼��Ϻη��̸�� �����Ѹ���Roland Attila Csizmazia(�ݷ���)\n");
				printf("205��㺹����å���п�/�������п� �����繫��\t204�������б�����/��㺹��������п� �����繫��\n");
				printf("203����������/�۷��ñ������� ����̾�/������\t216����ȸ���� ������\t201������\t232���񱺿������\n");
				printf("233���񱺿���\t217���ѱ���\t231���\t230�ްԽ�(3�г�)\t218���ӱ�����\t219��������\t221�б������\n");
				printf("222������\t223��ġ�ٹ��ڽ�\t224������\t225���ĺ��� ����������\t226����������(4�г�)\t226����������(3�г�)\n");
				printf("227�����н���\t228�ްԽ�(4�г�)\t229ü�´ܷý�\n");
				break;
			case 3:
				floor3 = (struct Floor*)malloc(sizeof(struct Floor));
				floor3->clear = clear;
				floor3->lineGroup = lineGroup;
				floor3->arrOffice = arrOffice;
				floor3->gotoxy = gotoxy;
				floor3->clear();
				floor3->lineGroup(84, 47);
				floor3->arrOffice(1, 1, 10, 2, "315");
				floor3->arrOffice(1, 4, 10, 2, "314");
				floor3->arrOffice(1, 7, 10, 2, "313");
				floor3->arrOffice(1, 10, 10, 2, "312");
				floor3->arrOffice(1, 13, 10, 2, "311");
				floor3->arrOffice(1, 17, 10, 2, "310");
				floor3->arrOffice(1, 21, 10, 2, "309"); 
				floor3->arrOffice(1, 24, 10, 2, "308");
				floor3->arrOffice(1, 27, 10, 2, "307");
				floor3->arrOffice(1, 31, 10, 2, "306");
				floor3->arrOffice(1, 34, 10, 2, "305");
				floor3->arrOffice(1, 37, 10, 2, "304");
				floor3->arrOffice(1, 41, 10, 2, "303");
				floor3->arrOffice(1, 44, 10, 2, "302");

				floor3->arrOffice(18, 2, 10, 4, "316");
				floor3->arrOffice(18, 14, 10, 4, "ȭ���");
				floor3->arrOffice(26, 30, 7, 4, "���");
				floor3->arrOffice(18, 38, 10, 4, "301");
				
				floor3->arrOffice(40, 25, 11, 4, "����������");

				floor3->arrOffice(56, 2, 10, 4, "317");
				floor3->arrOffice(54, 30, 7, 4, "���");
				floor3->arrOffice(56, 36, 10, 4, "326");
				floor3->arrOffice(56, 42, 10, 4, "325");

				floor3->arrOffice(73, 1, 10, 4, "318");
				floor3->arrOffice(73, 7, 10, 4, "319");
				floor3->arrOffice(73, 14, 10, 4, "320");
				floor3->arrOffice(73, 21, 10, 4, "321");
				floor3->arrOffice(73, 28, 10, 4, "322");
				floor3->arrOffice(73, 36, 10, 4, "323");
				floor3->arrOffice(73, 42, 10, 4, "324");

				floor3->gotoxy(0,50);
				printf("315�κ��к� �����繫��\t314�κ��к� �к���\t313�κ��к� �����繫��\t312�κ��к� ������\t311�������ͽ�\n");
				printf("310�κ��к� �����繫��\t309����ý��� ������\t308�κ��к� �����繫��\t307�κ��к� ���̳���\t306�κ��к� ������\n");
				printf("305�κ��к� �����繫��\t304�κ��к� �����繫��\t303�κ��к� �����繫��\t302�κ��к� �����繫��\n");
				printf("316Wearable Robot ����������\t301�κ��к� �����繫��\t317�κ��к� ����\t326�κ��к� ��������\n");
				printf("324�κ��к��л�ȸ��\t318�̵��κ� ������\t319�̷��κ� ������\t320���ɷκ��ý��� ������\t321�κ��кλ繫��\n");
				printf("322�κ��кο�������\t323����κ������\t324����������ʽ����\n");

				break;
			case 4:
				floor4 = (struct Floor*)malloc(sizeof(struct Floor));
				floor4->clear = clear;
				floor4->lineGroup = lineGroup;
				floor4->arrOffice = arrOffice;
				floor4->gotoxy = gotoxy;
				floor4->clear();
				floor4->lineGroup(89, 33);
				floor4->arrOffice(1, 1, 10, 4, "406");
				floor4->arrOffice(1, 6, 10, 4, "405");
				floor4->arrOffice(1, 14, 10, 4, "404");
				floor4->arrOffice(1, 21, 10, 4, "403");
				floor4->arrOffice(1, 27, 10, 4, "402");

				floor4->arrOffice(15, 1, 10, 4, "407");
				floor4->arrOffice(15, 6, 10, 4, "ȭ���");
				floor4->arrOffice(17, 17, 7, 4, "���");
				floor4->arrOffice(15, 23, 10, 4, "401");

				floor4->arrOffice(29, 1, 10, 4, "408");
				floor4->arrOffice(29, 8, 10, 6, "�ްԼ�");

				floor4->arrOffice(42, 1, 10, 4, "409");
				floor4->arrOffice(42, 14, 11, 4, "����������");

				floor4->arrOffice(53, 1, 10, 4, "410");

				floor4->arrOffice(65, 6, 10, 4, "ȭ���");
				floor4->arrOffice(67, 17, 7, 4, "���");
				floor4->arrOffice(65, 23, 10, 4, "419");
				floor4->arrOffice(65, 28, 10, 4, "418");

				floor4->arrOffice(77, 1, 10, 4, "411");
				floor4->arrOffice(77, 6, 10, 4, "412");
				floor4->arrOffice(77, 11, 10, 4, "413");
				floor4->arrOffice(77, 17, 10, 4, "415");
				floor4->arrOffice(77, 23, 10, 4, "416");
				floor4->arrOffice(77, 28, 10, 4, "417");

				floor4->gotoxy(0, 35);
				printf("406���ǽ�\t405���ǽ�\t404���ǽ�\t403PC�����\t402�κ��������� ������\t407���̳���1\t408���̳���2\n");
				printf("409���̳���3\t410���̳���4\t419���п��� ����������\t418���л� �ްԽ�\t411���ǽ�\t412���ǽ�\t413���ǽ�\n");
				printf("415�濵���к��л�ȸ��\t416�濵�����л�ȸ��\t417������\n");
				
				break;
			case 5:
				floor5 = (struct Floor*)malloc(sizeof(struct Floor));
				floor5->clear = clear;
				floor5->lineGroup = lineGroup;
				floor5->arrOffice = arrOffice;
				floor5->gotoxy = gotoxy;
				floor5->clear();
				floor5->lineGroup(77, 46);
				floor5->arrOffice(1, 1, 10, 2, "517");
				floor5->arrOffice(1, 4, 10, 2, "516");
				floor5->arrOffice(1, 7, 10, 2, "515");
				floor5->arrOffice(1, 10, 10, 2, "514");
				floor5->arrOffice(1, 13, 10, 2, "513");
				floor5->arrOffice(1, 16, 10, 2, "512");
				floor5->arrOffice(1, 19, 10, 2, "511");
				floor5->arrOffice(1, 22, 10, 2, "510");
				floor5->arrOffice(1, 25, 10, 2, "509");
				floor5->arrOffice(1, 28, 10, 2, "508");
				floor5->arrOffice(1, 31, 10, 2, "507");
				floor5->arrOffice(1, 34, 10, 2, "505");
				floor5->arrOffice(1, 37, 10, 2, "504");
				floor5->arrOffice(1, 40, 10, 2, "503");
				floor5->arrOffice(1, 43, 10, 2, "502");

				floor5->arrOffice(13, 2, 10, 4, "518");
				floor5->arrOffice(13, 20, 9, 4, "ȭ���");
				floor5->arrOffice(18, 33, 7, 4, "���");
				floor5->arrOffice(13, 41, 10, 4, "501");

				floor5->arrOffice(25, 7, 10, 4, "519");
				floor5->arrOffice(25, 12, 10, 4, "520");

				floor5->arrOffice(32, 27, 11, 4, "����������");

				floor5->arrOffice(38, 7, 10, 4, "522");
				floor5->arrOffice(38, 12, 10, 4, "521");

				floor5->arrOffice(49, 2, 10, 4, "523");
				floor5->arrOffice(49, 33, 7, 4, "���");

				floor5->arrOffice(52, 40, 10, 2, "540");
				floor5->arrOffice(52, 43, 10, 2, "539");

				floor5->arrOffice(66, 1, 10, 2, "524");
				floor5->arrOffice(66, 4, 10, 2, "525");
				floor5->arrOffice(66, 7, 10, 2, "526");
				floor5->arrOffice(66, 10, 10, 2, "527");
				floor5->arrOffice(66, 13, 10, 2, "528");
				floor5->arrOffice(66, 16, 10, 2, "529");
				floor5->arrOffice(66, 19, 10, 2, "530");
				floor5->arrOffice(66, 22, 10, 2, "531");
				floor5->arrOffice(66, 25, 10, 2, "532");
				floor5->arrOffice(66, 28, 10, 2, "533");
				floor5->arrOffice(66, 31, 10, 2, "534");
				floor5->arrOffice(66, 34, 10, 2, "535");
				floor5->arrOffice(66, 37, 10, 2, "536");
				floor5->arrOffice(66, 40, 10, 2, "537");
				floor5->arrOffice(66, 43, 10, 2, "538");


				floor5->gotoxy(0, 48);
				printf("507~517�濵�кα����繫��\t505�濵���м��̳���\t504�濵�кλ繫��\t503�濵���б�����\t502�����\n");
				printf("518Marketing LAB\t501�ܷ�������\t519�λ�-����-���� ������ ������\t520�����5\t522MIS\n");
				printf("521�濵�ɸ�,������� ������\t523ȸ���繫 ������\t540���ð�ȹ�ε����а����п�������\n");
				printf("539�濵�к� �����繫��\t524~531�濵�к� �����繫��\t532�κ��к� �����繫��\t533�濵�к� �����繫��/�к���\n");
				printf("534~536�濵�к� �����繫��\t537�濵�к� Ư��ȭ��\t538~539�濵�к� �����繫��\t���ð�ȹ�ε����а����п�������\n");
				break;
			default:
				printf("�� ���� ���� ���� ��ȹ�� �����ϴ�.\n");
				break;
			}

			printf("\n");
			printf("�ǹ� ������ ���� �ͽ��ϱ�?(����:0)");
			scanf("%d", &floor);
		}
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
		struct Floor* floorB3,* floorB2,* floorB1,* floor1, * floor2, * floor3, * floor4, * floor5, * floor6, * floor7;
		while (floor != 0) {
			switch (floor) {
			case -3:
				floorB3 = (struct Floor*)malloc(sizeof(struct Floor));
				floorB3->clear = clear;
				floorB3->lineGroup = lineGroup;
				floorB3->arrOffice = arrOffice;
				floorB3->gotoxy = gotoxy;
				floorB3->clear();
				floorB3->lineGroup(50, 25);
				floorB3->arrOffice(25, 12, 10, 10, "����������");

				floorB3->gotoxy(0,26);

				break;
			case -2:
				floorB2 = (struct Floor*)malloc(sizeof(struct Floor));
				floorB2->clear = clear;
				floorB2->lineGroup = lineGroup;
				floorB2->arrOffice = arrOffice;
				floorB2->gotoxy = gotoxy;
				floorB2->clear();
				floorB2->lineGroup(50, 25);
				floorB2->arrOffice(25, 12, 10, 10, "����������");

				floorB2->gotoxy(0, 26);

				break;
			case -1:
				floorB1 = (struct Floor*)malloc(sizeof(struct Floor));
				floorB1->clear = clear;
				floorB1->lineGroup = lineGroup;
				floorB1->arrOffice = arrOffice;
				floorB1->gotoxy = gotoxy;
				floorB1->clear();
				floorB1->lineGroup(92, 31);
				floorB1->arrOffice(20, 1, 10, 4, "B109");
				floorB1->arrOffice(31, 1, 10, 4, "B108");
				floorB1->arrOffice(42, 1, 10, 4, "B107");
				floorB1->arrOffice(53, 1, 10, 4, "B106");
				floorB1->arrOffice(64, 1, 10, 4, "B105");

				floorB1->arrOffice(9, 7, 10, 4, "B115");
				floorB1->arrOffice(20, 7, 10, 4, "B114");
				floorB1->arrOffice(31, 7, 10, 4, "B113");
				floorB1->arrOffice(42, 7, 10, 4, "B112");
				floorB1->arrOffice(53, 7, 10, 4, "B111");
				floorB1->arrOffice(64, 7, 10, 4, "B110");

				floorB1->arrOffice(15, 13, 10, 4, "B101");
				floorB1->arrOffice(28, 13, 10, 4, "B102");
				floorB1->arrOffice(41, 13, 10, 4, "B103");
				floorB1->arrOffice(54, 13, 10, 4, "B104");
				
				floorB1->arrOffice(80, 9, 10, 4, "ȭ���");

				floorB1->arrOffice(11, 20, 7, 4, "���");
				floorB1->arrOffice(64, 20, 10, 4, "���");

				floorB1->arrOffice(1, 26, 10, 4, "�Ա�");

				floorB1->gotoxy(0, 32);
				printf("B101~B104���ǽ�\tB105�ι���ȸ���д��� �л�ȸ��\tB106�ڻ�����а� �л�ȸ��\tB107��å���д��� �л�ȸ��\tB108���к� �л�ȸ��\n");
				printf("B109�̵����к� �л�ȸ��\tB110�ι���ȸ���д��� �л�ȸ��\tB111������а� �л�ȸ��\tB112�����а� �л�ȸ��\n");
				printf("B113�����а� �л�ȸ��\tB114���Ͼ� ��ȭ����к� �л�ȸ��\tB115�����к� �л�ȸ��\n");
				break;
			case 1:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(76, 46);
				floor1->arrOffice(1, 1, 10, 4, "104");
				floor1->arrOffice(1, 6, 10, 4, "105");
				floor1->arrOffice(1, 11, 10, 4, "106");
				floor1->arrOffice(1, 16, 10, 4, "107");
				floor1->arrOffice(1, 21, 10, 4, "108");
				floor1->arrOffice(1, 26, 10, 4, "109");
				floor1->arrOffice(1, 31, 10, 4, "110");
				floor1->arrOffice(1, 36, 10, 4, "111");
				floor1->arrOffice(1, 41, 10, 4, "112");

				floor1->arrOffice(13, 41, 7, 4, "�Ա�");

				floor1->arrOffice(16, 11, 10, 4, "118");
				floor1->arrOffice(16, 16, 10, 4, "117");
				floor1->arrOffice(16, 21, 10, 4, "115");
				floor1->arrOffice(16, 26, 10, 4, "114");
				floor1->arrOffice(16, 31, 10, 4, "113");

				floor1->arrOffice(16, 36, 7, 4, "���");

				floor1->arrOffice(28, 9, 11, 4, "����������");
				floor1->arrOffice(28, 15, 7, 4, "���");

				floor1->arrOffice(39, 6, 10, 4, "ȭ���");

				floor1->arrOffice(40, 41, 8, 4, "�Ա�");

				floor1->arrOffice(51, 8, 10, 4, "103");

				floor1->arrOffice(65, 8, 10, 4, "102");
				floor1->arrOffice(65, 26, 10, 4, "101");


				floor1->gotoxy(0, 47);
				printf("101������\t102�ѿ�K-WORK1\t103������\t104�������ó ��ǻ�Ͱ��ǽ�\t105��������� �ɸ������\t106��ȸ���д��� Ư��ȭ��\n");
				printf("107��ȸ���д��� Ư��ȭ��\t108�����а� �繫��\t109�������а� �繫�� ����Ư��ȭ �����(ck��)\t110������а� �繫��\n");
				printf("111�ι���ȸ���д��� ������ ��å���д��� ������\t112���к� Ư��ȭ��\t113�����\t114�ι���ȸ���д��� �����\n");
				printf("115�����Ͽ��кδ��� ������ �۷��ñ�������\t117�̵��Ŀ�����̼��к� �а��繫��\t118�����кλ繫�� ���������кλ繫��\n");
				break;
			case 2:
				floor2 = (struct Floor*)malloc(sizeof(struct Floor));
				floor2->clear = clear;
				floor2->lineGroup = lineGroup;
				floor2->arrOffice = arrOffice;
				floor2->gotoxy = gotoxy;
				floor2->clear();
				floor2->lineGroup(55, 37);
				floor2->arrOffice(1, 1, 10, 2, "205");
				floor2->arrOffice(1, 4, 10, 2, "206");
				floor2->arrOffice(1, 7, 10, 2, "207");
				floor2->arrOffice(1, 10, 10, 2, "208");
				floor2->arrOffice(1, 13, 10, 2, "209");
				floor2->arrOffice(1, 16, 10, 2, "210");
				floor2->arrOffice(1, 19, 10, 2, "211");
				floor2->arrOffice(1, 22, 10, 2, "212");
				floor2->arrOffice(1, 25, 10, 2, "213");
				floor2->arrOffice(1, 28, 10, 2, "214");
				floor2->arrOffice(1, 31, 10, 2, "215");
				floor2->arrOffice(1, 34, 10, 2, "216");

				floor2->arrOffice(13, 7, 10, 2, "225");
				floor2->arrOffice(13, 10, 10, 2, "224");
				floor2->arrOffice(13, 13, 10, 2, "223");
				floor2->arrOffice(13, 16, 10, 2, "222");
				floor2->arrOffice(13, 19, 10, 2, "221");
				floor2->arrOffice(13, 22, 10, 2, "220");
				floor2->arrOffice(15, 25, 7, 2, "���");
				floor2->arrOffice(13, 28, 10, 2, "219");
				floor2->arrOffice(13, 31, 10, 2, "218");
				floor2->arrOffice(13, 34, 10, 2, "217");

				floor2->arrOffice(24, 16, 10, 4, "����������");
				floor2->arrOffice(26, 21, 7, 4, "���");

				floor2->arrOffice(22, 1, 8, 4, "ȭ���");

				floor2->arrOffice(33, 1, 10, 4, "204");
				floor2->arrOffice(33, 6, 10, 4, "201");

				floor2->arrOffice(44, 1, 10, 4, "203");
				floor2->arrOffice(44, 6, 10, 4, "202");


				floor2->gotoxy(0, 38);
				printf("201~204���ǽ�\t205���л� �ްԽ�\t206���̳���\t207�����к� Ư��ȭ��\t208���Ͼƹ�ȭ����к� Ư��ȭ��\n");
				printf("209�����а�Ư��ȭ��\t210������к�\t211������а� Ư��ȭ��\t212�������п����\t213�����ǻ� ����ȸ �������п�\n");
				printf("214�濵���п� ������ �������п� ������ ��㺹����å���п� ������\t215�ڷ��\t216��å���д��� �����\n");
				printf("225����ɸ��а� �繫��\t224�����Ͽ��кδ��� �����\t223��������к� �繫�� ���Ͼ�Ư���к� �繫��\n");
				printf("222��������к� Ư��ȭ��\t221�ڻ�����а� �繫��\t220���а� �繫�� ���к� �繫��\t219�ܷ�������\n");
				printf("218�����㿬���� ����ɸ���㼾��\t217��㺹����å���� �����\n");
				break;
			case 3:
				floor3 = (struct Floor*)malloc(sizeof(struct Floor));
				floor3->clear = clear;
				floor3->lineGroup = lineGroup;
				floor3->arrOffice = arrOffice;
				floor3->gotoxy = gotoxy;
				floor3->clear();
				floor3->lineGroup(53, 45);
				floor3->arrOffice(3, 1, 10, 4, "305");
				floor3->arrOffice(3, 16, 10, 4, "306");
				floor3->arrOffice(3, 21, 10, 4, "307");
				floor3->arrOffice(3, 26, 10, 4, "308");
				floor3->arrOffice(3, 31, 10, 4, "309");
				floor3->arrOffice(1, 40, 10, 4, "310");

				floor3->arrOffice(20, 1, 10, 4, "ȭ���");
				floor3->arrOffice(20, 15, 11, 4, "����������");
				floor3->arrOffice(20, 21, 7, 4, "���");
				floor3->arrOffice(13, 36, 7, 4, "���");

				floor3->arrOffice(31, 1, 10, 4, "304");
				floor3->arrOffice(31, 8, 10, 4, "301");

				floor3->arrOffice(42, 1, 10, 4, "303");
				floor3->arrOffice(42, 8, 10, 4, "302");

				floor3->gotoxy(0, 46);
				printf("301~305���ǽ�\t306�ްԽ�\t307~310���ǽ�\n");
				break;
			case 4:
				floor4 = (struct Floor*)malloc(sizeof(struct Floor));
				floor4->clear = clear;
				floor4->lineGroup = lineGroup;
				floor4->arrOffice = arrOffice;
				floor4->gotoxy = gotoxy;
				floor4->clear();
				floor4->lineGroup(56, 41);
				floor4->arrOffice(3, 1, 10, 4, "405");
				floor4->arrOffice(3, 7, 10, 4, "406");
				floor4->arrOffice(3, 14, 10, 4, "407");
				floor4->arrOffice(3, 19, 10, 4, "408");
				floor4->arrOffice(3, 24, 10, 4, "409");
				floor4->arrOffice(1, 36, 10, 4, "410");

				floor4->arrOffice(23, 1, 10, 4, "ȭ���");
				floor4->arrOffice(17, 9, 11, 4, "����������");
				floor4->arrOffice(20, 14, 7, 4, "���");
				floor4->arrOffice(12, 30, 7, 4, "���");

				floor4->arrOffice(34, 1, 10, 4, "404");
				floor4->arrOffice(34, 8, 10, 4, "401");

				floor4->arrOffice(45, 1, 10, 4, "403");
				floor4->arrOffice(45, 8, 10, 4, "402");

				floor4->gotoxy(0, 42);
				printf("401~405���ǽ�\t406�ްԽ�\t407~410���ǽ�\n");
				break;
			case 5:
				floor5 = (struct Floor*)malloc(sizeof(struct Floor));
				floor5->clear = clear;
				floor5->lineGroup = lineGroup;
				floor5->arrOffice = arrOffice;
				floor5->gotoxy = gotoxy;
				floor5->clear();
				floor5->lineGroup(85, 40);
				floor5->arrOffice(1, 1, 10, 2, "507");
				floor5->arrOffice(1, 4, 10, 2, "508");
				floor5->arrOffice(1, 7, 10, 2, "509");
				floor5->arrOffice(1, 10, 10, 2, "510");
				floor5->arrOffice(1, 13, 10, 2, "511");
				floor5->arrOffice(1, 16, 10, 2, "512");
				floor5->arrOffice(1, 19, 10, 2, "513");
				floor5->arrOffice(1, 22, 10, 2, "514");
				floor5->arrOffice(1, 25, 10, 2, "515");
				floor5->arrOffice(1, 28, 10, 2, "516");
				floor5->arrOffice(1, 31, 10, 2, "517");
				floor5->arrOffice(1, 34, 10, 2, "518");
				floor5->arrOffice(1, 37, 10, 2, "519");

				floor5->arrOffice(13, 1, 10, 2, "506");
				floor5->arrOffice(13, 4, 10, 2, "529");
				floor5->arrOffice(13, 7, 10, 2, "528");
				floor5->arrOffice(13, 10, 10, 2, "527");
				floor5->arrOffice(13, 13, 10, 2, "526");
				floor5->arrOffice(13, 16, 10, 2, "525");
				floor5->arrOffice(15, 19, 10, 2, "524");
				floor5->arrOffice(13, 22, 10, 2, "523");
				floor5->arrOffice(13, 28, 10, 2, "522");
				floor5->arrOffice(13, 31, 10, 2, "521");
				floor5->arrOffice(13, 34, 10, 2, "520");
				floor5->arrOffice(13, 37, 11, 2, "���˿�����");

				floor5->arrOffice(24, 1, 17, 4, "�޸����� ������");
				floor5->arrOffice(24, 25, 7, 4, "���");

				floor5->arrOffice(42, 1, 8, 4, "ȭ���");
			
				floor5->arrOffice(51, 10, 11, 4, "����������");
				floor5->arrOffice(51, 15, 7, 4, "���");

				floor5->arrOffice(63, 1, 10, 4, "504");
				floor5->arrOffice(63, 6, 10, 4, "501");

				floor5->arrOffice(74, 1, 10, 4, "503");
				floor5->arrOffice(74, 6, 10, 4, "502");

				floor5->gotoxy(0, 41);
				printf("501�ѿ�K-WORK2\t502~504���ǽ�\t506�������п� �����繫�� �����򿬱���\t507�������� ���\t508~509���к� �����繫��\n");
				printf("510�����к� �����繫��\t511~514/517/519/�����Ͽ��кδ��� �����繫��\t516������а� �����繫��\t518�����а� �����繫��\n");
				printf("529���̳���2\t525~528/520�����Ͽ��кδ��� �����繫��\t524�����а� �����繫��\t523�����а� �����繫��\t522�����Ͽ��к� ���̳���\n");
				printf("521�����а� �����繫��(�а����)\n");
				break;
			case 6:
				floor6 = (struct Floor*)malloc(sizeof(struct Floor));
				floor6->clear = clear;
				floor6->lineGroup = lineGroup;
				floor6->arrOffice = arrOffice;
				floor6->gotoxy = gotoxy;
				floor6->clear();
				floor6->lineGroup(113, 37);
				floor6->arrOffice(1, 1, 10, 2, "614");
				floor6->arrOffice(1, 4, 10, 2, "615");
				floor6->arrOffice(1, 7, 10, 2, "616");
				floor6->arrOffice(1, 10, 10, 2, "617");
				floor6->arrOffice(1, 13, 10, 2, "618");
				floor6->arrOffice(1, 16, 10, 2, "619");
				floor6->arrOffice(1, 19, 10, 2, "620");
				floor6->arrOffice(1, 22, 10, 2, "621");
				floor6->arrOffice(1, 25, 10, 2, "622");
				floor6->arrOffice(1, 28, 10, 2, "623");
				floor6->arrOffice(1, 31, 10, 2, "624");
				floor6->arrOffice(1, 34, 10, 2, "625");				
			
				floor6->arrOffice(12, 34, 10, 2, "626");
				floor6->arrOffice(23, 34, 10, 2, "627");

				floor6->arrOffice(13, 1, 10, 2, "613");
				floor6->arrOffice(15, 7, 10, 2, "635");
				floor6->arrOffice(15, 10, 10, 2, "634");
				floor6->arrOffice(15, 13, 10, 2, "633");
				floor6->arrOffice(15, 16, 10, 2, "632");
				floor6->arrOffice(15, 19, 10, 2, "631");
				floor6->arrOffice(15, 22, 10, 2, "630");
				floor6->arrOffice(18, 28, 10, 2, "���");
				floor6->arrOffice(15, 31, 10, 2, "629");
				floor6->arrOffice(34, 34, 10, 2, "628");

				floor6->arrOffice(24, 1, 10, 2, "612");

				floor6->arrOffice(35, 1, 8, 4, "ȭ���");
			
				floor6->arrOffice(37, 7, 11, 4, "����������");
				floor6->arrOffice(38, 13, 8, 4, "���");

				floor6->arrOffice(47, 1, 10, 4, "611");
				
				floor6->arrOffice(58, 1, 10, 4, "610");
				floor6->arrOffice(58, 7, 10, 4, "601");

				floor6->arrOffice(69, 1, 10, 4, "609");
				floor6->arrOffice(69, 7, 10, 4, "602");

				floor6->arrOffice(80, 1, 10, 4, "608");
				floor6->arrOffice(80, 7, 10, 4, "603");

				floor6->arrOffice(91, 1, 10, 4, "607");
				floor6->arrOffice(91, 7, 10, 4, "604");

				floor6->arrOffice(102, 1, 10, 4, "606");
				floor6->arrOffice(102, 7, 10, 4, "605");

				floor6->gotoxy(0, 38);
				printf("601~603���Ͼƹ�ȭ����к� �����繫��\t604��������к� �����繫��\t605�濵�к� �����繫��\t606~607/609~610���к�\t608�ѿ�K-WORK3\n");
				printf("611�Ǽ��������п� �����\t612�Ǽ�������������\t613�Ǽ��������п� ������\t614����ɸ��а� �����繫��\t615���к� �����繫��\n");
				printf("616~618��������к� �����繫��\t619~620(�к���)���к� �����繫��\t621~623���Ͼƹ�ȭ����к� �����繫��\t624~628����ɸ��а� �����繫��\n");
				printf("629���̳���2\t630���Ͼƹ�ȭ����к� �����繫��\t631�����к� �����繫��\t632���к� �����繫��\t633�����к� �����繫��\n");
				printf("634~635��������к� �����繫��\n");
				break;
			case 7:
				floor7 = (struct Floor*)malloc(sizeof(struct Floor));
				floor7->clear = clear;
				floor7->lineGroup = lineGroup;
				floor7->arrOffice = arrOffice;
				floor7->gotoxy = gotoxy;
				floor7->clear();
				floor7->lineGroup(113, 37);
				floor7->arrOffice(1, 4, 10, 2, "714");
				floor7->arrOffice(1, 7, 10, 2, "715");
				floor7->arrOffice(1, 10, 10, 2, "716");
				floor7->arrOffice(1, 13, 10, 2, "717");
				floor7->arrOffice(1, 16, 10, 2, "718");
				floor7->arrOffice(1, 19, 10, 2, "719");
				floor7->arrOffice(1, 22, 10, 2, "720");
				floor7->arrOffice(1, 25, 10, 2, "721");
				floor7->arrOffice(1, 28, 10, 2, "722");
				floor7->arrOffice(1, 31, 10, 2, "723");
				floor7->arrOffice(1, 34, 10, 2, "724");

				floor7->arrOffice(12, 34, 10, 2, "725");
				floor7->arrOffice(23, 34, 10, 2, "726");
				floor7->arrOffice(34, 34, 10, 2, "727");


				floor7->arrOffice(13, 1, 10, 2, "713");
				floor7->arrOffice(22, 10, 10, 2, "734");
				floor7->arrOffice(22, 13, 10, 2, "733");
				floor7->arrOffice(22, 16, 10, 2, "732");
				floor7->arrOffice(22, 19, 10, 2, "731");
				floor7->arrOffice(22, 22, 10, 2, "730");
				floor7->arrOffice(22, 25, 10, 2, "729");
				floor7->arrOffice(22, 28, 10, 2, "���");
				floor7->arrOffice(22, 31, 10, 2, "728");

				floor7->arrOffice(24, 1, 10, 2, "712");

				floor7->arrOffice(35, 1, 10, 2, "711");

				floor7->arrOffice(37, 7, 11, 4, "����������");
				floor7->arrOffice(38, 13, 8, 4, "���");

				floor7->arrOffice(47, 1, 10, 4, "ȭ���");

				floor7->arrOffice(58, 1, 10, 4, "710");
				floor7->arrOffice(58, 7, 10, 4, "701");

				floor7->arrOffice(69, 1, 10, 4, "709");
				floor7->arrOffice(69, 7, 10, 4, "702");

				floor7->arrOffice(80, 1, 10, 4, "708");
				floor7->arrOffice(80, 7, 10, 4, "703");

				floor7->arrOffice(91, 1, 10, 4, "707");
				floor7->arrOffice(91, 7, 10, 4, "704");

				floor7->arrOffice(102, 1, 10, 4, "706");
				floor7->arrOffice(102, 7, 10, 4, "705");

				floor7->gotoxy(0, 38);
				printf("701~708�������а� �����繫��\t709�����а� �����繫��\t710������а� �����繫��\t711�۾����㱳��\t712�������п� �����繫��\n");
				printf("713~714������а� �����繫��\t715���к� �����繫��\t716���Ͼƹ�ȭ����к� �����繫��\t717~718��������к� �����繫��\n");
				printf("719~727�̵��Ŀ�´����̼��к� �����繫��\t728��ȭ���ްԽ�\t729�����к� �����繫��\t730�����а� �����繫��\t731�����к� �����繫��\n");
				printf("732���Ͼƹ�ȭ����к� �����繫��\t733~734�̵��Ŀ�´����̼��к� �����繫��\n");
				break;
			default:
				printf("�� ���� ���� ���� ��ȹ�� �����ϴ�.\n");
				break;
			}
			printf("\n");
			printf("�ǹ� ������ ���� �ͽ��ϱ�?(����:0)");
			scanf("%d", &floor);
		}
	}
	if (!strcmp(bName, "���ͳ��ų� �Ͽ콺")) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?");
		scanf("%d", &floor);
	}
};