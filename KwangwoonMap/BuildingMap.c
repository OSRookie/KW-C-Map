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

	gotoxy(tmpXY.X +1 , tmpXY.Y + 0.5 * h);
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
	line(0, -y+1);
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
				floorB2->arrOffice(1, 1, 14, 4, "미화원 휴게실");
				floorB2->arrOffice(1, 6, 10, 4, "B203");
				floorB2->arrOffice(1, 11, 10, 2, "B204");
				floorB2->arrOffice(1, 14, 10, 2, "B205");
				floorB2->arrOffice(1, 17, 10, 2, "B206");
				floorB2->arrOffice(1, 23, 10, 4, "B207");
				floorB2->arrOffice(1, 28, 10, 4, "B218");
				floorB2->arrOffice(1, 33, 10, 2, "B217");
				floorB2->arrOffice(1, 36, 10, 2, "B216");

				floorB2->arrOffice(17, 1, 7, 4, "계단");
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
				floorB2->arrOffice(77,1,7,4,"계단");

				floorB2->arrOffice(74,17,10,4,"화장실");

				floorB2->gotoxy(0,41);
				printf("B201강의실\tB202강의실\tB222-1강의실\tB222-2강의실\tB203 정보통신처 USP베터리실\n");
				printf("B204~B206강의실\tB207헬스장\tB218미디어영상학부 티술거림\tB216~B217강의실\n");
				printf("B215애스치앰SDM\tB211(주)티앤씨프로TNCPRO\tB212미화원 휴게실\tB209IDEC실습실\n");
				printf("B210강의실\tB211IDEC행정실\n");
				break;
			case -1:
				floorB1 = (struct Floor*)malloc(sizeof(struct Floor));
				floorB1->clear = clear;
				floorB1->lineGroup = lineGroup;
				floorB1->arrOffice = arrOffice;
				floorB1->gotoxy = gotoxy;
				floorB1->clear();
				floorB1->lineGroup(128, 20);
				floorB1->arrOffice(5, 1, 7, 4, "계단");
				floorB1->arrOffice(1, 6, 10, 4, "B110");
				floorB1->arrOffice(1, 11, 11, 4, "B111/B11-2");
				
				floorB1->arrOffice(15, 1, 11, 4, "여자탈의실");
				floorB1->arrOffice(27, 1, 11, 4, "남자탈의실");
				floorB1->arrOffice(39, 1, 10, 4, "B107");
				floorB1->arrOffice(50, 1, 10, 4, "B106");
				floorB1->arrOffice(61, 1, 10, 4, "B105");
				floorB1->arrOffice(72, 1, 10, 4, "B104");
				floorB1->arrOffice(83, 1, 10, 4, "B103");
				floorB1->arrOffice(94, 1, 10, 4, "B102");
				floorB1->arrOffice(105, 1, 10, 4, "B101");
				floorB1->arrOffice(116, 1, 7, 4, "계단");

				floorB1->arrOffice(118, 10, 9, 4, "B119");

				floorB1->arrOffice(69, 15, 10, 4, "B116-3");
				floorB1->arrOffice(83, 15, 10, 4, "화장실");

				floorB1->gotoxy(0, 21);
				printf("B110생활체육학과 측정실\tB111정보과학교육원학점은행체 상담실 및 입학 홍보실\tB111-2관광경영실습실\n");
				printf("B107스마트홈연구실\tB106악기연습실1\tB105앙상블실2\tB104전자바이오물리학과 공동대학원 연구실\n");
				printf("B102나노계면 연구실\tB101앙상블실1\tB119보급품 관리실\tB116-3기계실\n");
				
				break;

			case 1:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(70, 20);
				floor1->arrOffice(1, 3, 7, 4, "계단");
				floor1->arrOffice(9,1,11,4,"엘리베이터");
				floor1->arrOffice(1, 15, 10, 4, "하나은행");

				floor1->arrOffice(22, 3, 10, 2, "102");
				floor1->arrOffice(13, 15, 7, 4, "입구");

				floor1->arrOffice(23, 6, 10, 4, "103");
				floor1->arrOffice(34, 6, 10, 4, "104");
				floor1->arrOffice(45, 6, 10, 4, "105");
				floor1->arrOffice(56, 6, 7, 4, "계단");
				floor1->arrOffice(59, 11, 10, 4, "107");

				floor1->arrOffice(34, 15, 10, 4, "110");
				floor1->arrOffice(45, 15, 10, 4, "109");
				floor1->arrOffice(56, 16, 10, 3, "108");

				floor1->gotoxy(71,0);
				floor1->lineGroup(35, 25);
				floor1->arrOffice(85,1,7,4,"입구");
				floor1->arrOffice(72, 6, 10, 4, "111");
				floor1->arrOffice(72, 11, 10, 4, "111-1");
				floor1->arrOffice(72, 18, 7, 4, "화장실");

				floor1->arrOffice(94, 8, 10, 2, "121");
				floor1->arrOffice(94, 11, 10, 2, "120");
				floor1->arrOffice(94, 14, 10, 2, "119");
				floor1->arrOffice(94, 17, 10, 2, "118");

				floor1->arrOffice(85, 20, 7, 4, "입구");

				floor1->gotoxy(0,26);
				printf("하나은행(학생증발급)\t102관리실\t103정보통신처 SW개발실\t104정보통신처 정보운영팀\t105정보통신처 처장실\n");
				printf("107정보통신처 통신운영팀\t108컴퓨터강의실\t정보통신처 통신실\t110정보통신처 기기보관실\t111언어교육원 교학팀\n");
				printf("111-1언어교육원 원장실\t118~121강의실\n");

				break;
			case 2:
				floor2 = (struct Floor*)malloc(sizeof(struct Floor));
				floor2->clear = clear;
				floor2->lineGroup = lineGroup;
				floor2->arrOffice = arrOffice;
				floor2->gotoxy = gotoxy;
				floor2->clear();
				floor2->lineGroup(61, 12);
				floor2->arrOffice(1, 1, 7, 4, "계단");
				floor2->arrOffice(5, 7, 10, 4, "201");
				floor2->arrOffice(11, 1, 8, 4, "화장실");
				floor2->arrOffice(20, 1, 10, 4, "202");
				floor2->arrOffice(31, 1, 10, 4, "203");
				floor2->arrOffice(42, 1, 10, 4, "204");
				floor2->arrOffice(50, 6, 10, 4, "205");
				floor2->gotoxy(0,13);
				printf("201~202컴퓨터강의실\t203교환실\t204~205컴퓨터강의실\n");
				break;
			case 3:
				floor3 = (struct Floor*)malloc(sizeof(struct Floor));
				floor3->clear = clear;
				floor3->lineGroup = lineGroup;
				floor3->arrOffice = arrOffice;
				floor3->gotoxy = gotoxy;
				floor3->clear();
				floor3->lineGroup(71, 18);
				floor3->arrOffice(3, 1, 7, 4, "계단");
				floor3->arrOffice(1, 6, 10, 4, "미화창고");
				floor3->arrOffice(5, 13, 10, 4, "301");
				floor3->arrOffice(12, 1, 8, 4, "화장실");
				floor3->arrOffice(16, 13, 10, 4, "302");
				floor3->arrOffice(27, 13, 10, 4, "303");
				floor3->arrOffice(22, 1, 10, 4, "304");
				floor3->arrOffice(33, 1, 10, 4, "305");
				floor3->arrOffice(44, 1, 10, 4, "306");
				floor3->arrOffice(55, 1, 7, 4, "계단");
				floor3->arrOffice(60, 6, 10, 4, "307");
				floor3->gotoxy(0, 19);
				printf("301인제니움학부대학 이종용교수\t302~304컴퓨터강의실\t305정보통신처 실습운영실\t306점보통신처 컴퓨터강의실\t307PC실습실\n");
				break;
			case 4:
				floor4 = (struct Floor*)malloc(sizeof(struct Floor));
				floor4->clear = clear;
				floor4->lineGroup = lineGroup;
				floor4->arrOffice = arrOffice;
				floor4->gotoxy = gotoxy;
				floor4->clear();
				floor4->lineGroup(98, 15);
				floor4->arrOffice(1, 1, 7, 4, "계단");			
				floor4->arrOffice(5, 10, 10, 4, "401");
				floor4->arrOffice(11, 1, 7, 4, "화장실");
				floor4->arrOffice(16, 10, 10, 4, "402");
				
				floor4->arrOffice(22, 1, 10, 4, "404");
				floor4->arrOffice(33, 1, 10, 4, "405");
				floor4->arrOffice(44, 1, 10, 4, "406");
				floor4->arrOffice(55, 1, 10, 4, "407");
				floor4->arrOffice(66, 1, 10, 4, "408");
				
				floor4->arrOffice(80, 1, 7, 4, "계단");
				floor4->gotoxy(0, 17);
				printf("401~402컴퓨터강의실\t404~405강의실\t406정보과학교육원 문석재 교수사무실\t407인제니움학부대학 교수사무실\n");
				printf("408 3D디스플레이연구실\n");
				break;
			case 5:
				floor5 = (struct Floor*)malloc(sizeof(struct Floor));
				floor5->clear = clear;
				floor5->lineGroup = lineGroup;
				floor5->arrOffice = arrOffice;
				floor5->gotoxy = gotoxy;
				floor5->clear();
				floor5->lineGroup(71, 15);
				floor5->arrOffice(1, 1, 7, 4, "계단");
				floor5->arrOffice(11, 1, 7, 4, "화장실");
				floor5->arrOffice(5, 10, 10, 4, "501");
				floor5->arrOffice(17, 10, 10, 4, "502-1");
				floor5->arrOffice(29, 10, 10, 4, "502");
				floor5->arrOffice(23, 1, 10, 4, "504");
				floor5->arrOffice(35, 1, 10, 4, "505");
				floor5->arrOffice(41, 10, 10, 4, "503");
				floor5->arrOffice(60, 6, 10, 4, "506");

				floor5->gotoxy(0,16);
				printf("501교강사실\t502-1/502정보과학교육원 교수사무실(교학팀)\t503정보과학교육원 교수사무실\t504강의실\n");
				printf("505강의실 정보과학교육원\t506강사휴계실\n");
				break;
			case 6:
				floor6 = (struct Floor*)malloc(sizeof(struct Floor));
				floor6->clear = clear;
				floor6->lineGroup = lineGroup;
				floor6->arrOffice = arrOffice;
				floor6->gotoxy = gotoxy;
				floor6->clear();
				floor6->lineGroup(71, 15);
				floor6->arrOffice(1, 1, 7, 4, "계단");
				floor6->arrOffice(11, 1, 7, 4, "화장실");
				floor6->arrOffice(23, 1, 10, 4, "604");
				floor6->arrOffice(34, 1, 10, 4, "605");
				floor6->arrOffice(45, 1, 10, 4, "606");
				floor6->arrOffice(56, 1, 10, 4, "607");
				floor6->arrOffice(17, 10, 10, 4, "601");
				floor6->arrOffice(28, 10, 10, 4, "603");
				floor6->arrOffice(39, 10, 10, 4, "603-1");
				floor6->arrOffice(50, 10, 10, 4, "603-2");

				floor6->gotoxy(0, 16);
				printf("601Smart Home Center\t603~606인재니움학부대학 교수사무실(603-1,603-2보함)\t603-1광운한림원 교수사무실\n");
				break;
			case 7:
				floor7 = (struct Floor*)malloc(sizeof(struct Floor));
				floor7->clear = clear;
				floor7->lineGroup = lineGroup;
				floor7->arrOffice = arrOffice;
				floor7->gotoxy = gotoxy;
				floor7->clear();
				floor7->lineGroup(61, 15);
				floor7->arrOffice(1, 1, 7, 4, "계단");
				floor7->arrOffice(11, 1, 7, 4, "화장실");
				floor7->arrOffice(23, 1, 10, 4, "704");
				floor7->arrOffice(34, 1, 10, 4, "705");
				floor7->arrOffice(6, 10, 10, 4, "701-1");
				floor7->arrOffice(17, 10, 10, 4, "701-2");
				floor7->arrOffice(28, 10, 10, 4, "701");
				floor7->arrOffice(39, 10, 10, 4, "702");
				floor7->arrOffice(50, 10, 10, 4, "703");

				floor7->gotoxy(0, 16);
				printf("701-1강의실\t701-2국제교육원문서고\t701~703강의실\t704Smart H&B Technology Laboratory\t705전자공학과 교수사무실\n");
				break;
			case 8:
				floor8 = (struct Floor*)malloc(sizeof(struct Floor));
				floor8->clear = clear;
				floor8->lineGroup = lineGroup;
				floor8->arrOffice = arrOffice;
				floor8->gotoxy = gotoxy;
				floor8->clear();
				floor8->lineGroup(61, 15);
				floor8->arrOffice(1, 1, 7, 4, "계단");
				floor8->arrOffice(11, 1, 7, 4, "화장실");
				floor8->arrOffice(23, 1, 10, 4, "805");
				floor8->arrOffice(34, 1, 10, 4, "804");
				floor8->arrOffice(6, 10, 10, 4, "801");
				floor8->arrOffice(17, 10, 10, 4, "801-1");
				floor8->arrOffice(28, 10, 10, 4, "802");
				floor8->arrOffice(39, 10, 10, 4, "802-1");
				floor8->arrOffice(50, 10, 10, 4, "803");

				floor8->gotoxy(0, 16);
				printf("801~805강의실(801-1,802-1강의실)\n");
				break;
			default:
				printf("이 층에 대한 구조 계획이 없습니다.\n");
				break;
			}
			printf("\n");
			printf("건물 몇층을 보고 싶습니까?(종료:0)");
			scanf("%d", &floor);
		}
	}
	if (!strcmp(bName, "동해문화예술관")) {
		/*각건물의 내부 구조 보여주기*/
		/*각 건물 특색 출력하기*/
		printf("건물 몇층을 보고 싶습니까?");
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
				floorB1->arrOffice(21, 6, 15, 4, "푸드코트");
				floorB1->arrOffice(5, 15, 10, 4, "계단");
				floorB1->arrOffice(38, 15, 10, 4, "계단");
				
				floorB1->gotoxy(0,21);
				break;
			default:
				printf("이 층에 대한 구조 계획이 없습니다.\n");
				break;
			}
			printf("\n");
			printf("건물 몇층을 보고 싶습니까?(종료:0)");
			scanf("%d", &floor);
		}
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

				floor1->arrOffice(20, 4, 13, 4, "화장실");
				floor1->arrOffice(20, 16, 13, 4, "계단");

				floor1->arrOffice(38, 6, 15, 4, "엘리베이터");
				floor1->arrOffice(36, 14, 13, 4, "101");
				floor1->arrOffice(36, 22, 13, 4, "102");
				floor1->arrOffice(36, 30, 15, 4, "미화원 대기실");

				floor1->arrOffice(53, 15, 13, 4, "계단");

				floor1->arrOffice(70, 15, 9, 4, "입구");


				floor1->gotoxy(0, 38);
				printf("101전산실(방재실)\t102전산실(방재실)\t107/108확군단전용 강의실\n");
				printf("109/110공간컴퓨팅 연구센터\t111실감콘텐츠단말기 기술센터(ITRC)");
				printf("112설계 스튜디오1\t112구조재료보관실\n");
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
				floor2->arrOffice(14, 10, 10, 4, "화장실");
				floor2->arrOffice(14, 35, 10, 4, "201");

				floor2->arrOffice(26, 3, 10, 4, "232");
				floor2->arrOffice(26, 30, 7, 4, "계단");

				floor2->arrOffice(40, 3, 10, 4, "233");
				floor2->arrOffice(40, 25, 11, 4, "엘리베이터");
				floor2->arrOffice(40, 56, 10, 4, "입구");

				floor2->arrOffice(54, 30, 7, 4, "계단");

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
				floor2->arrOffice(79, 36, 10, 4, "226(4학년)");
				floor2->arrOffice(79, 41, 10, 4, "226(3학년)");
				floor2->arrOffice(79, 46, 10, 4, "227");
				floor2->arrOffice(79, 51, 10, 4, "228");
				floor2->arrOffice(79, 56, 10, 4, "229");

				floor2->gotoxy(0, 63);
				printf("214공인회계사반(CPA PREP)\T212공인회계사 학습지원실(CPA PREP Support)\t221공인회계사반 열람실\n");
				printf("207정보과학교육원 교수사무실\t206미디어커뮤니케이션하부레이몬드 광운한림원Roland Attila Csizmazia(콜랜드)\n");
				printf("205상담복지정책대학원/교육대학원 교수사무실\t204정보과학교육원/상담복자정잭대학원 교수사무실\n");
				printf("203국제교육원/글로컬교육센터 브라이언/제프리\t216공인회계사반 열람실\t201관리실\t232예비군연대장실\n");
				printf("233예비군연대\t217제한구역\t231장고\t230휴게실(3학년)\t218선임교관실\t219훈육관실\t221학군단장실\n");
				printf("222행정반\t223자치근무자실\t224샤워실\t225여후보생 내무지도실\t226내무지도실(4학년)\t226내무지도실(3학년)\n");
				printf("227자율학습실\t228휴게실(4학년)\t229체력단련실\n");
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
				floor3->arrOffice(18, 14, 10, 4, "화장실");
				floor3->arrOffice(26, 30, 7, 4, "계단");
				floor3->arrOffice(18, 38, 10, 4, "301");
				
				floor3->arrOffice(40, 25, 11, 4, "엘리베이터");

				floor3->arrOffice(56, 2, 10, 4, "317");
				floor3->arrOffice(54, 30, 7, 4, "계단");
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
				printf("315로봇학부 교수사무실\t314로봇학부 학부장\t313로봇학부 교수사무실\t312로봇학부 연구실\t311유비쿼터스\n");
				printf("310로봇학부 교수사무실\t309제어시스템 연구실\t308로봇학부 교수사무실\t307로봇학부 세미나실\t306로봇학부 연구소\n");
				printf("305로봇학부 교수사무실\t304로봇학부 교수사무실\t303로봇학부 교수사무실\t302로봇학부 교수사무실\n");
				printf("316Wearable Robot 공동연구실\t301로봇학부 교수사무실\t317로봇학부 장비실\t326로봇학부 개방실험실\n");
				printf("324로봇학부학생회실\t318이동로봇 연구실\t319미래로봇 연구실\t320지능로봇시스템 연구실\t321로봇학부사무실\n");
				printf("322로봇학부연구원실\t323산업로봇실험실\t324정보제어기초실험실\n");

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
				floor4->arrOffice(15, 6, 10, 4, "화장실");
				floor4->arrOffice(17, 17, 7, 4, "계단");
				floor4->arrOffice(15, 23, 10, 4, "401");

				floor4->arrOffice(29, 1, 10, 4, "408");
				floor4->arrOffice(29, 8, 10, 6, "휴게소");

				floor4->arrOffice(42, 1, 10, 4, "409");
				floor4->arrOffice(42, 14, 11, 4, "엘리베이터");

				floor4->arrOffice(53, 1, 10, 4, "410");

				floor4->arrOffice(65, 6, 10, 4, "화장실");
				floor4->arrOffice(67, 17, 7, 4, "계단");
				floor4->arrOffice(65, 23, 10, 4, "419");
				floor4->arrOffice(65, 28, 10, 4, "418");

				floor4->arrOffice(77, 1, 10, 4, "411");
				floor4->arrOffice(77, 6, 10, 4, "412");
				floor4->arrOffice(77, 11, 10, 4, "413");
				floor4->arrOffice(77, 17, 10, 4, "415");
				floor4->arrOffice(77, 23, 10, 4, "416");
				floor4->arrOffice(77, 28, 10, 4, "417");

				floor4->gotoxy(0, 35);
				printf("406강의실\t405강의실\t404강의실\t403PC실험실\t402로봇비전지능 연구실\t407세미나실1\t408세미나실2\n");
				printf("409세미나실3\t410세미나실4\t419대학원생 공동연구실\t418여학생 휴게실\t411강의실\t412강의실\t413강의실\n");
				printf("415경영대학부학생회실\t416경영대학학생회실\t417열람실\n");
				
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
				floor5->arrOffice(13, 20, 9, 4, "화장실");
				floor5->arrOffice(18, 33, 7, 4, "계단");
				floor5->arrOffice(13, 41, 10, 4, "501");

				floor5->arrOffice(25, 7, 10, 4, "519");
				floor5->arrOffice(25, 12, 10, 4, "520");

				floor5->arrOffice(32, 27, 11, 4, "엘리베이터");

				floor5->arrOffice(38, 7, 10, 4, "522");
				floor5->arrOffice(38, 12, 10, 4, "521");

				floor5->arrOffice(49, 2, 10, 4, "523");
				floor5->arrOffice(49, 33, 7, 4, "계단");

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
				printf("507~517경영학부교수사무실\t505경영대학세미나실\t504경영학부사무실\t503경영대학교학팀\t502학장실\n");
				printf("518Marketing LAB\t501외래교수실\t519인사-조직-전략 연구실 연구실\t520예비실5\t522MIS\n");
				printf("521경영심리,생산관리 연구실\t523회계재무 연구실\t540도시계획부동산학과대학원연구실\n");
				printf("539경영학부 교수사무실\t524~531경영학부 교수사무실\t532로봇학부 교수사무실\t533경영학부 교수사무실/학부장\n");
				printf("534~536경영학부 교수사무실\t537경영학부 특성화실\t538~539경영학부 교수사무실\t도시계획부동산학과대학원연구실\n");
				break;
			default:
				printf("이 층에 대한 구조 계획이 없습니다.\n");
				break;
			}

			printf("\n");
			printf("건물 몇층을 보고 싶습니까?(종료:0)");
			scanf("%d", &floor);
		}
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
				floorB3->arrOffice(25, 12, 10, 10, "지하주차장");

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
				floorB2->arrOffice(25, 12, 10, 10, "지하주차장");

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
				
				floorB1->arrOffice(80, 9, 10, 4, "화장실");

				floorB1->arrOffice(11, 20, 7, 4, "계단");
				floorB1->arrOffice(64, 20, 10, 4, "계단");

				floorB1->arrOffice(1, 26, 10, 4, "입구");

				floorB1->gotoxy(0, 32);
				printf("B101~B104강의실\tB105인문사회과학대학 학생회실\tB106자산관리학과 학생회실\tB107정책법학대학 학생회실\tB108법학부 학생회실\n");
				printf("B109미디어영상학부 학생회실\tB110인문사회과학대학 학생회실\tB111국어국문학과 학생회실\tB112영어학과 학생회실\n");
				printf("B113행정학과 학생회실\tB114동북아 문화산업학부 학생회실\tB115국제학부 학생회실\n");
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

				floor1->arrOffice(13, 41, 7, 4, "입구");

				floor1->arrOffice(16, 11, 10, 4, "118");
				floor1->arrOffice(16, 16, 10, 4, "117");
				floor1->arrOffice(16, 21, 10, 4, "115");
				floor1->arrOffice(16, 26, 10, 4, "114");
				floor1->arrOffice(16, 31, 10, 4, "113");

				floor1->arrOffice(16, 36, 7, 4, "계단");

				floor1->arrOffice(28, 9, 11, 4, "엘리베이터");
				floor1->arrOffice(28, 15, 7, 4, "계단");

				floor1->arrOffice(39, 6, 10, 4, "화장실");

				floor1->arrOffice(40, 41, 8, 4, "입구");

				floor1->arrOffice(51, 8, 10, 4, "103");

				floor1->arrOffice(65, 8, 10, 4, "102");
				floor1->arrOffice(65, 26, 10, 4, "101");


				floor1->gotoxy(0, 47);
				printf("101관리실\t102한울K-WORK1\t103열람실\t104정보통신처 컴퓨터강의실\t105산업및조직 심리실험실\t106사회과학대학 특성화실\n");
				printf("107사회과학대학 특성화실\t108행정학과 사무실\t109영어산업학과 사무실 대학특성화 사업단(ckⅡ)\t110국어국문학과 사무실\n");
				printf("111인문사회과학대학 교학팀 정책법학대학 교학팀\t112법학부 특성화실\t113복사실\t114인문사회과학대학 학장실\n");
				printf("115인제니움학부대학 교학팀 글로컬교육센터\t117미디어커뮤케이션학부 학과사무실\t118국제학부사무실 국제협력학부사무실\n");
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
				floor2->arrOffice(15, 25, 7, 2, "계단");
				floor2->arrOffice(13, 28, 10, 2, "219");
				floor2->arrOffice(13, 31, 10, 2, "218");
				floor2->arrOffice(13, 34, 10, 2, "217");

				floor2->arrOffice(24, 16, 10, 4, "엘리베이터");
				floor2->arrOffice(26, 21, 7, 4, "계단");

				floor2->arrOffice(22, 1, 8, 4, "화장실");

				floor2->arrOffice(33, 1, 10, 4, "204");
				floor2->arrOffice(33, 6, 10, 4, "201");

				floor2->arrOffice(44, 1, 10, 4, "203");
				floor2->arrOffice(44, 6, 10, 4, "202");


				floor2->gotoxy(0, 38);
				printf("201~204강의실\t205여학생 휴게실\t206세미나실\t207국제학부 특성화실\t208동북아문화산업학부 특성화실\n");
				printf("209행정학과특성화실\t210영어영문학부\t211국어국문학과 특성화실\t212교육대학원장실\t213지혜의샘 원우회 교육대학원\n");
				printf("214경영대학원 교학팀 교육대학원 교학팀 상담복지정책대학원 교학팀\t215자료실\t216정책법학대학 학장실\n");
				printf("225산업심리학과 사무실\t224인제니움학부대학 학장실\t223국제통상학부 사무실 동북아특상학부 사무실\n");
				printf("222국제통상학부 특성화실\t221자산관리학과 사무실\t220법학과 사무실 법학부 사무실\t219외래교수실\n");
				printf("218광운상담연구소 광운심리상담센터\t217상담복지정책대학 원장실\n");
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

				floor3->arrOffice(20, 1, 10, 4, "화장실");
				floor3->arrOffice(20, 15, 11, 4, "엘리베이터");
				floor3->arrOffice(20, 21, 7, 4, "계단");
				floor3->arrOffice(13, 36, 7, 4, "계단");

				floor3->arrOffice(31, 1, 10, 4, "304");
				floor3->arrOffice(31, 8, 10, 4, "301");

				floor3->arrOffice(42, 1, 10, 4, "303");
				floor3->arrOffice(42, 8, 10, 4, "302");

				floor3->gotoxy(0, 46);
				printf("301~305강의실\t306휴게실\t307~310강의실\n");
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

				floor4->arrOffice(23, 1, 10, 4, "화장실");
				floor4->arrOffice(17, 9, 11, 4, "엘리베이터");
				floor4->arrOffice(20, 14, 7, 4, "계단");
				floor4->arrOffice(12, 30, 7, 4, "계단");

				floor4->arrOffice(34, 1, 10, 4, "404");
				floor4->arrOffice(34, 8, 10, 4, "401");

				floor4->arrOffice(45, 1, 10, 4, "403");
				floor4->arrOffice(45, 8, 10, 4, "402");

				floor4->gotoxy(0, 42);
				printf("401~405강의실\t406휴게실\t407~410강의실\n");
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
				floor5->arrOffice(13, 37, 11, 2, "범죄연구소");

				floor5->arrOffice(24, 1, 17, 4, "휴먼팩터 연구실");
				floor5->arrOffice(24, 25, 7, 4, "계단");

				floor5->arrOffice(42, 1, 8, 4, "화장실");
			
				floor5->arrOffice(51, 10, 11, 4, "엘리베이터");
				floor5->arrOffice(51, 15, 7, 4, "계단");

				floor5->arrOffice(63, 1, 10, 4, "504");
				floor5->arrOffice(63, 6, 10, 4, "501");

				floor5->arrOffice(74, 1, 10, 4, "503");
				floor5->arrOffice(74, 6, 10, 4, "502");

				floor5->gotoxy(0, 41);
				printf("501한울K-WORK2\t502~504강의실\t506교육대학원 교수사무실 평생배움연구소\t507교직과정 운영실\t508~509법학부 교수사무실\n");
				printf("510국제학부 교수사무실\t511~514/517/519/인제니움학부대학 교수사무실\t516국어국문학과 교수사무실\t518행정학과 교수사무실\n");
				printf("529세미나실2\t525~528/520인제니움학부대학 교수사무실\t524행정학과 교수사무실\t523행정학과 교수사무실\t522인제니움학부 세미나실\n");
				printf("521행정학과 교수사무실(학과장실)\n");
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
				floor6->arrOffice(18, 28, 10, 2, "계단");
				floor6->arrOffice(15, 31, 10, 2, "629");
				floor6->arrOffice(34, 34, 10, 2, "628");

				floor6->arrOffice(24, 1, 10, 2, "612");

				floor6->arrOffice(35, 1, 8, 4, "화장실");
			
				floor6->arrOffice(37, 7, 11, 4, "엘리베이터");
				floor6->arrOffice(38, 13, 8, 4, "계단");

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
				printf("601~603동북아문화산업학부 교수사무실\t604국제통상학부 교수사무실\t605경영학부 교수사무실\t606~607/609~610법학부\t608한울K-WORK3\n");
				printf("611건설법무대학원 원장실\t612건설법무연구센터\t613건설법무대학원 교학팀\t614산업심리학과 교수사무실\t615법학부 교수사무실\n");
				printf("616~618국제통상학부 교수사무실\t619~620(학부장)법학부 교수사무실\t621~623동북아문화산업학부 교수사무실\t624~628산업심리학과 교수사무실\n");
				printf("629세미나실2\t630동북아문화산업학부 교수사무실\t631국제학부 교수사무실\t632법학부 교수사무실\t633국제학부 교수사무실\n");
				printf("634~635국제통상학부 교수사무실\n");
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
				floor7->arrOffice(22, 28, 10, 2, "계단");
				floor7->arrOffice(22, 31, 10, 2, "728");

				floor7->arrOffice(24, 1, 10, 2, "712");

				floor7->arrOffice(35, 1, 10, 2, "711");

				floor7->arrOffice(37, 7, 11, 4, "엘리베이터");
				floor7->arrOffice(38, 13, 8, 4, "계단");

				floor7->arrOffice(47, 1, 10, 4, "화장실");

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
				printf("701~708영어산업학과 교수사무실\t709행정학과 교수사무실\t710국어국문학과 교수사무실\t711글쓰기상담교실\t712교육대학원 교수사무실\n");
				printf("713~714국어국문학과 교수사무실\t715법학부 교수사무실\t716동북아문화산업학부 교수사무실\t717~718국제통상학부 교수사무실\n");
				printf("719~727미디어커뮤니케이션학부 교수사무실\t728미화원휴게실\t729국제학부 교수사무실\t730행정학과 교수사무실\t731국제학부 교수사무실\n");
				printf("732동북아문화산업학부 교수사무실\t733~734미디어커뮤니케이션학부 교수사무실\n");
				break;
			default:
				printf("이 층에 대한 구조 계획이 없습니다.\n");
				break;
			}
			printf("\n");
			printf("건물 몇층을 보고 싶습니까?(종료:0)");
			scanf("%d", &floor);
		}
	}
	if (!strcmp(bName, "인터내셔널 하우스")) {
		/*각건물의 내부 구조 보여주기*/
		/*각 건물 특색 출력하기*/
		printf("건물 몇층을 보고 싶습니까?");
		scanf("%d", &floor);
	}
};