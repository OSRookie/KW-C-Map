#include "Methods.h"

int floor;

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

	if (strcmp(bName, "�񸶰�") == 0) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/

		printf("�ǹ� ������ ���� �ͽ��ϱ�? (1 ~ 7) (����:0)");
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
				floor1->arrOffice(2, 1, 23, 5, "�������");
				floor1->arrOffice(50, 1, 10, 10, "���");
				floor1->arrOffice(30, 1, 18, 6, "�μ��");
				floor1->arrOffice(2, 10, 15, 13, "��������");
				floor1->gotoxy(0, 26);
				printf("Ư¡: ������, ���̳����� �����Ϳ��� �뿩�Ҽ� �ִ�.\n\n");
				break;
			case 2:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(80, 25);
				floor1->arrOffice(1, 2, 16, 18, "���漾��");
				floor1->arrOffice(20, 2, 25, 3, "������ �ǽ���");
				floor1->arrOffice(48, 2, 18, 3, "�ص��м�");
				floor1->arrOffice(58, 4, 0, 0, "������");
				floor1->arrOffice(30, 10, 40, 10, "�κ�");
				floor1->arrOffice(65, 21, 10, 2, "���");
				floor1->gotoxy(0, 26);
				printf("Ư¡\n");
				printf("1. ������ �л����� ���� ������ �ǽ����� �ִ�.(202ȣ)\n");
				printf("2. �κ� å����� ���� �ְ� ����� ���� �ڽ��ϱ� ���� ȯ���̴�.\n\n");
				break;
			case 3:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(120, 40);
				floor1->arrOffice(3, 1, 7, 3, "�ⱸ");
				floor1->arrOffice(12, 1, 7, 3, "���");
				floor1->arrOffice(12, 6, 20, 5, "������");
				floor1->arrOffice(22, 9, 0, 0, "������");
				floor1->arrOffice(12, 13, 15, 4, "���̳���");
				floor1->arrOffice(12, 18, 15, 4, "���ް���");
				floor1->arrOffice(12, 24, 15, 4, "����");
				floor1->arrOffice(28, 1, 7, 3, "�ⱸ");
				floor1->arrOffice(3, 20, 7, 3, "�л�");
				floor1->arrOffice(6, 22, 0, 0, "ȸ��");
				floor1->arrOffice(38, 1, 15, 5, "������");
				floor1->arrOffice(44, 4, 0, 0, "������");
				floor1->arrOffice(38, 7, 15, 3, "�����");
				floor1->arrOffice(38, 11, 15, 3, "315ȣ");
				floor1->arrOffice(38, 16, 15, 3, "ȯ����а�");
				floor1->arrOffice(45, 18, 0, 0, "�����");
				floor1->arrOffice(56, 15, 13, 10, "ȯ��");
				floor1->arrOffice(61, 21, 0, 0, "���а�");
				floor1->arrOffice(61, 22, 0, 0, "������");
				floor1->arrOffice(32, 22, 7, 3, "ele");
				floor1->arrOffice(42, 21, 7, 3, "��ȭ");
				floor1->arrOffice(38, 26, 7, 3, "���");
				floor1->arrOffice(38, 30, 13, 5, "ȭ��");
				floor1->arrOffice(43, 33, 0, 0, "�����");
				floor1->arrOffice(53, 30, 7, 2, "��ȭ");
				floor1->arrOffice(53, 34, 13, 3, "ȭ�б���");
				floor1->arrOffice(58, 36, 0, 0, "�����");
				floor1->arrOffice(69, 34, 13, 3, "ȭ�а���");
				floor1->arrOffice(74, 36, 0, 0, "�����");
				floor1->arrOffice(85, 34, 7, 3, "���ǽ�");
				floor1->arrOffice(95, 34, 15, 3, "ȯ���");
				floor1->arrOffice(100, 36, 0, 0, "������");
				floor1->gotoxy(0, 41);
				printf("Ư¡\n");
				printf("1. ������ �л�ȸ���� �ִ�.\n");
				printf("2. 3���� �о ���ǽ� ã�Ⱑ ��ƴ�..\n");
				printf("3. ������, ������ �������� �ִ�..\n\n");
				break;
			case 4:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(85, 25);
				floor1->arrOffice(5, 1, 12, 7, "401~");
				floor1->arrOffice(10, 5, 0, 0, "405ȣ");
				floor1->arrOffice(19, 1, 13, 3, "�����");
				floor1->arrOffice(19, 5, 30, 3, "429~427ȣ");
				floor1->arrOffice(35, 9, 15, 3, "�����Խ�");
				floor1->arrOffice(52, 9, 15, 3, "�а�");
				floor1->arrOffice(58, 11, 0, 0, "�繫��");
				floor1->arrOffice(70, 9, 7, 3, "���");
				floor1->arrOffice(52, 5, 7, 3, "���");
				floor1->arrOffice(5, 9, 7, 3, "��ȭ");
				floor1->arrOffice(5, 13, 13, 3, "409ȣ");
				floor1->arrOffice(5, 17, 15, 5, "�����Խ�");
				floor1->arrOffice(25, 17, 7, 3, "���");
				floor1->arrOffice(36, 17, 15, 3, "�������");
				floor1->arrOffice(43, 19, 0, 0, "�����");
				floor1->arrOffice(54, 17, 20, 3, "419~421ȣ");
				floor1->arrOffice(30, 21, 25, 3, "�����Խ�");
				floor1->arrOffice(42, 23, 0, 0, "������");
				floor1->gotoxy(0, 26);
				printf("Ư¡\n");
				printf("1. �������հ�,�����а� �����Խ��� �ִ�.\n\n");
				break;
			case 5:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(85, 20);
				floor1->arrOffice(3, 2, 15, 4, "519ȣ");
				floor1->arrOffice(10, 5, 0, 0, "520ȣ");
				floor1->arrOffice(21, 2, 15, 3, "502ȣ");
				floor1->arrOffice(28, 4, 0, 0, "501ȣ");
				floor1->arrOffice(39, 2, 13, 3, "�İ�");
				floor1->arrOffice(44, 4, 0, 0, "�ǽ���");
				floor1->arrOffice(55, 2, 13, 3, "���ǽ�");
				floor1->arrOffice(3, 7, 13, 3, "����");
				floor1->arrOffice(8, 9, 0, 0, "�����");
				floor1->arrOffice(19, 7, 7, 3, "��ȭ");
				floor1->arrOffice(29, 7, 7, 3, "���");
				floor1->arrOffice(47, 7, 7, 3, "504ȣ");
				floor1->arrOffice(47, 13, 10, 3, "517ȣ");
				floor1->arrOffice(65, 13, 15, 3, "���̳���");
				floor1->arrOffice(38, 6, 7, 2, "ele");
				floor1->arrOffice(56, 6, 10, 4, "ȭ��");
				floor1->arrOffice(59, 9, 0, 0, "������");
				floor1->arrOffice(68, 6, 12, 4, "�����");
				floor1->arrOffice(38, 9, 7, 2, "��ȭ");
				floor1->arrOffice(3, 11, 15, 5, "������");
				floor1->arrOffice(10, 14, 0, 0, "������");

				floor1->gotoxy(0, 21);
				printf("Ư¡\n");
				printf("1. �����, ȭ����,������а� ����� �ִ�.\n");
				printf("2. 502,501,514,513 ȣ�� ��ǻ�� ���ǽ� \n");
				printf("2. ������ �繰���� �ִ�. \n");
				break;
			case 6:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(70, 20);
				floor1->arrOffice(10, 2, 15, 5, "�����");
				floor1->arrOffice(28, 2, 25, 5, "������");
				floor1->arrOffice(40, 5, 0, 0, "������");
				floor1->arrOffice(10, 8, 15, 5, "�繫��");
				floor1->arrOffice(50, 8, 10, 3, "���");
				floor1->arrOffice(4, 14, 10, 3, "��ȭ");
				floor1->arrOffice(16, 14, 10, 3, "���");
				floor1->arrOffice(28, 14, 10, 3, "ele");
				floor1->arrOffice(40, 14, 15, 5, "������");
				floor1->arrOffice(57, 14, 10, 3, "617ȣ");
				floor1->arrOffice(62, 16, 0, 0, "618ȣ");
				floor1->gotoxy(0, 21);
				printf("Ư¡\n");
				printf("1. ���ڰ� �繰���� �ִ�.\n");
				printf("2. ���ڰ� ������, �������� �ִ�..\n");
				printf("3. 617ȣ 618ȣ�� �ǹ� �ۿ� �ִ�.(�� ã��)\n\n");
				break;
			case 7:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(70, 20);
				floor1->arrOffice(10, 2, 15, 5, "�����");
				floor1->arrOffice(28, 2, 25, 5, "������");
				floor1->arrOffice(40, 5, 0, 0, "������");
				floor1->arrOffice(56, 2, 10, 3, "714ȣ");
				floor1->arrOffice(10, 8, 15, 5, "�繫��");
				floor1->arrOffice(50, 8, 10, 3, "���");
				floor1->arrOffice(4, 14, 10, 3, "��ȭ");
				floor1->arrOffice(16, 14, 10, 3, "���");
				floor1->arrOffice(28, 14, 10, 3, "ele");
				floor1->arrOffice(40, 14, 13, 3, "�����");
				floor1->arrOffice(55, 12, 13, 5, "������");
				floor1->gotoxy(0, 21);
				printf("Ư¡\n");
				printf("1. ����� �����,�繰���� �ִ�.\n");
				printf("2. ����� ������, �������� �ִ�..\n");
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
	if (strcmp(bName, "������") == 0) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�? (-1 ~ 10) (����:0)");
		scanf("%d", &floor);
		struct Floor* floor1;
		while (floor != 0) {
			switch (floor) {
			case -1:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(65, 25);
				floor1->arrOffice(5, 1, 10, 7, "105ȣ");
				floor1->arrOffice(5, 7, 10, 7, "106ȣ");
				floor1->arrOffice(5, 15, 10, 7, "107ȣ");
				floor1->arrOffice(35, 8, 10, 3, "103ȣ");
				floor1->arrOffice(47, 8, 10, 3, "102ȣ");
				floor1->arrOffice(43, 13, 5, 3, "ele");
				floor1->arrOffice(50, 13, 9, 9, "101ȣ");
				floor1->arrOffice(20, 20, 8, 2, "���");
				floor1->arrOffice(30, 20, 12, 2, "ȭ���");
				floor1->gotoxy(0, 26);
				printf("Ư¡\n");
				printf("���� ���ǽ��� ����\n");
				printf("�ο� ���� ����, ������ ���⼭ �ַ� ����.\n");
				printf("����ȭ���, ����ȭ��� �Ѵ� �ִ�.\n");
				printf("���Ͽ� �����ϱ� �����Ұ�.\n\n");
				break;
			case 1:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(50, 30);
				floor1->arrOffice(5, 1, 9, 7, "102ȣ");
				floor1->arrOffice(5, 9, 9, 7, "103ȣ");
				floor1->arrOffice(25, 9, 9, 7, "101ȣ");
				floor1->arrOffice(36, 9, 9, 7, "105ȣ");
				floor1->arrOffice(5, 17, 9, 7, "104ȣ");
				floor1->arrOffice(25, 17, 5, 3, "ele");
				floor1->arrOffice(36, 17, 10, 3, "ȭ���");
				floor1->arrOffice(36, 21, 10, 3, "���Ǳ�");
				floor1->arrOffice(3, 25, 15, 3, "����");
				floor1->arrOffice(20, 25, 7, 3, "���");
				floor1->gotoxy(0, 31);
				printf("Ư¡\n");
				printf("elevator�� ¦����, Ȧ�������� �������� �־� Ÿ�Ⱑ �����.\n");
				printf("�����ġ�� �߾˾Ƽ� �� ����ϴ°��� ����\n\n");
				break;
			case 2:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(50, 30);
				floor1->arrOffice(5, 1, 9, 7, "202ȣ");
				floor1->arrOffice(5, 9, 9, 7, "203ȣ");
				floor1->arrOffice(25, 9, 9, 7, "201ȣ");
				floor1->arrOffice(36, 9, 9, 7, "206ȣ");
				floor1->arrOffice(5, 17, 13, 7, "���п�");
				floor1->arrOffice(8, 21, 0, 0, "���ż���");
				floor1->arrOffice(25, 17, 5, 3, "ele");
				floor1->arrOffice(36, 17, 10, 3, "ȭ���");
				floor1->arrOffice(3, 25, 15, 3, "205ȣ");
				floor1->arrOffice(20, 25, 7, 3, "���");
				floor1->gotoxy(0, 31);
				break;
			case 3:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(50, 26);
				floor1->arrOffice(5, 1, 15, 20, "�����Խ�");
				floor1->arrOffice(34, 1, 13, 12, "�����Խ�");
				floor1->arrOffice(22, 8, 7, 3, "����");
				floor1->arrOffice(25, 12, 5, 3, "ele");
				floor1->arrOffice(25, 16, 7, 3, "���");
				floor1->arrOffice(34, 14, 10, 5, "ȭ���");
				floor1->arrOffice(5, 22, 35, 3, "������");
				floor1->gotoxy(0, 27);
				printf("Ư¡\n");
				printf("������ �ִ�.\n");
				printf("����� ������, �������� �ַ� �ִ�.\n\n");
				break;
			case 4:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(50, 26);
				floor1->arrOffice(5, 1, 15, 20, "�����Խ�");
				floor1->arrOffice(34, 1, 13, 12, "�����Խ�");
				floor1->arrOffice(25, 12, 5, 3, "ele");
				floor1->arrOffice(25, 16, 7, 3, "���");
				floor1->arrOffice(34, 14, 10, 5, "ȭ���");
				floor1->arrOffice(5, 22, 35, 3, "������");
				floor1->gotoxy(0, 27);
				printf("Ư¡\n");
				printf("������ ������, �������� �ַ� �ִ�.\n\n");
				break;
			case 5:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(50, 26);
				floor1->arrOffice(5, 1, 15, 20, "�����Խ�");
				floor1->arrOffice(34, 1, 13, 12, "�����Խ�");
				floor1->arrOffice(25, 12, 5, 3, "ele");
				floor1->arrOffice(25, 16, 7, 3, "���");
				floor1->arrOffice(34, 14, 10, 5, "ȭ���");
				floor1->arrOffice(5, 22, 35, 3, "������");
				floor1->gotoxy(0, 27);
				printf("Ư¡\n");
				printf("����� ������, �������� �ַ� �ִ�.\n\n");
				break;
			case 6:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(50, 26);
				floor1->arrOffice(5, 1, 15, 20, "�����Խ�");
				floor1->arrOffice(34, 1, 13, 12, "�����Խ�");
				floor1->arrOffice(25, 12, 5, 3, "ele");
				floor1->arrOffice(25, 16, 7, 3, "���");
				floor1->arrOffice(34, 14, 10, 5, "ȭ���");
				floor1->arrOffice(5, 22, 35, 3, "������");
				floor1->gotoxy(0, 27);
				break;
			case 7:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(50, 26);
				floor1->arrOffice(5, 1, 15, 20, "�����Խ�");
				floor1->arrOffice(34, 1, 13, 12, "�����Խ�");
				floor1->arrOffice(25, 12, 5, 3, "ele");
				floor1->arrOffice(25, 16, 7, 3, "���");
				floor1->arrOffice(34, 14, 10, 5, "ȭ���");
				floor1->arrOffice(5, 22, 35, 3, "������");
				floor1->gotoxy(0, 27);
				printf("Ư¡\n");
				printf("���ڰ� ������, �������� �ַ� �ִ�.\n\n");
				break;
			case 8:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(50, 26);
				floor1->arrOffice(5, 1, 15, 20, "�����Խ�");
				floor1->arrOffice(34, 1, 13, 12, "�����Խ�");
				floor1->arrOffice(25, 12, 5, 3, "ele");
				floor1->arrOffice(25, 16, 7, 3, "���");
				floor1->arrOffice(34, 14, 10, 5, "ȭ���");
				floor1->arrOffice(5, 22, 35, 3, "������");
				floor1->gotoxy(0, 27);
				printf("Ư¡\n");
				printf("����� ������, �������� �ַ� �ִ�.\n\n");
				break;
			case 9:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(50, 26);
				floor1->arrOffice(5, 1, 15, 20, "�����Խ�");
				floor1->arrOffice(34, 1, 13, 12, "�����Խ�");
				floor1->arrOffice(25, 12, 5, 3, "ele");
				floor1->arrOffice(25, 16, 7, 3, "���");
				floor1->arrOffice(34, 14, 10, 5, "ȭ���");
				floor1->arrOffice(5, 22, 35, 3, "������");
				floor1->gotoxy(0, 27);
				printf("Ư¡\n");
				printf("���� ��� ������, �������� �ַ� �ִ�.\n\n");
				break;
			case 10:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(50, 26);
				floor1->arrOffice(5, 1, 15, 20, "�����Խ�");
				floor1->arrOffice(34, 1, 13, 12, "�����Խ�");
				floor1->arrOffice(25, 12, 5, 3, "ele");
				floor1->arrOffice(25, 16, 7, 3, "���");
				floor1->arrOffice(34, 14, 10, 5, "ȭ���");
				floor1->arrOffice(5, 22, 35, 3, "������ǽ���");
				floor1->gotoxy(0, 27);
				printf("Ư¡\n");
				printf("����� ������, �������� �ַ� �ִ�.\n\n");
				break;
			default:
				printf("�� ���� ���� ���� ��ȹ�� �����ϴ�.\n");
				break;
			}
			printf("�ǹ� ������ ���� �ͽ��ϱ�?(����:0)");
			scanf("%d", &floor);
		}
	}
	if (strcmp(bName, "������") == 0) {
		printf("�ǹ� ������ ���� �ͽ��ϱ�? (1~9) (����:0)");
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
				floor1->lineGroup(68, 25);
				floor1->arrOffice(5, 10, 15, 5, "102ȣ");
				floor1->arrOffice(5, 16, 15, 5, "101ȣ");
				floor1->arrOffice(23, 11, 13, 3, "�ǽ���2");
				floor1->arrOffice(38, 7, 5, 3, "��ȭ");
				floor1->arrOffice(45, 7, 5, 3, "��ȭ");
				floor1->arrOffice(38, 12, 5, 5, "ele");
				floor1->arrOffice(23, 18, 13, 3, "�κ�");
				floor1->arrOffice(38, 18, 10, 3, "�Ա�");
				floor1->arrOffice(52, 18, 13, 3, "����");
				floor1->arrOffice(52, 1, 13, 7, "�ǽ���1");
				floor1->arrOffice(52, 9, 13, 7, "�ڵ���");
				floor1->gotoxy(0, 26);
				printf("Ư¡\n");
				printf("�������ǽ��� ����.\n");
				printf("�κ� �д�.\n");
				printf("��ȭ >> ���� ȭ��� ��ȭ >> ����ȭ���\n\n");
				break;
			case 2:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(68, 25);
				floor1->arrOffice(5, 7, 15, 4, "202ȣ");
				floor1->arrOffice(5, 12, 15, 4, "205ȣ");
				floor1->arrOffice(5, 18, 10, 3, "206ȣ");
				floor1->arrOffice(18, 18, 10, 3, "204ȣ");
				floor1->arrOffice(40, 18, 15, 3, "203ȣ");
				floor1->arrOffice(40, 12, 5, 3, "ele");
				floor1->arrOffice(47, 12, 10, 5, "ȭ���");
				floor1->arrOffice(59, 12, 7, 5, "�κ�");
				floor1->arrOffice(23, 3, 12, 6, "ŷ����");
				floor1->arrOffice(37, 5, 10, 3, "207ȣ");
				floor1->gotoxy(0, 26);
				printf("Ư¡\n");
				printf("�κ� �ִ�.\n");
				printf("����� �繰���� �ִ�..\n");
				break;
			case 3:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(75, 25);
				floor1->arrOffice(5, 1, 13, 3, "�ǽ���4");
				floor1->arrOffice(5, 5, 13, 5, "�ǽ���3");
				floor1->arrOffice(5, 11, 13, 5, "�ǽ���2");
				floor1->arrOffice(5, 17, 13, 5, "�ǽ���1");
				floor1->arrOffice(23, 3, 13, 5, "����");
				floor1->arrOffice(28, 6, 0, 0, "���");
				floor1->arrOffice(28, 10, 13, 6, "�л�ȸ��");
				floor1->arrOffice(47, 10, 7, 3, "���");
				floor1->arrOffice(28, 18, 13, 3, "306ȣ");
				floor1->arrOffice(43, 18, 5, 3, "ele");
				floor1->arrOffice(50, 18, 7, 6, "ȭ���");
				floor1->arrOffice(59, 18, 7, 6, "�κ�");
				floor1->gotoxy(0, 26);
				printf("Ư¡\n");
				printf("����Ʈ ���� �����а� �ǽ���, �л�ȸ��, �繰���� �ִ�.\n\n");
				break;
			case 4:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(65, 22);
				floor1->arrOffice(5, 1, 10, 3, "405ȣ");
				floor1->arrOffice(5, 10, 15, 3, "����ܽ�");
				floor1->arrOffice(27, 10, 13, 3, "�ް���");
				floor1->arrOffice(5, 16, 10, 5, "�а�");
				floor1->arrOffice(10, 19, 0, 0, "�繫��");
				floor1->arrOffice(22, 16, 5, 3, "ele");
				floor1->arrOffice(29, 16, 13, 4, "ȭ���");
				floor1->arrOffice(19, 1, 10, 3, "406ȣ");
				floor1->arrOffice(32, 1, 10, 3, "407ȣ");
				floor1->arrOffice(45, 1, 10, 3, "408ȣ");
				floor1->arrOffice(45, 5, 10, 3, "���");
				floor1->gotoxy(0, 23);
				printf("Ư¡\n");
				printf("����Ʈ ���� �����а� ����, �а� �繫���� �ִ�.\n\n");
				break;
			case 5:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(65, 17);
				floor1->arrOffice(5, 1, 15, 3, "������");
				floor1->arrOffice(5, 6, 15, 3, "502ȣ");
				floor1->arrOffice(23, 6, 10, 3, "������");
				floor1->arrOffice(23, 1, 10, 3, "�ǽ���");
				floor1->arrOffice(37, 1, 10, 3, "507ȣ");
				floor1->arrOffice(36, 6, 7, 3, "ele");
				floor1->arrOffice(49, 6, 13, 3, "ȭ���");
				floor1->arrOffice(50, 1, 10, 3, "508ȣ");
				floor1->arrOffice(5, 12, 40, 3, "������");
				floor1->gotoxy(0, 18);
				printf("Ư¡\n");
				printf("����Ʈ ���� �к� ���� ���ǽ��� ����.\n\n");
				break;
			case 6:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(77, 17);
				floor1->arrOffice(5, 1, 15, 14, "������");
				floor1->arrOffice(28, 5, 10, 2, "616ȣ");
				floor1->arrOffice(28, 9, 10, 2, "615ȣ");
				floor1->arrOffice(40, 7, 10, 2, "617ȣ");
				floor1->arrOffice(53, 7, 7, 2, "ele");
				floor1->arrOffice(62, 7, 12, 3, "ȭ���");
				floor1->arrOffice(28, 1, 30, 3, "������");
				floor1->arrOffice(28, 13, 35, 3, "������");
				floor1->gotoxy(0, 18);
				break;
			case 7:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(77, 17);
				floor1->arrOffice(5, 1, 15, 14, "������");
				floor1->arrOffice(28, 5, 10, 2, "716ȣ");
				floor1->arrOffice(28, 9, 10, 2, "715ȣ");
				floor1->arrOffice(40, 7, 10, 2, "717ȣ");
				floor1->arrOffice(53, 7, 7, 2, "ele");
				floor1->arrOffice(62, 7, 12, 3, "ȭ���");
				floor1->arrOffice(28, 1, 30, 3, "������");
				floor1->arrOffice(28, 13, 35, 3, "������");
				floor1->gotoxy(0, 18);
				break;
			case 8:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(77, 17);
				floor1->arrOffice(5, 1, 15, 14, "������");
				floor1->arrOffice(28, 5, 10, 2, "816ȣ");
				floor1->arrOffice(28, 9, 10, 2, "815ȣ");
				floor1->arrOffice(40, 7, 10, 2, "817ȣ");
				floor1->arrOffice(53, 7, 7, 2, "ele");
				floor1->arrOffice(62, 7, 12, 3, "ȭ���");
				floor1->arrOffice(28, 1, 30, 3, "������");
				floor1->arrOffice(28, 13, 35, 3, "������");
				floor1->gotoxy(0, 18);
				break;
			case 9:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(77, 17);
				floor1->arrOffice(5, 1, 15, 14, "������");
				floor1->arrOffice(28, 5, 10, 2, "916ȣ");
				floor1->arrOffice(28, 9, 10, 2, "915ȣ");
				floor1->arrOffice(40, 7, 10, 2, "917ȣ");
				floor1->arrOffice(53, 7, 7, 2, "ele");
				floor1->arrOffice(62, 7, 12, 3, "ȭ���");
				floor1->arrOffice(28, 1, 30, 3, "������");
				floor1->arrOffice(28, 13, 35, 3, "������");
				floor1->gotoxy(0, 18);
				break;
			default:
				printf("�� ���� ���� ���� ��ȹ�� �����ϴ�.\n");
				break;
			}
			printf("�ǹ� ������ ���� �ͽ��ϱ�?(����:0)");
			scanf("%d", &floor);
		}
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
		printf("�ǹ� ������ ���� �ͽ��ϱ�?(-2 ~ 8 (0���ڷΰ���))");
		scanf("%d", &floor);
		struct Floor* floorB2, * floorB1, * floor1, * floor2, * floor3, * floor4, * floor5, * floor6, * floor7, * floor8;
		while (floor != 0) {
			switch (floor) {
			case -2:
				floorB2 = (struct Floor*)malloc(sizeof(struct Floor));
				floorB2->clear = clear;
				floorB2->lineGroup = lineGroup;
				floorB2->arrOffice = arrOffice;
				floorB2->gotoxy = gotoxy;
				floorB2->clear();
				floorB2->lineGroup(85, 26);
				floorB2->arrOffice(1, 1, 14, 4, "��ȭ��");
				floorB2->arrOffice(8, 4, 0, 0, "�ްԽ�");
				floorB2->arrOffice(1, 6, 10, 4, "B203");
				floorB2->arrOffice(5, 9, 0, 0, "~B207");
				
				floorB2->arrOffice(1, 15, 10, 4, "B218");
				floorB2->arrOffice(5, 18, 0, 0, "~B216");

				floorB2->arrOffice(17, 1, 7, 4, "���");
				floorB2->arrOffice(13, 21, 20, 4, "B215~B214");


				floorB2->arrOffice(27,1,20,4,"B201~B202");
				floorB2->arrOffice(35, 21, 10, 4, "B212");

				floorB2->arrOffice(38,15,10,4,"B210");
				floorB2->arrOffice(43,18,0,0,"B209");

				floorB2->arrOffice(49, 1, 25, 4, "B222-1~B222-2");
				floorB2->arrOffice(49, 9, 9, 4, "B211");

				floorB2->arrOffice(77,1,7,4,"���");

				floorB2->arrOffice(74,9,10,4,"ȭ���");

				floorB2->gotoxy(0,27);
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
				floorB1->lineGroup(70, 20);
				floorB1->arrOffice(5, 1, 7, 4, "���");
				floorB1->arrOffice(1, 6, 10, 4, "B110");
				floorB1->arrOffice(1, 11, 12, 4, "B111");
				floorB1->arrOffice(6, 14, 0, 0, "/B111-2");

				floorB1->arrOffice(15, 1, 11, 4, "����");
				floorB1->arrOffice(19, 4, 0, 0, "Ż�ǽ�");

				floorB1->arrOffice(27, 1, 11, 4, "����");
				floorB1->arrOffice(31, 4, 0, 0, "Ż�ǽ�");
				floorB1->arrOffice(39, 1, 13, 4, "B107");
				floorB1->arrOffice(44, 4, 0, 0, "~B101");
				floorB1->arrOffice(60, 1, 7, 4, "���");

				floorB1->arrOffice(60, 10, 9, 4, "B119");

				floorB1->arrOffice(20, 15, 11, 4, "B116-3");
				floorB1->arrOffice(35, 15, 11, 4, "ȭ���");

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
				floor1->arrOffice(9,1,11,4,"ele");
				floor1->arrOffice(1, 15, 10, 4, "�ϳ�");

				floor1->arrOffice(22, 3, 10, 2, "102");
				floor1->arrOffice(13, 15, 7, 4, "�Ա�");

				floor1->arrOffice(23, 6, 20, 4, "103~105");
				floor1->arrOffice(56, 6, 7, 4, "���");
				floor1->arrOffice(59, 11, 10, 4, "107");

				floor1->arrOffice(34, 15, 10, 4, "110");
				floor1->arrOffice(38, 18, 0, 0, "~108");

				floor1->gotoxy(71,0);
				floor1->lineGroup(35, 25);
				floor1->arrOffice(85,1,7,4,"�Ա�");
				floor1->arrOffice(72, 6, 10, 4, "111");
				floor1->arrOffice(72, 11, 10, 4, "111-1");
				floor1->arrOffice(72, 18, 10, 4, "ȭ���");

				floor1->arrOffice(94, 8, 10, 8, "121");
				floor1->arrOffice(98, 13, 0, 0, "~118");

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
				floor2->arrOffice(11, 1, 10, 4, "ȭ���");
				floor2->arrOffice(24, 1, 20, 4, "202~204");
				
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
				floor3->arrOffice(1, 6, 10, 4, "��ȭ");
				floor3->arrOffice(6, 9, 0, 0, "â��");
				floor3->arrOffice(5, 13, 20, 4, "301~303");
				floor3->arrOffice(12, 1, 10, 4, "ȭ���");

				floor3->arrOffice(25, 1, 20, 4, "304~306");
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
				floor4->lineGroup(55, 15);
				floor4->arrOffice(1, 1, 7, 4, "���");			
				floor4->arrOffice(5, 10, 10, 4, "401");
				floor4->arrOffice(11, 1, 10, 4, "ȭ���");
				floor4->arrOffice(16, 10, 10, 4, "402");
				
				floor4->arrOffice(24, 1, 20, 4, "404~408");
				
				floor4->arrOffice(46, 1, 7, 4, "���");
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
				floor5->arrOffice(11, 1, 10, 4, "ȭ���");
				floor5->arrOffice(5, 10, 10, 4, "501");
				floor5->arrOffice(17, 10, 10, 4, "502-1");
				floor5->arrOffice(29, 10, 10, 4, "502");
				floor5->arrOffice(24, 1, 20, 4, "504~505");
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
			printf("�ǹ� ������ ���� �ͽ��ϱ�?(-2 ~ 8 (0���ڷΰ���))");
			scanf("%d", &floor);
		}
	}
	if (!strcmp(bName, "���ع�ȭ������")) {
		/*���ǹ��� ���� ���� �����ֱ�*/
		/*�� �ǹ� Ư�� ����ϱ�*/
		printf("�ǹ� ������ ���� �ͽ��ϱ�?(-1(0���ڷΰ���))");
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
			printf("�ǹ� ������ ���� �ͽ��ϱ�?(-1(0���ڷΰ���))");
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
		printf("�ǹ� ������ ���� �ͽ��ϱ�?(1 ~ 5 (0���ڷΰ���))");
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
				floor1->lineGroup(80, 28);
				floor1->arrOffice(1, 1, 11, 10, "113ȣ");
				floor1->arrOffice(5, 7, 0, 0, "~107ȣ");


				floor1->arrOffice(20, 4, 13, 4, "ȭ���");
				floor1->arrOffice(20, 16, 13, 4, "���");

				floor1->arrOffice(38, 6, 15, 4, "ele");
				floor1->arrOffice(36, 14, 13, 6, "101ȣ");
				floor1->arrOffice(42, 18, 0, 0, "102ȣ");
				floor1->arrOffice(36, 23, 15, 4, "��ȭ��");
				floor1->arrOffice(43, 26, 0, 0, "����");

				floor1->arrOffice(53, 15, 13, 4, "���");

				floor1->arrOffice(70, 15, 9, 4, "�Ա�");


				floor1->gotoxy(0, 29);
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
				floor2->lineGroup(90, 28);
				floor2->arrOffice(1, 1, 10, 4, "214");
				floor2->arrOffice(1, 7, 10, 4, "212");
				floor2->arrOffice(6, 10, 0, 0, "211");
				floor2->arrOffice(1, 15, 10, 4, "207");
				floor2->arrOffice(5, 18, 0, 0, "~203");
				floor2->arrOffice(1, 23, 10, 4, "CU");

				floor2->arrOffice(14, 3, 10, 4, "216");
				floor2->arrOffice(14, 10, 10, 4, "ȭ���");
				floor2->arrOffice(14, 20, 10, 4, "201");

				floor2->arrOffice(26, 3, 10, 4, "232");
				floor2->arrOffice(26, 20, 7, 4, "���");

				floor2->arrOffice(40, 3, 10, 4, "233");
				floor2->arrOffice(40, 15, 11, 4, "ele");
				floor2->arrOffice(40, 23, 10, 4, "�Ա�");

				floor2->arrOffice(54, 20, 7, 4, "���");

				floor2->arrOffice(65, 4, 10, 4, "217");
				floor2->arrOffice(65, 12, 10, 4, "231");
				floor2->arrOffice(65, 18, 10, 4, "230");

				floor2->arrOffice(79, 1, 10, 4, "218");
				floor2->arrOffice(84, 4, 0, 0, "219");
				floor2->arrOffice(79, 7, 10, 4, "221");
				floor2->arrOffice(83, 10, 0, 0, "~225");
				floor2->arrOffice(79, 13, 10, 4, "226");
				floor2->arrOffice(81, 16, 0, 0, "(4�г�)");
				floor2->arrOffice(79, 18, 10, 4, "226");
				floor2->arrOffice(81, 21, 0, 0, "(3�г�)");
				floor2->arrOffice(79, 23, 10, 4, "227");
				floor2->arrOffice(83, 26, 0, 0, "~229");
				
				floor2->gotoxy(0, 29);
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
				floor3->lineGroup(84, 28);
				floor3->arrOffice(1, 1, 10, 20, "315");
				floor3->arrOffice(5, 12, 0, 0, "~302");

				floor3->arrOffice(18, 2, 10, 4, "316");
				floor3->arrOffice(18, 8, 10, 4, "ȭ���");
				floor3->arrOffice(26, 17, 7, 4, "���");
				floor3->arrOffice(18, 23, 10, 4, "301");
				
				floor3->arrOffice(40, 15, 11, 4, "ele");

				floor3->arrOffice(56, 2, 10, 4, "317");
				floor3->arrOffice(54, 17, 7, 4, "���");
				floor3->arrOffice(56, 23, 10, 4, "326");
				floor3->arrOffice(61, 26, 0, 0, "325");

				floor3->arrOffice(73, 1, 10, 20, "318");
				floor3->arrOffice(77, 12, 0, 0, "~324");


				floor3->gotoxy(0,29);
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
				floor4->lineGroup(89, 28);
				floor4->arrOffice(1, 1, 10, 20, "406");
				floor4->arrOffice(5, 12, 0, 0, "~402");

				floor4->arrOffice(15, 1, 20, 4, "407~408");
				floor4->arrOffice(15, 6, 10, 4, "ȭ���");
				floor4->arrOffice(17, 15, 7, 4, "���");
				floor4->arrOffice(15, 21, 10, 4, "401");

				floor4->arrOffice(29, 6, 10, 4, "�ްԼ�");

				floor4->arrOffice(42, 1, 20, 4, "409~410");
				floor4->arrOffice(42, 12, 11, 4, "ele");

				floor4->arrOffice(65, 6, 10, 4, "ȭ���");
				floor4->arrOffice(67, 15, 7, 4, "���");
				floor4->arrOffice(65, 21, 10, 6, "419");
				floor4->arrOffice(69, 25, 0, 0, "~418");

				floor4->arrOffice(77, 1, 10, 8, "411");
				floor4->arrOffice(81, 6, 0, 0, "~413");
				floor4->arrOffice(77, 11, 10, 8, "415");
				floor4->arrOffice(81, 16, 0, 0, "~417");

				floor4->gotoxy(0, 29);
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
				floor5->lineGroup(77, 32);
				floor5->arrOffice(1, 1, 10, 24, "517");
				floor5->arrOffice(5, 14, 0, 0, "~502");

				floor5->arrOffice(13, 2, 10, 4, "518");
				floor5->arrOffice(13, 10, 9, 4, "ȭ���");
				floor5->arrOffice(18, 20, 7, 4, "���");
				floor5->arrOffice(13, 26, 10, 4, "501");

				floor5->arrOffice(25, 7, 10, 4, "519");
				floor5->arrOffice(29, 10, 0, 0, "~520");

				floor5->arrOffice(32, 14, 11, 4, "ele");

				floor5->arrOffice(38, 7, 10, 4, "522");
				floor5->arrOffice(42, 10, 0, 0, "~521");

				floor5->arrOffice(49, 2, 10, 4, "523");
				floor5->arrOffice(49, 20, 7, 4, "���");

				floor5->arrOffice(52, 26, 10, 4, "540");
				floor5->arrOffice(56, 29, 0, 0, "~539");

				floor5->arrOffice(66, 1, 10, 24, "524");
				floor5->arrOffice(70, 14, 0, 0, "~538");


				floor5->gotoxy(0, 33);
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
			printf("�ǹ� ������ ���� �ͽ��ϱ�?(1 ~ 5 (0���ڷΰ���))");
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
		printf("�ǹ� ������ ���� �ͽ��ϱ�?(-3 ~ 7 (0���ڷΰ���))");
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
				floorB3->arrOffice(25, 12, 0, 0, "����������");

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
				floorB2->arrOffice(25, 12, 0, 0, "����������");

				floorB2->gotoxy(0, 26);

				break;
			case -1:
				floorB1 = (struct Floor*)malloc(sizeof(struct Floor));
				floorB1->clear = clear;
				floorB1->lineGroup = lineGroup;
				floorB1->arrOffice = arrOffice;
				floorB1->gotoxy = gotoxy;
				floorB1->clear();
				floorB1->lineGroup(65, 26);
				floorB1->arrOffice(20, 1, 20, 4, "B109~B105");

				floorB1->arrOffice(9, 6, 25, 4, "B115~B110");
				
				floorB1->arrOffice(15, 11, 20, 4, "B101~B104");
				
				floorB1->arrOffice(54, 9, 10, 4, "ȭ���");

				floorB1->arrOffice(11, 16, 7, 4, "���");
				floorB1->arrOffice(44, 16, 10, 4, "���");

				floorB1->arrOffice(1, 21, 10, 4, "�Ա�");

				floorB1->gotoxy(0, 27);
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
				floor1->lineGroup(76, 25);
				floor1->arrOffice(1, 1, 10, 18, "104");
				floor1->arrOffice(5, 11, 0, 0, "~112");

				floor1->arrOffice(13, 20, 7, 4, "�Ա�");

				floor1->arrOffice(16, 5, 10, 8, "118");
				floor1->arrOffice(20, 10, 0, 0, "~113");

				floor1->arrOffice(16, 15, 7, 4, "���");

				floor1->arrOffice(28, 4, 11, 4, "ele");
				floor1->arrOffice(28, 10, 7, 4, "���");

				floor1->arrOffice(40, 2, 10, 4, "ȭ���");

				floor1->arrOffice(40, 20, 8, 4, "�Ա�");

				floor1->arrOffice(52, 4, 10, 4, "103");

				floor1->arrOffice(65, 4, 10, 4, "102");
				floor1->arrOffice(65, 9, 10, 4, "101");


				floor1->gotoxy(0, 26);
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
				floor2->lineGroup(55, 25);
				floor2->arrOffice(1, 1, 10, 20, "205");
				floor2->arrOffice(5, 12, 0, 0, "~216");

				floor2->arrOffice(13, 7, 10, 8, "225");
				floor2->arrOffice(17, 12, 0, 0, "~220");
				floor2->arrOffice(15, 16, 7, 2, "���");
				floor2->arrOffice(13, 19, 10, 4, "219");
				floor2->arrOffice(18, 22, 0, 0, "~217");

				floor2->arrOffice(24, 12, 10, 4, "ele");
				floor2->arrOffice(26, 18, 7, 4, "���");

				floor2->arrOffice(22, 1, 10, 4, "ȭ���");

				floor2->arrOffice(33, 1, 10, 4, "204");
				floor2->arrOffice(33, 6, 10, 4, "201");

				floor2->arrOffice(44, 1, 10, 4, "203");
				floor2->arrOffice(44, 6, 10, 4, "202");


				floor2->gotoxy(0, 26);
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
				floor3->lineGroup(53, 29);
				floor3->arrOffice(3, 1, 10, 4, "305");
				floor3->arrOffice(3, 12, 10, 14, "306");
				floor3->arrOffice(7, 20, 0, 0, "~310");

				floor3->arrOffice(20, 1, 10, 4, "ȭ���");
				floor3->arrOffice(20, 12, 11, 4, "ele");
				floor3->arrOffice(20, 18, 7, 4, "���");
				floor3->arrOffice(14, 24, 7, 4, "���");

				floor3->arrOffice(31, 1, 10, 4, "304");
				floor3->arrOffice(31, 6, 10, 4, "301");

				floor3->arrOffice(42, 1, 10, 4, "303");
				floor3->arrOffice(42, 6, 10, 4, "302");

				floor3->gotoxy(0, 30);
				printf("301~305���ǽ�\t306�ްԽ�\t307~310���ǽ�\n");
				break;
			case 4:
				floor4 = (struct Floor*)malloc(sizeof(struct Floor));
				floor4->clear = clear;
				floor4->lineGroup = lineGroup;
				floor4->arrOffice = arrOffice;
				floor4->gotoxy = gotoxy;
				floor4->clear();
				floor4->lineGroup(56, 31);
				floor4->arrOffice(3, 1, 10, 16, "405");
				floor4->arrOffice(7, 10, 0, 0, "~409");
				floor4->arrOffice(1, 26, 10, 4, "410");

				floor4->arrOffice(23, 1, 10, 4, "ȭ���");
				floor4->arrOffice(17, 9, 11, 4, "ele");
				floor4->arrOffice(20, 14, 7, 4, "���");
				floor4->arrOffice(12, 20, 7, 4, "���");

				floor4->arrOffice(34, 1, 10, 4, "404");
				floor4->arrOffice(34, 8, 10, 4, "401");

				floor4->arrOffice(45, 1, 10, 4, "403");
				floor4->arrOffice(45, 8, 10, 4, "402");

				floor4->gotoxy(0, 32);
				printf("401~405���ǽ�\t406�ްԽ�\t407~410���ǽ�\n");
				break;
			case 5:
				floor5 = (struct Floor*)malloc(sizeof(struct Floor));
				floor5->clear = clear;
				floor5->lineGroup = lineGroup;
				floor5->arrOffice = arrOffice;
				floor5->gotoxy = gotoxy;
				floor5->clear();
				floor5->lineGroup(85, 30);
				floor5->arrOffice(1, 1, 10, 26, "507");
				floor5->arrOffice(5, 15, 0, 0, "~519");

				floor5->arrOffice(13, 1, 10, 2, "506");
				floor5->arrOffice(13, 4, 10, 20, "529");
				floor5->arrOffice(17, 15, 0, 0, "~520");

				floor5->arrOffice(13, 25, 11, 4, "����");
				floor5->arrOffice(17, 28, 0, 0, "������");

				floor5->arrOffice(25, 1, 17, 4, "�޸�����");
				floor5->arrOffice(33, 4, 0, 0, "������");
				floor5->arrOffice(26, 16, 7, 4, "���");

				floor5->arrOffice(45, 1, 11, 4, "ȭ���");
			
				floor5->arrOffice(51, 10, 11, 4, "ele");
				floor5->arrOffice(51, 15, 7, 4, "���");

				floor5->arrOffice(63, 1, 10, 4, "504");
				floor5->arrOffice(63, 6, 10, 4, "501");

				floor5->arrOffice(74, 1, 10, 4, "503");
				floor5->arrOffice(74, 6, 10, 4, "502");

				floor5->gotoxy(0, 31);
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
				floor6->lineGroup(79, 32);
				floor6->arrOffice(1, 1, 10, 20, "614");
				floor6->arrOffice(5, 12, 0, 0, "~625");				
			
				floor6->arrOffice(12, 29, 20, 2, "626~628");
				
				floor6->arrOffice(13, 1, 18, 2, "613~612");
				floor6->arrOffice(15, 5, 10, 14, "635");
				floor6->arrOffice(19, 13, 0, 0, "~630");
				floor6->arrOffice(18, 22, 10, 2, "���");
				floor6->arrOffice(15, 25, 10, 2, "629");
				
				floor6->arrOffice(34, 1, 10, 4, "ȭ���");
			
				floor6->arrOffice(37, 7, 11, 4, "ele");
				floor6->arrOffice(38, 13, 8, 4, "���");

				floor6->arrOffice(47, 1, 30, 4, "611~606");
				
				floor6->arrOffice(58, 7, 20, 4, "601~605");
				
				floor6->gotoxy(0, 33);
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
				floor7->lineGroup(79, 33);
				floor7->arrOffice(1, 4, 10, 20, "714");
				floor7->arrOffice(5, 15, 0, 0, "~723");
				floor7->arrOffice(1, 30, 20, 2, "724~727");


				floor7->arrOffice(13, 1, 18, 2, "713~711");
				floor7->arrOffice(18, 7, 10, 14, "734");
				floor7->arrOffice(22, 15, 0, 0, "~729");
				floor7->arrOffice(22, 23, 10, 2, "���");
				floor7->arrOffice(22, 26, 10, 2, "728");

				floor7->arrOffice(37, 7, 11, 4, "ele");
				floor7->arrOffice(38, 13, 8, 4, "���");

				floor7->arrOffice(44, 1, 11, 4, "ȭ���");

				floor7->arrOffice(58, 1, 20, 4, "710~706");
				floor7->arrOffice(58, 7, 20, 4, "701~705");

				floor7->gotoxy(0, 34);
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
			printf("�ǹ� ������ ���� �ͽ��ϱ�?(-3 ~ 7 (0���ڷΰ���))");
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