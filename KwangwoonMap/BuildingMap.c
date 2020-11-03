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
	COORD pos = { x,y }; //x, y 좌표 설정
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos); //커서 설정
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
//건물 바닥 크기
void lineGroup(int x, int y) {
	line(0, y);
	line(x, 0);
	line(0, -y+1);
	line(-x, 0);
}
//각 층의 사물실
void arrOffice(int a, int b, int c, int d, char name[]) {
	gotoxy(a, b);
	printBuilding(c,d,name);
}
void clear() {
	system("cls");
	gotoxy(0, 0);
}
void fullMap() {
	printf("광운대 전체 지도");
}
void rightBuilding() {
	printf(" 광운대 오른쪽 지도 입니다.\n\n");
	printf("          *--------------*");   printf("\t*----------*");		printf("\t     *-------*\n");
	printf("          |\t\t |");            printf("\t|\t   |");		printf("\t     |\t     |\n");
	printf("          |   화도관     |");   printf("\t|노천극장  |");		printf("\t     | 새빛관|\n");
	printf("          |\t\t |");            printf("\t|\t   |");		printf("\t     |\t     |\n");
	printf("          *--------------*");	printf("\t*----------*");     printf("\t     *-------*\n");

	printf("*---------------*\n");
	printf("|\t\t|\n");
	printf("| 80주념 기념관 |");            printf("          *-------*");                                printf("\t\t\t*--------*\n");
	printf("|\t\t|");                       printf("          |\t   |");      printf("*-------*");        printf("\t\t|\t |\n");
	printf("|\t\t|");                       printf("          | 비마관|");    printf("| 다산재|");        printf("\t\t| 참빛관 |\n");
	printf("*---------------*");            printf("          |\t   |");      printf("*-------*");        printf("\t\t|\t |\n");
	printf("\t\t\t   *-------*");                                 printf("\t\t\t*--------*\n\n");
	printf("*---------------*\n");
	printf("|\t\t|");                                             printf("\t\t\t*-------*\n");
	printf("| 복지관        |");                                  printf("\t\t\t|\t|\n");
	printf("|\t\t|");                                             printf("\t\t\t|옥의관 |\n");
	printf("*---------------*");                                  printf("\t\t\t|\t|\n");
	printf("\t\t\t\t\t*-------*\n\n");
}
void leftBuilding() {
	printf("광운대 왼쪽 지도 입니다.\n\n");
	printf("\t\t\t*-------------------*\n");
	printf("\t\t\t| 인터내셔널 하우스 |\n");
	printf("\t\t\t|\t\t    |\n");
	printf("\t\t\t*-------------------*\n");

	printf("\t\t\t\t\t*----------*\n");
	printf("\t\t\t\t\t|  연촌재  |\n");
	printf("\t\t\t\t\t|\t   |\n");
	printf("\t\t\t\t\t*----------*\n");

	printf("\t\t    *-------------------*\n");
	printf("\t\t    |\t빛솔재\t\t|\n");
	printf("\t\t    |\t\t\t|\n");
	printf("\t\t    *-------------------*\n");

										printf("\t\t\t\t\t\t*---------------*\n");
										printf("\t\t\t\t\t\t| 한울관\t|\n");
	printf("\t\t  *--------------*");	printf("\t\t|\t--------*\n");
	printf("\t\t  |\t\t |");			printf("\t\t|\t|\n");
	printf("\t\t  |\t풋살장\t |");		printf("\t\t|\t|\n");
	printf("\t\t  |\t\t |");			printf("\t\t*-------*\n");
	printf("\t\t  *--------------*");   printf("\t    *----------*\n");
	printf("\t\t  *--------------*");	printf("\t    |아이스링크|\n");
	printf("\t\t  |\t농구장\t |");		printf("\t    *----------*\n");
	printf("\t\t  |\t\t |");					printf("\t\t*-----------------*\n");
	printf("\t\t  *--------------*");			printf("\t\t|\t\t  |\n");
												printf("\t\t\t\t\t\t| 동해문화예술관  |\n");
												printf("\t\t\t\t\t\t|\t\t  |");					printf("*------*\n");
												printf("\t\t\t\t\t\t*-----------------*");		printf("|연구관|\n");
												printf("*---------*");							printf("\t\t\t\t\t\t\t   *------*\n");
	printf("|\t  |\n");
	printf("| 누리관  |\n");
	printf("|\t  |\n");
	printf("*---------*\n\n");

}
void rbuildingName(char *bName) {

	if (strcmp(bName, "비마관")==0) {
		/*각건물의 내부 구조 보여주기*/
		/*각 건물 특색 출력하기*/
		printf("건물 몇층을 보고 싶습니까?(종료:0)");
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
				floor1->arrOffice(50, 1, 10, 10, "계단");
				floor1->arrOffice(30, 1, 18, 6, "인쇄소");
				floor1->arrOffice(2, 10, 25, 6, "교수학습센터");
				floor1->gotoxy(0, 26);
				break;
			default:
				printf("이 층에 대한 구조 계획이 없습니다.\n");
				break;
			}
			printf("건물 몇층을 보고 싶습니까?(종료:0)");
			scanf("%d", &floor);
		}
	}
	if (strcmp(bName, "노천극장")==0) {
		/*각건물의 내부 구조 보여주기*/
		/*각 건물 특색 출력하기*/
		clear();
		lineGroup(60,20);
		arrOffice(2, 2, 15, 15, "축구장");
		arrOffice(20, 4, 15, 10, "농구장");
		gotoxy(0, 26);	
	}
	if (strcmp(bName, "복지관")==0) {
		/*각건물의 내부 구조 보여주기*/
		/*각 건물 특색 출력하기*/
		printf("건물 몇층을 보고 싶습니까?");
		scanf("%d", &floor);
	}
	if (strcmp(bName, "80주년기념관")==0) {
		/*각건물의 내부 구조 보여주기*/
		/*각 건물 특색 출력하기*/
		printf("건물 몇층을 보고 싶습니까?");
		scanf("%d", &floor);
	}
	if (strcmp(bName, "화도관")==0) {
		/*각건물의 내부 구조 보여주기*/
		/*각 건물 특색 출력하기*/
		printf("건물 몇층을 보고 싶습니까?");
		scanf("%d", &floor);
	}
	if (strcmp(bName, "옥의관")==0) {
		/*각건물의 내부 구조 보여주기*/
		/*각 건물 특색 출력하기*/
		printf("건물 몇층을 보고 싶습니까?");
		scanf("%d", &floor);
	}
	if (strcmp(bName, "참빛관")==0) {
		/*각건물의 내부 구조 보여주기*/
		/*각 건물 특색 출력하기*/
		printf("건물 몇층을 보고 싶습니까?");
		scanf("%d", &floor);
	}
	if (strcmp(bName, "새빛관")==0) {
		/*각건물의 내부 구조 보여주기*/
		/*각 건물 특색 출력하기*/
		printf("건물 몇층을 보고 싶습니까?");
		scanf("%d", &floor);
	}
	if (strcmp(bName, "다산재")==0) {
		/*각건물의 내부 구조 보여주기*/
		printf("건물 몇층을 보고 싶습니까?");
		scanf("%d", &floor);
	}
}
void lbuildingName(char *bName) {
	if (!strcmp(bName, "연구관")) {
		/*각건물의 내부 구조 보여주기*/
		/*각 건물 특색 출력하기*/
		printf("건물 몇층을 보고 싶습니까?");
		scanf("%d", &floor);
	}
	if (!strcmp(bName, "동해문화예술관")) {
		/*각건물의 내부 구조 보여주기*/
		/*각 건물 특색 출력하기*/
		printf("건물 몇층을 보고 싶습니까?");
		scanf("%d", &floor);
	}	
	if (!strcmp(bName, "아이스링크")) {
		/*각건물의 내부 구조 보여주기*/
		/*각 건물 특색 출력하기*/
		printf("건물 몇층을 보고 싶습니까?");
		scanf("%d", &floor);
	}
	if (!strcmp(bName, "빛솔재")) {
		/*각건물의 내부 구조 보여주기*/
		/*각 건물 특색 출력하기*/
		printf("건물 몇층을 보고 싶습니까?");
		scanf("%d", &floor);
	}
	if (!strcmp(bName, "누리관")) {
		/*각건물의 내부 구조 보여주기*/
		/*각 건물 특색 출력하기*/
		printf("건물 몇층을 보고 싶습니까?");
		scanf("%d", &floor);
	}
	if (!strcmp(bName, "한천재")) {
		/*각건물의 내부 구조 보여주기*/
		/*각 건물 특색 출력하기*/
		printf("건물 몇층을 보고 싶습니까?");
		scanf("%d", &floor);
	}
	if (!strcmp(bName, "연촌재")) {
		/*각건물의 내부 구조 보여주기*/
		/*각 건물 특색 출력하기*/
		printf("건물 몇층을 보고 싶습니까?");
		scanf("%d", &floor);
	}
	if (!strcmp(bName, "한울관")) {
		/*각건물의 내부 구조 보여주기*/
		/*각 건물 특색 출력하기*/
		printf("건물 몇층을 보고 싶습니까?");
		scanf("%d", &floor);
	}
	if (!strcmp(bName, "인터내셔널 하우스")) {
		/*각건물의 내부 구조 보여주기*/
		/*각 건물 특색 출력하기*/
		printf("건물 몇층을 보고 싶습니까?");
		scanf("%d", &floor);
	}
};