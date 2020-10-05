#define _CRT_SECURE_NO_WARNINGS
#include "Methods.h"

int main() {

	char *building[30];
	int side;
	while (1) {
		printf("광운로를 기준으로 오른쪽지도를 보고싶으면 1번 왼쪽 지도를 보고 싶으면 2번을 입력하세요. (종료-1)");
		scanf("%d", &side);
		printf("\n\n");
		if (side == -1) {
			printf("사용해 주셔서 감사합니다！\n");
			system("pause");
			return 0;
		}
		if (side == 1) {
			rightBuilding();
			printf(" 보고싶은 내부 건물을 입력해주세요.\n");
			scanf("%s", building);
			if (strcmp(building,"비마관")==0|| strcmp(building, "노천극장") == 0||
				strcmp(building, "복지관") == 0|| strcmp(building, "80주년기념관") == 0||
				strcmp(building, "화도관") == 0|| strcmp(building, "옥의관") == 0||
				strcmp(building, "참빛관") == 0|| strcmp(building, "새빛관") == 0||
				strcmp(building, "다산재") == 0) {
				rbuildingName(&building);
				continue;
			}
			else {
				printf("광운대 오른쪽에 이건물 없습니다.\n");
				continue;	
			}
		}
		if (side == 2) {
			leftBuilding();
			printf(" 보고싶은 내부 건물을 입력해주세요.\n");
			scanf("%s", building);
			if (strcmp(building, "연구관") == 0 || strcmp(building, "동해문화예술관") == 0 ||
				strcmp(building, "아이스링크") == 0 || strcmp(building, "빛솔재") == 0 ||
				strcmp(building, "누리관") == 0 || strcmp(building, "한천재") == 0 ||
				strcmp(building, "연촌재") == 0 || strcmp(building, "한울관") == 0 ||
				strcmp(building, "인터내셔널 하우스") == 0) {
				lbuildingName(&building);
				continue;
			}
			else {
				printf("광운대 왠쪽에 이건물 없습니다.\n");
				continue;
			}
		}
		else {
			printf("입력 오류입니다. 다시 입력하십시오.\n");
			continue;
		}
	}
	return 0;
}