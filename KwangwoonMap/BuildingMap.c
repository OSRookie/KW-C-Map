#include "Methods.h"

int floor;

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

	if (strcmp(bName, "비마관") == 0) {
		/*각건물의 내부 구조 보여주기*/
		/*각 건물 특색 출력하기*/

		printf("건물 몇층을 보고 싶습니까? (1 ~ 7) (종료:0)");
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
				floor1->arrOffice(2, 1, 23, 5, "광운영상센터");
				floor1->arrOffice(50, 1, 10, 10, "계단");
				floor1->arrOffice(30, 1, 18, 6, "인쇄소");
				floor1->arrOffice(2, 10, 15, 13, "연구센터");
				floor1->gotoxy(0, 26);
				printf("특징: 기자재, 세미나실을 영상센터에서 대여할수 있다.\n\n");
				break;
			case 2:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(80, 25);
				floor1->arrOffice(1, 2, 16, 18, "국방센터");
				floor1->arrOffice(20, 2, 25, 3, "개방형 실습실");
				floor1->arrOffice(48, 2, 18, 3, "해동학술");
				floor1->arrOffice(58, 4, 0, 0, "정보실");
				floor1->arrOffice(30, 10, 40, 10, "로비");
				floor1->arrOffice(65, 21, 10, 2, "계단");
				floor1->gotoxy(0, 26);
				printf("특징\n");
				printf("1. 전정대 학생들을 위한 개방형 실습실이 있다.(202호)\n");
				printf("2. 로비 책상들이 많이 있고 사람이 없어 자습하기 좋은 환경이다.\n\n");
				break;
			case 3:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(120, 40);
				floor1->arrOffice(3, 1, 7, 3, "출구");
				floor1->arrOffice(12, 1, 7, 3, "계단");
				floor1->arrOffice(12, 6, 20, 5, "공과대");
				floor1->arrOffice(22, 9, 0, 0, "교학팀");
				floor1->arrOffice(12, 13, 15, 4, "세미나실");
				floor1->arrOffice(12, 18, 15, 4, "여휴개실");
				floor1->arrOffice(12, 24, 15, 4, "경비실");
				floor1->arrOffice(28, 1, 7, 3, "출구");
				floor1->arrOffice(3, 20, 7, 3, "학생");
				floor1->arrOffice(6, 22, 0, 0, "회실");
				floor1->arrOffice(38, 1, 15, 5, "전정대");
				floor1->arrOffice(44, 4, 0, 0, "교학팀");
				floor1->arrOffice(38, 7, 15, 3, "학장실");
				floor1->arrOffice(38, 11, 15, 3, "315호");
				floor1->arrOffice(38, 16, 15, 3, "환경공학과");
				floor1->arrOffice(45, 18, 0, 0, "실험실");
				floor1->arrOffice(56, 15, 13, 10, "환경");
				floor1->arrOffice(61, 21, 0, 0, "공학과");
				floor1->arrOffice(61, 22, 0, 0, "교수실");
				floor1->arrOffice(32, 22, 7, 3, "ele");
				floor1->arrOffice(42, 21, 7, 3, "남화");
				floor1->arrOffice(38, 26, 7, 3, "계단");
				floor1->arrOffice(38, 30, 13, 5, "화공");
				floor1->arrOffice(43, 33, 0, 0, "실험실");
				floor1->arrOffice(53, 30, 7, 2, "여화");
				floor1->arrOffice(53, 34, 13, 3, "화학기초");
				floor1->arrOffice(58, 36, 0, 0, "실험실");
				floor1->arrOffice(69, 34, 13, 3, "화학공정");
				floor1->arrOffice(74, 36, 0, 0, "실험실");
				floor1->arrOffice(85, 34, 7, 3, "강의실");
				floor1->arrOffice(95, 34, 15, 3, "환경대");
				floor1->arrOffice(100, 36, 0, 0, "교학팀");
				floor1->gotoxy(0, 41);
				printf("특징\n");
				printf("1. 전정대 학생회실이 있다.\n");
				printf("2. 3층은 넓어서 강의실 찾기가 어렵다..\n");
				printf("3. 공과대, 전정대 교학팀이 있다..\n\n");
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
				floor1->arrOffice(10, 5, 0, 0, "405호");
				floor1->arrOffice(19, 1, 13, 3, "실험실");
				floor1->arrOffice(19, 5, 30, 3, "429~427호");
				floor1->arrOffice(35, 9, 15, 3, "교수님실");
				floor1->arrOffice(52, 9, 15, 3, "학과");
				floor1->arrOffice(58, 11, 0, 0, "사무실");
				floor1->arrOffice(70, 9, 7, 3, "계단");
				floor1->arrOffice(52, 5, 7, 3, "계단");
				floor1->arrOffice(5, 9, 7, 3, "여화");
				floor1->arrOffice(5, 13, 13, 3, "409호");
				floor1->arrOffice(5, 17, 15, 5, "교수님실");
				floor1->arrOffice(25, 17, 7, 3, "계단");
				floor1->arrOffice(36, 17, 15, 3, "전자재료");
				floor1->arrOffice(43, 19, 0, 0, "실험실");
				floor1->arrOffice(54, 17, 20, 3, "419~421호");
				floor1->arrOffice(30, 21, 25, 3, "교수님실");
				floor1->arrOffice(42, 23, 0, 0, "연구실");
				floor1->gotoxy(0, 26);
				printf("특징\n");
				printf("1. 전자융합과,재료공학과 교수님실이 있다.\n\n");
				break;
			case 5:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(85, 20);
				floor1->arrOffice(3, 2, 15, 4, "519호");
				floor1->arrOffice(10, 5, 0, 0, "520호");
				floor1->arrOffice(21, 2, 15, 3, "502호");
				floor1->arrOffice(28, 4, 0, 0, "501호");
				floor1->arrOffice(39, 2, 13, 3, "컴공");
				floor1->arrOffice(44, 4, 0, 0, "실습실");
				floor1->arrOffice(55, 2, 13, 3, "강의실");
				floor1->arrOffice(3, 7, 13, 3, "전통");
				floor1->arrOffice(8, 9, 0, 0, "실험실");
				floor1->arrOffice(19, 7, 7, 3, "여화");
				floor1->arrOffice(29, 7, 7, 3, "계단");
				floor1->arrOffice(47, 7, 7, 3, "504호");
				floor1->arrOffice(47, 13, 10, 3, "517호");
				floor1->arrOffice(65, 13, 15, 3, "세미나실");
				floor1->arrOffice(38, 6, 7, 2, "ele");
				floor1->arrOffice(56, 6, 10, 4, "화공");
				floor1->arrOffice(59, 9, 0, 0, "교수실");
				floor1->arrOffice(68, 6, 12, 4, "실험실");
				floor1->arrOffice(38, 9, 7, 2, "남화");
				floor1->arrOffice(3, 11, 15, 5, "교수실");
				floor1->arrOffice(10, 14, 0, 0, "연구실");

				floor1->gotoxy(0, 21);
				printf("특징\n");
				printf("1. 전통과, 화공과,생명공학과 실험실 있다.\n");
				printf("2. 502,501,514,513 호는 컴퓨터 강의실 \n");
				printf("2. 전융과 사물함이 있다. \n");
				break;
			case 6:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(70, 20);
				floor1->arrOffice(10, 2, 15, 5, "실험실");
				floor1->arrOffice(28, 2, 25, 5, "교수실");
				floor1->arrOffice(40, 5, 0, 0, "연구실");
				floor1->arrOffice(10, 8, 15, 5, "사무실");
				floor1->arrOffice(50, 8, 10, 3, "계단");
				floor1->arrOffice(4, 14, 10, 3, "여화");
				floor1->arrOffice(16, 14, 10, 3, "계단");
				floor1->arrOffice(28, 14, 10, 3, "ele");
				floor1->arrOffice(40, 14, 15, 5, "교수실");
				floor1->arrOffice(57, 14, 10, 3, "617호");
				floor1->arrOffice(62, 16, 0, 0, "618호");
				floor1->gotoxy(0, 21);
				printf("특징\n");
				printf("1. 전자과 사물함이 있다.\n");
				printf("2. 전자과 교수실, 연구실이 있다..\n");
				printf("3. 617호 618호가 건물 밖에 있다.(잘 찾기)\n\n");
				break;
			case 7:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(70, 20);
				floor1->arrOffice(10, 2, 15, 5, "실험실");
				floor1->arrOffice(28, 2, 25, 5, "교수실");
				floor1->arrOffice(40, 5, 0, 0, "연구실");
				floor1->arrOffice(56, 2, 10, 3, "714호");
				floor1->arrOffice(10, 8, 15, 5, "사무실");
				floor1->arrOffice(50, 8, 10, 3, "계단");
				floor1->arrOffice(4, 14, 10, 3, "여화");
				floor1->arrOffice(16, 14, 10, 3, "계단");
				floor1->arrOffice(28, 14, 10, 3, "ele");
				floor1->arrOffice(40, 14, 13, 3, "실험실");
				floor1->arrOffice(55, 12, 13, 5, "교수실");
				floor1->gotoxy(0, 21);
				printf("특징\n");
				printf("1. 전통과 실험실,사물함이 있다.\n");
				printf("2. 전통과 교수실, 연구실이 있다..\n");
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
	if (strcmp(bName, "참빛관") == 0) {
		/*각건물의 내부 구조 보여주기*/
		/*각 건물 특색 출력하기*/
		printf("건물 몇층을 보고 싶습니까? (-1 ~ 10) (종료:0)");
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
				floor1->arrOffice(5, 1, 10, 7, "105호");
				floor1->arrOffice(5, 7, 10, 7, "106호");
				floor1->arrOffice(5, 15, 10, 7, "107호");
				floor1->arrOffice(35, 8, 10, 3, "103호");
				floor1->arrOffice(47, 8, 10, 3, "102호");
				floor1->arrOffice(43, 13, 5, 3, "ele");
				floor1->arrOffice(50, 13, 9, 9, "101호");
				floor1->arrOffice(20, 20, 8, 2, "계단");
				floor1->arrOffice(30, 20, 12, 2, "화장실");
				floor1->gotoxy(0, 26);
				printf("특징\n");
				printf("대형 강의실이 많다\n");
				printf("인원 많은 수업, 시험은 여기서 주로 본다.\n");
				printf("남자화장실, 여자화장실 둘다 있다.\n");
				printf("지하에 있으니깐 주의할것.\n\n");
				break;
			case 1:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(50, 30);
				floor1->arrOffice(5, 1, 9, 7, "102호");
				floor1->arrOffice(5, 9, 9, 7, "103호");
				floor1->arrOffice(25, 9, 9, 7, "101호");
				floor1->arrOffice(36, 9, 9, 7, "105호");
				floor1->arrOffice(5, 17, 9, 7, "104호");
				floor1->arrOffice(25, 17, 5, 3, "ele");
				floor1->arrOffice(36, 17, 10, 3, "화장실");
				floor1->arrOffice(36, 21, 10, 3, "자판기");
				floor1->arrOffice(3, 25, 15, 3, "경비실");
				floor1->arrOffice(20, 25, 7, 3, "계단");
				floor1->gotoxy(0, 31);
				printf("특징\n");
				printf("elevator가 짝수층, 홀수층으로 나누어져 있어 타기가 힘들다.\n");
				printf("계단위치를 잘알아서 잘 사용하는것이 좋음\n\n");
				break;
			case 2:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(50, 30);
				floor1->arrOffice(5, 1, 9, 7, "202호");
				floor1->arrOffice(5, 9, 9, 7, "203호");
				floor1->arrOffice(25, 9, 9, 7, "201호");
				floor1->arrOffice(36, 9, 9, 7, "206호");
				floor1->arrOffice(5, 17, 13, 7, "공학용");
				floor1->arrOffice(8, 21, 0, 0, "혁신센터");
				floor1->arrOffice(25, 17, 5, 3, "ele");
				floor1->arrOffice(36, 17, 10, 3, "화장실");
				floor1->arrOffice(3, 25, 15, 3, "205호");
				floor1->arrOffice(20, 25, 7, 3, "계단");
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
				floor1->arrOffice(5, 1, 15, 20, "교수님실");
				floor1->arrOffice(34, 1, 13, 12, "교수님실");
				floor1->arrOffice(22, 8, 7, 3, "정원");
				floor1->arrOffice(25, 12, 5, 3, "ele");
				floor1->arrOffice(25, 16, 7, 3, "계단");
				floor1->arrOffice(34, 14, 10, 5, "화장실");
				floor1->arrOffice(5, 22, 35, 3, "연구실");
				floor1->gotoxy(0, 27);
				printf("특징\n");
				printf("정원이 있다.\n");
				printf("전기과 교수님, 연구실이 주로 있다.\n\n");
				break;
			case 4:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(50, 26);
				floor1->arrOffice(5, 1, 15, 20, "교수님실");
				floor1->arrOffice(34, 1, 13, 12, "교수님실");
				floor1->arrOffice(25, 12, 5, 3, "ele");
				floor1->arrOffice(25, 16, 7, 3, "계단");
				floor1->arrOffice(34, 14, 10, 5, "화장실");
				floor1->arrOffice(5, 22, 35, 3, "연구실");
				floor1->gotoxy(0, 27);
				printf("특징\n");
				printf("전정대 교수님, 연구실이 주로 있다.\n\n");
				break;
			case 5:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(50, 26);
				floor1->arrOffice(5, 1, 15, 20, "교수님실");
				floor1->arrOffice(34, 1, 13, 12, "교수님실");
				floor1->arrOffice(25, 12, 5, 3, "ele");
				floor1->arrOffice(25, 16, 7, 3, "계단");
				floor1->arrOffice(34, 14, 10, 5, "화장실");
				floor1->arrOffice(5, 22, 35, 3, "연구실");
				floor1->gotoxy(0, 27);
				printf("특징\n");
				printf("전기과 교수님, 연구실이 주로 있다.\n\n");
				break;
			case 6:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(50, 26);
				floor1->arrOffice(5, 1, 15, 20, "교수님실");
				floor1->arrOffice(34, 1, 13, 12, "교수님실");
				floor1->arrOffice(25, 12, 5, 3, "ele");
				floor1->arrOffice(25, 16, 7, 3, "계단");
				floor1->arrOffice(34, 14, 10, 5, "화장실");
				floor1->arrOffice(5, 22, 35, 3, "연구실");
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
				floor1->arrOffice(5, 1, 15, 20, "교수님실");
				floor1->arrOffice(34, 1, 13, 12, "교수님실");
				floor1->arrOffice(25, 12, 5, 3, "ele");
				floor1->arrOffice(25, 16, 7, 3, "계단");
				floor1->arrOffice(34, 14, 10, 5, "화장실");
				floor1->arrOffice(5, 22, 35, 3, "연구실");
				floor1->gotoxy(0, 27);
				printf("특징\n");
				printf("전자과 교수님, 연구실이 주로 있다.\n\n");
				break;
			case 8:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(50, 26);
				floor1->arrOffice(5, 1, 15, 20, "교수님실");
				floor1->arrOffice(34, 1, 13, 12, "교수님실");
				floor1->arrOffice(25, 12, 5, 3, "ele");
				floor1->arrOffice(25, 16, 7, 3, "계단");
				floor1->arrOffice(34, 14, 10, 5, "화장실");
				floor1->arrOffice(5, 22, 35, 3, "연구실");
				floor1->gotoxy(0, 27);
				printf("특징\n");
				printf("전통과 교수님, 연구실이 주로 있다.\n\n");
				break;
			case 9:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(50, 26);
				floor1->arrOffice(5, 1, 15, 20, "교수님실");
				floor1->arrOffice(34, 1, 13, 12, "교수님실");
				floor1->arrOffice(25, 12, 5, 3, "ele");
				floor1->arrOffice(25, 16, 7, 3, "계단");
				floor1->arrOffice(34, 14, 10, 5, "화장실");
				floor1->arrOffice(5, 22, 35, 3, "연구실");
				floor1->gotoxy(0, 27);
				printf("특징\n");
				printf("전자 재료 교수님, 연구실이 주로 있다.\n\n");
				break;
			case 10:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(50, 26);
				floor1->arrOffice(5, 1, 15, 20, "교수님실");
				floor1->arrOffice(34, 1, 13, 12, "교수님실");
				floor1->arrOffice(25, 12, 5, 3, "ele");
				floor1->arrOffice(25, 16, 7, 3, "계단");
				floor1->arrOffice(34, 14, 10, 5, "화장실");
				floor1->arrOffice(5, 22, 35, 3, "건축과실습실");
				floor1->gotoxy(0, 27);
				printf("특징\n");
				printf("건축과 교수님, 연구실이 주로 있다.\n\n");
				break;
			default:
				printf("이 층에 대한 구조 계획이 없습니다.\n");
				break;
			}
			printf("건물 몇층을 보고 싶습니까?(종료:0)");
			scanf("%d", &floor);
		}
	}
	if (strcmp(bName, "새빛관") == 0) {
		printf("건물 몇층을 보고 싶습니까? (1~9) (종료:0)");
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
				floor1->arrOffice(5, 10, 15, 5, "102호");
				floor1->arrOffice(5, 16, 15, 5, "101호");
				floor1->arrOffice(23, 11, 13, 3, "실습실2");
				floor1->arrOffice(38, 7, 5, 3, "여화");
				floor1->arrOffice(45, 7, 5, 3, "남화");
				floor1->arrOffice(38, 12, 5, 5, "ele");
				floor1->arrOffice(23, 18, 13, 3, "로비");
				floor1->arrOffice(38, 18, 10, 3, "입구");
				floor1->arrOffice(52, 18, 13, 3, "경비실");
				floor1->arrOffice(52, 1, 13, 7, "실습실1");
				floor1->arrOffice(52, 9, 13, 7, "코딩룸");
				floor1->gotoxy(0, 26);
				printf("특징\n");
				printf("대형강의실이 많다.\n");
				printf("로비가 넓다.\n");
				printf("여화 >> 여자 화장실 남화 >> 남자화장실\n\n");
				break;
			case 2:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(68, 25);
				floor1->arrOffice(5, 7, 15, 4, "202호");
				floor1->arrOffice(5, 12, 15, 4, "205호");
				floor1->arrOffice(5, 18, 10, 3, "206호");
				floor1->arrOffice(18, 18, 10, 3, "204호");
				floor1->arrOffice(40, 18, 15, 3, "203호");
				floor1->arrOffice(40, 12, 5, 3, "ele");
				floor1->arrOffice(47, 12, 10, 5, "화장실");
				floor1->arrOffice(59, 12, 7, 5, "로비");
				floor1->arrOffice(23, 3, 12, 6, "킹랩실");
				floor1->arrOffice(37, 5, 10, 3, "207호");
				floor1->gotoxy(0, 26);
				printf("특징\n");
				printf("로비가 있다.\n");
				printf("정통과 사물함이 있다..\n");
				break;
			case 3:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(75, 25);
				floor1->arrOffice(5, 1, 13, 3, "실습실4");
				floor1->arrOffice(5, 5, 13, 5, "실습실3");
				floor1->arrOffice(5, 11, 13, 5, "실습실2");
				floor1->arrOffice(5, 17, 13, 5, "실습실1");
				floor1->arrOffice(23, 3, 13, 5, "전산");
				floor1->arrOffice(28, 6, 0, 0, "운영실");
				floor1->arrOffice(28, 10, 13, 6, "학생회실");
				floor1->arrOffice(47, 10, 7, 3, "계단");
				floor1->arrOffice(28, 18, 13, 3, "306호");
				floor1->arrOffice(43, 18, 5, 3, "ele");
				floor1->arrOffice(50, 18, 7, 6, "화장실");
				floor1->arrOffice(59, 18, 7, 6, "로비");
				floor1->gotoxy(0, 26);
				printf("특징\n");
				printf("소프트 웨어 융합학과 실습실, 학생회실, 사물함이 있다.\n\n");
				break;
			case 4:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(65, 22);
				floor1->arrOffice(5, 1, 10, 3, "405호");
				floor1->arrOffice(5, 10, 15, 3, "사업단실");
				floor1->arrOffice(27, 10, 13, 3, "휴개실");
				floor1->arrOffice(5, 16, 10, 5, "학과");
				floor1->arrOffice(10, 19, 0, 0, "사무실");
				floor1->arrOffice(22, 16, 5, 3, "ele");
				floor1->arrOffice(29, 16, 13, 4, "화장실");
				floor1->arrOffice(19, 1, 10, 3, "406호");
				floor1->arrOffice(32, 1, 10, 3, "407호");
				floor1->arrOffice(45, 1, 10, 3, "408호");
				floor1->arrOffice(45, 5, 10, 3, "계단");
				floor1->gotoxy(0, 23);
				printf("특징\n");
				printf("소프트 웨어 융합학과 교학, 학과 사무실이 있다.\n\n");
				break;
			case 5:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(65, 17);
				floor1->arrOffice(5, 1, 15, 3, "교수실");
				floor1->arrOffice(5, 6, 15, 3, "502호");
				floor1->arrOffice(23, 6, 10, 3, "서버실");
				floor1->arrOffice(23, 1, 10, 3, "실습실");
				floor1->arrOffice(37, 1, 10, 3, "507호");
				floor1->arrOffice(36, 6, 7, 3, "ele");
				floor1->arrOffice(49, 6, 13, 3, "화장실");
				floor1->arrOffice(50, 1, 10, 3, "508호");
				floor1->arrOffice(5, 12, 40, 3, "교수실");
				floor1->gotoxy(0, 18);
				printf("특징\n");
				printf("소프트 웨어 학부 관련 강의실이 많다.\n\n");
				break;
			case 6:
				floor1 = (struct Floor*)malloc(sizeof(struct Floor));
				floor1->clear = clear;
				floor1->lineGroup = lineGroup;
				floor1->arrOffice = arrOffice;
				floor1->gotoxy = gotoxy;
				floor1->clear();
				floor1->lineGroup(77, 17);
				floor1->arrOffice(5, 1, 15, 14, "교수실");
				floor1->arrOffice(28, 5, 10, 2, "616호");
				floor1->arrOffice(28, 9, 10, 2, "615호");
				floor1->arrOffice(40, 7, 10, 2, "617호");
				floor1->arrOffice(53, 7, 7, 2, "ele");
				floor1->arrOffice(62, 7, 12, 3, "화장실");
				floor1->arrOffice(28, 1, 30, 3, "교수실");
				floor1->arrOffice(28, 13, 35, 3, "교수실");
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
				floor1->arrOffice(5, 1, 15, 14, "교수실");
				floor1->arrOffice(28, 5, 10, 2, "716호");
				floor1->arrOffice(28, 9, 10, 2, "715호");
				floor1->arrOffice(40, 7, 10, 2, "717호");
				floor1->arrOffice(53, 7, 7, 2, "ele");
				floor1->arrOffice(62, 7, 12, 3, "화장실");
				floor1->arrOffice(28, 1, 30, 3, "교수실");
				floor1->arrOffice(28, 13, 35, 3, "교수실");
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
				floor1->arrOffice(5, 1, 15, 14, "교수실");
				floor1->arrOffice(28, 5, 10, 2, "816호");
				floor1->arrOffice(28, 9, 10, 2, "815호");
				floor1->arrOffice(40, 7, 10, 2, "817호");
				floor1->arrOffice(53, 7, 7, 2, "ele");
				floor1->arrOffice(62, 7, 12, 3, "화장실");
				floor1->arrOffice(28, 1, 30, 3, "교수실");
				floor1->arrOffice(28, 13, 35, 3, "교수실");
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
				floor1->arrOffice(5, 1, 15, 14, "교수실");
				floor1->arrOffice(28, 5, 10, 2, "916호");
				floor1->arrOffice(28, 9, 10, 2, "915호");
				floor1->arrOffice(40, 7, 10, 2, "917호");
				floor1->arrOffice(53, 7, 7, 2, "ele");
				floor1->arrOffice(62, 7, 12, 3, "화장실");
				floor1->arrOffice(28, 1, 30, 3, "교수실");
				floor1->arrOffice(28, 13, 35, 3, "교수실");
				floor1->gotoxy(0, 18);
				break;
			default:
				printf("이 층에 대한 구조 계획이 없습니다.\n");
				break;
			}
			printf("건물 몇층을 보고 싶습니까?(종료:0)");
			scanf("%d", &floor);
		}
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
		printf("건물 몇층을 보고 싶습니까?(-2 ~ 8 (0은뒤로가기))");
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
				floorB2->arrOffice(1, 1, 14, 4, "미화원");
				floorB2->arrOffice(8, 4, 0, 0, "휴게실");
				floorB2->arrOffice(1, 6, 10, 4, "B203");
				floorB2->arrOffice(5, 9, 0, 0, "~B207");
				
				floorB2->arrOffice(1, 15, 10, 4, "B218");
				floorB2->arrOffice(5, 18, 0, 0, "~B216");

				floorB2->arrOffice(17, 1, 7, 4, "계단");
				floorB2->arrOffice(13, 21, 20, 4, "B215~B214");


				floorB2->arrOffice(27,1,20,4,"B201~B202");
				floorB2->arrOffice(35, 21, 10, 4, "B212");

				floorB2->arrOffice(38,15,10,4,"B210");
				floorB2->arrOffice(43,18,0,0,"B209");

				floorB2->arrOffice(49, 1, 25, 4, "B222-1~B222-2");
				floorB2->arrOffice(49, 9, 9, 4, "B211");

				floorB2->arrOffice(77,1,7,4,"계단");

				floorB2->arrOffice(74,9,10,4,"화장실");

				floorB2->gotoxy(0,27);
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
				floorB1->lineGroup(70, 20);
				floorB1->arrOffice(5, 1, 7, 4, "계단");
				floorB1->arrOffice(1, 6, 10, 4, "B110");
				floorB1->arrOffice(1, 11, 12, 4, "B111");
				floorB1->arrOffice(6, 14, 0, 0, "/B111-2");

				floorB1->arrOffice(15, 1, 11, 4, "여자");
				floorB1->arrOffice(19, 4, 0, 0, "탈의실");

				floorB1->arrOffice(27, 1, 11, 4, "남자");
				floorB1->arrOffice(31, 4, 0, 0, "탈의실");
				floorB1->arrOffice(39, 1, 13, 4, "B107");
				floorB1->arrOffice(44, 4, 0, 0, "~B101");
				floorB1->arrOffice(60, 1, 7, 4, "계단");

				floorB1->arrOffice(60, 10, 9, 4, "B119");

				floorB1->arrOffice(20, 15, 11, 4, "B116-3");
				floorB1->arrOffice(35, 15, 11, 4, "화장실");

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
				floor1->arrOffice(9,1,11,4,"ele");
				floor1->arrOffice(1, 15, 10, 4, "하나");

				floor1->arrOffice(22, 3, 10, 2, "102");
				floor1->arrOffice(13, 15, 7, 4, "입구");

				floor1->arrOffice(23, 6, 20, 4, "103~105");
				floor1->arrOffice(56, 6, 7, 4, "계단");
				floor1->arrOffice(59, 11, 10, 4, "107");

				floor1->arrOffice(34, 15, 10, 4, "110");
				floor1->arrOffice(38, 18, 0, 0, "~108");

				floor1->gotoxy(71,0);
				floor1->lineGroup(35, 25);
				floor1->arrOffice(85,1,7,4,"입구");
				floor1->arrOffice(72, 6, 10, 4, "111");
				floor1->arrOffice(72, 11, 10, 4, "111-1");
				floor1->arrOffice(72, 18, 10, 4, "화장실");

				floor1->arrOffice(94, 8, 10, 8, "121");
				floor1->arrOffice(98, 13, 0, 0, "~118");

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
				floor2->arrOffice(11, 1, 10, 4, "화장실");
				floor2->arrOffice(24, 1, 20, 4, "202~204");
				
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
				floor3->arrOffice(1, 6, 10, 4, "미화");
				floor3->arrOffice(6, 9, 0, 0, "창고");
				floor3->arrOffice(5, 13, 20, 4, "301~303");
				floor3->arrOffice(12, 1, 10, 4, "화장실");

				floor3->arrOffice(25, 1, 20, 4, "304~306");
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
				floor4->lineGroup(55, 15);
				floor4->arrOffice(1, 1, 7, 4, "계단");			
				floor4->arrOffice(5, 10, 10, 4, "401");
				floor4->arrOffice(11, 1, 10, 4, "화장실");
				floor4->arrOffice(16, 10, 10, 4, "402");
				
				floor4->arrOffice(24, 1, 20, 4, "404~408");
				
				floor4->arrOffice(46, 1, 7, 4, "계단");
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
				floor5->arrOffice(11, 1, 10, 4, "화장실");
				floor5->arrOffice(5, 10, 10, 4, "501");
				floor5->arrOffice(17, 10, 10, 4, "502-1");
				floor5->arrOffice(29, 10, 10, 4, "502");
				floor5->arrOffice(24, 1, 20, 4, "504~505");
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
			printf("건물 몇층을 보고 싶습니까?(-2 ~ 8 (0은뒤로가기))");
			scanf("%d", &floor);
		}
	}
	if (!strcmp(bName, "동해문화예술관")) {
		/*각건물의 내부 구조 보여주기*/
		/*각 건물 특색 출력하기*/
		printf("건물 몇층을 보고 싶습니까?(-1(0은뒤로가기))");
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
			printf("건물 몇층을 보고 싶습니까?(-1(0은뒤로가기))");
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
		printf("건물 몇층을 보고 싶습니까?(1 ~ 5 (0은뒤로가기))");
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
				floor1->arrOffice(1, 1, 11, 10, "113호");
				floor1->arrOffice(5, 7, 0, 0, "~107호");


				floor1->arrOffice(20, 4, 13, 4, "화장실");
				floor1->arrOffice(20, 16, 13, 4, "계단");

				floor1->arrOffice(38, 6, 15, 4, "ele");
				floor1->arrOffice(36, 14, 13, 6, "101호");
				floor1->arrOffice(42, 18, 0, 0, "102호");
				floor1->arrOffice(36, 23, 15, 4, "미화원");
				floor1->arrOffice(43, 26, 0, 0, "대기실");

				floor1->arrOffice(53, 15, 13, 4, "계단");

				floor1->arrOffice(70, 15, 9, 4, "입구");


				floor1->gotoxy(0, 29);
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
				floor2->lineGroup(90, 28);
				floor2->arrOffice(1, 1, 10, 4, "214");
				floor2->arrOffice(1, 7, 10, 4, "212");
				floor2->arrOffice(6, 10, 0, 0, "211");
				floor2->arrOffice(1, 15, 10, 4, "207");
				floor2->arrOffice(5, 18, 0, 0, "~203");
				floor2->arrOffice(1, 23, 10, 4, "CU");

				floor2->arrOffice(14, 3, 10, 4, "216");
				floor2->arrOffice(14, 10, 10, 4, "화장실");
				floor2->arrOffice(14, 20, 10, 4, "201");

				floor2->arrOffice(26, 3, 10, 4, "232");
				floor2->arrOffice(26, 20, 7, 4, "계단");

				floor2->arrOffice(40, 3, 10, 4, "233");
				floor2->arrOffice(40, 15, 11, 4, "ele");
				floor2->arrOffice(40, 23, 10, 4, "입구");

				floor2->arrOffice(54, 20, 7, 4, "계단");

				floor2->arrOffice(65, 4, 10, 4, "217");
				floor2->arrOffice(65, 12, 10, 4, "231");
				floor2->arrOffice(65, 18, 10, 4, "230");

				floor2->arrOffice(79, 1, 10, 4, "218");
				floor2->arrOffice(84, 4, 0, 0, "219");
				floor2->arrOffice(79, 7, 10, 4, "221");
				floor2->arrOffice(83, 10, 0, 0, "~225");
				floor2->arrOffice(79, 13, 10, 4, "226");
				floor2->arrOffice(81, 16, 0, 0, "(4학년)");
				floor2->arrOffice(79, 18, 10, 4, "226");
				floor2->arrOffice(81, 21, 0, 0, "(3학년)");
				floor2->arrOffice(79, 23, 10, 4, "227");
				floor2->arrOffice(83, 26, 0, 0, "~229");
				
				floor2->gotoxy(0, 29);
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
				floor3->lineGroup(84, 28);
				floor3->arrOffice(1, 1, 10, 20, "315");
				floor3->arrOffice(5, 12, 0, 0, "~302");

				floor3->arrOffice(18, 2, 10, 4, "316");
				floor3->arrOffice(18, 8, 10, 4, "화장실");
				floor3->arrOffice(26, 17, 7, 4, "계단");
				floor3->arrOffice(18, 23, 10, 4, "301");
				
				floor3->arrOffice(40, 15, 11, 4, "ele");

				floor3->arrOffice(56, 2, 10, 4, "317");
				floor3->arrOffice(54, 17, 7, 4, "계단");
				floor3->arrOffice(56, 23, 10, 4, "326");
				floor3->arrOffice(61, 26, 0, 0, "325");

				floor3->arrOffice(73, 1, 10, 20, "318");
				floor3->arrOffice(77, 12, 0, 0, "~324");


				floor3->gotoxy(0,29);
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
				floor4->lineGroup(89, 28);
				floor4->arrOffice(1, 1, 10, 20, "406");
				floor4->arrOffice(5, 12, 0, 0, "~402");

				floor4->arrOffice(15, 1, 20, 4, "407~408");
				floor4->arrOffice(15, 6, 10, 4, "화장실");
				floor4->arrOffice(17, 15, 7, 4, "계단");
				floor4->arrOffice(15, 21, 10, 4, "401");

				floor4->arrOffice(29, 6, 10, 4, "휴게소");

				floor4->arrOffice(42, 1, 20, 4, "409~410");
				floor4->arrOffice(42, 12, 11, 4, "ele");

				floor4->arrOffice(65, 6, 10, 4, "화장실");
				floor4->arrOffice(67, 15, 7, 4, "계단");
				floor4->arrOffice(65, 21, 10, 6, "419");
				floor4->arrOffice(69, 25, 0, 0, "~418");

				floor4->arrOffice(77, 1, 10, 8, "411");
				floor4->arrOffice(81, 6, 0, 0, "~413");
				floor4->arrOffice(77, 11, 10, 8, "415");
				floor4->arrOffice(81, 16, 0, 0, "~417");

				floor4->gotoxy(0, 29);
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
				floor5->lineGroup(77, 32);
				floor5->arrOffice(1, 1, 10, 24, "517");
				floor5->arrOffice(5, 14, 0, 0, "~502");

				floor5->arrOffice(13, 2, 10, 4, "518");
				floor5->arrOffice(13, 10, 9, 4, "화장실");
				floor5->arrOffice(18, 20, 7, 4, "계단");
				floor5->arrOffice(13, 26, 10, 4, "501");

				floor5->arrOffice(25, 7, 10, 4, "519");
				floor5->arrOffice(29, 10, 0, 0, "~520");

				floor5->arrOffice(32, 14, 11, 4, "ele");

				floor5->arrOffice(38, 7, 10, 4, "522");
				floor5->arrOffice(42, 10, 0, 0, "~521");

				floor5->arrOffice(49, 2, 10, 4, "523");
				floor5->arrOffice(49, 20, 7, 4, "계단");

				floor5->arrOffice(52, 26, 10, 4, "540");
				floor5->arrOffice(56, 29, 0, 0, "~539");

				floor5->arrOffice(66, 1, 10, 24, "524");
				floor5->arrOffice(70, 14, 0, 0, "~538");


				floor5->gotoxy(0, 33);
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
			printf("건물 몇층을 보고 싶습니까?(1 ~ 5 (0은뒤로가기))");
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
		printf("건물 몇층을 보고 싶습니까?(-3 ~ 7 (0은뒤로가기))");
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
				floorB3->arrOffice(25, 12, 0, 0, "지하주차장");

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
				floorB2->arrOffice(25, 12, 0, 0, "지하주차장");

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
				
				floorB1->arrOffice(54, 9, 10, 4, "화장실");

				floorB1->arrOffice(11, 16, 7, 4, "계단");
				floorB1->arrOffice(44, 16, 10, 4, "계단");

				floorB1->arrOffice(1, 21, 10, 4, "입구");

				floorB1->gotoxy(0, 27);
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
				floor1->lineGroup(76, 25);
				floor1->arrOffice(1, 1, 10, 18, "104");
				floor1->arrOffice(5, 11, 0, 0, "~112");

				floor1->arrOffice(13, 20, 7, 4, "입구");

				floor1->arrOffice(16, 5, 10, 8, "118");
				floor1->arrOffice(20, 10, 0, 0, "~113");

				floor1->arrOffice(16, 15, 7, 4, "계단");

				floor1->arrOffice(28, 4, 11, 4, "ele");
				floor1->arrOffice(28, 10, 7, 4, "계단");

				floor1->arrOffice(40, 2, 10, 4, "화장실");

				floor1->arrOffice(40, 20, 8, 4, "입구");

				floor1->arrOffice(52, 4, 10, 4, "103");

				floor1->arrOffice(65, 4, 10, 4, "102");
				floor1->arrOffice(65, 9, 10, 4, "101");


				floor1->gotoxy(0, 26);
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
				floor2->lineGroup(55, 25);
				floor2->arrOffice(1, 1, 10, 20, "205");
				floor2->arrOffice(5, 12, 0, 0, "~216");

				floor2->arrOffice(13, 7, 10, 8, "225");
				floor2->arrOffice(17, 12, 0, 0, "~220");
				floor2->arrOffice(15, 16, 7, 2, "계단");
				floor2->arrOffice(13, 19, 10, 4, "219");
				floor2->arrOffice(18, 22, 0, 0, "~217");

				floor2->arrOffice(24, 12, 10, 4, "ele");
				floor2->arrOffice(26, 18, 7, 4, "계단");

				floor2->arrOffice(22, 1, 10, 4, "화장실");

				floor2->arrOffice(33, 1, 10, 4, "204");
				floor2->arrOffice(33, 6, 10, 4, "201");

				floor2->arrOffice(44, 1, 10, 4, "203");
				floor2->arrOffice(44, 6, 10, 4, "202");


				floor2->gotoxy(0, 26);
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
				floor3->lineGroup(53, 29);
				floor3->arrOffice(3, 1, 10, 4, "305");
				floor3->arrOffice(3, 12, 10, 14, "306");
				floor3->arrOffice(7, 20, 0, 0, "~310");

				floor3->arrOffice(20, 1, 10, 4, "화장실");
				floor3->arrOffice(20, 12, 11, 4, "ele");
				floor3->arrOffice(20, 18, 7, 4, "계단");
				floor3->arrOffice(14, 24, 7, 4, "계단");

				floor3->arrOffice(31, 1, 10, 4, "304");
				floor3->arrOffice(31, 6, 10, 4, "301");

				floor3->arrOffice(42, 1, 10, 4, "303");
				floor3->arrOffice(42, 6, 10, 4, "302");

				floor3->gotoxy(0, 30);
				printf("301~305강의실\t306휴게실\t307~310강의실\n");
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

				floor4->arrOffice(23, 1, 10, 4, "화장실");
				floor4->arrOffice(17, 9, 11, 4, "ele");
				floor4->arrOffice(20, 14, 7, 4, "계단");
				floor4->arrOffice(12, 20, 7, 4, "계단");

				floor4->arrOffice(34, 1, 10, 4, "404");
				floor4->arrOffice(34, 8, 10, 4, "401");

				floor4->arrOffice(45, 1, 10, 4, "403");
				floor4->arrOffice(45, 8, 10, 4, "402");

				floor4->gotoxy(0, 32);
				printf("401~405강의실\t406휴게실\t407~410강의실\n");
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

				floor5->arrOffice(13, 25, 11, 4, "범죄");
				floor5->arrOffice(17, 28, 0, 0, "연구소");

				floor5->arrOffice(25, 1, 17, 4, "휴먼팩터");
				floor5->arrOffice(33, 4, 0, 0, "연구실");
				floor5->arrOffice(26, 16, 7, 4, "계단");

				floor5->arrOffice(45, 1, 11, 4, "화장실");
			
				floor5->arrOffice(51, 10, 11, 4, "ele");
				floor5->arrOffice(51, 15, 7, 4, "계단");

				floor5->arrOffice(63, 1, 10, 4, "504");
				floor5->arrOffice(63, 6, 10, 4, "501");

				floor5->arrOffice(74, 1, 10, 4, "503");
				floor5->arrOffice(74, 6, 10, 4, "502");

				floor5->gotoxy(0, 31);
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
				floor6->lineGroup(79, 32);
				floor6->arrOffice(1, 1, 10, 20, "614");
				floor6->arrOffice(5, 12, 0, 0, "~625");				
			
				floor6->arrOffice(12, 29, 20, 2, "626~628");
				
				floor6->arrOffice(13, 1, 18, 2, "613~612");
				floor6->arrOffice(15, 5, 10, 14, "635");
				floor6->arrOffice(19, 13, 0, 0, "~630");
				floor6->arrOffice(18, 22, 10, 2, "계단");
				floor6->arrOffice(15, 25, 10, 2, "629");
				
				floor6->arrOffice(34, 1, 10, 4, "화장실");
			
				floor6->arrOffice(37, 7, 11, 4, "ele");
				floor6->arrOffice(38, 13, 8, 4, "계단");

				floor6->arrOffice(47, 1, 30, 4, "611~606");
				
				floor6->arrOffice(58, 7, 20, 4, "601~605");
				
				floor6->gotoxy(0, 33);
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
				floor7->lineGroup(79, 33);
				floor7->arrOffice(1, 4, 10, 20, "714");
				floor7->arrOffice(5, 15, 0, 0, "~723");
				floor7->arrOffice(1, 30, 20, 2, "724~727");


				floor7->arrOffice(13, 1, 18, 2, "713~711");
				floor7->arrOffice(18, 7, 10, 14, "734");
				floor7->arrOffice(22, 15, 0, 0, "~729");
				floor7->arrOffice(22, 23, 10, 2, "계단");
				floor7->arrOffice(22, 26, 10, 2, "728");

				floor7->arrOffice(37, 7, 11, 4, "ele");
				floor7->arrOffice(38, 13, 8, 4, "계단");

				floor7->arrOffice(44, 1, 11, 4, "화장실");

				floor7->arrOffice(58, 1, 20, 4, "710~706");
				floor7->arrOffice(58, 7, 20, 4, "701~705");

				floor7->gotoxy(0, 34);
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
			printf("건물 몇층을 보고 싶습니까?(-3 ~ 7 (0은뒤로가기))");
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