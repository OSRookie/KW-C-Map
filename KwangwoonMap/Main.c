#define _CRT_SECURE_NO_WARNINGS
#include "Methods.h"

int main() {

	char *building[30];
	int side;
	while (1) {
		printf("����θ� �������� ������������ ��������� 1�� ���� ������ ���� ������ 2���� �Է��ϼ���. (����-1)");
		scanf("%d", &side);
		printf("\n\n");
		if (side == -1) {
			printf("����� �ּż� �����մϴ٣�\n");
			system("pause");
			return 0;
		}
		if (side == 1) {
			rightBuilding();
			printf(" ������� ���� �ǹ��� �Է����ּ���.\n");
			scanf("%s", building);
			if (strcmp(building,"�񸶰�")==0|| strcmp(building, "��õ����") == 0||
				strcmp(building, "������") == 0|| strcmp(building, "80�ֳ����") == 0||
				strcmp(building, "ȭ����") == 0|| strcmp(building, "���ǰ�") == 0||
				strcmp(building, "������") == 0|| strcmp(building, "������") == 0||
				strcmp(building, "�ٻ���") == 0) {
				rbuildingName(&building);
				continue;
			}
			else {
				printf("����� �����ʿ� �̰ǹ� �����ϴ�.\n");
				continue;	
			}
		}
		if (side == 2) {
			leftBuilding();
			printf(" ������� ���� �ǹ��� �Է����ּ���.\n");
			scanf("%s", building);
			if (strcmp(building, "������") == 0 || strcmp(building, "���ع�ȭ������") == 0 ||
				strcmp(building, "���̽���ũ") == 0 || strcmp(building, "������") == 0 ||
				strcmp(building, "������") == 0 || strcmp(building, "��õ��") == 0 ||
				strcmp(building, "������") == 0 || strcmp(building, "�ѿ��") == 0 ||
				strcmp(building, "���ͳ��ų� �Ͽ콺") == 0) {
				lbuildingName(&building);
				continue;
			}
			else {
				printf("����� ���ʿ� �̰ǹ� �����ϴ�.\n");
				continue;
			}
		}
		else {
			printf("�Է� �����Դϴ�. �ٽ� �Է��Ͻʽÿ�.\n");
			continue;
		}
	}
	return 0;
}