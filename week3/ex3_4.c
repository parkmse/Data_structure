#include <stdio.h> // system defined
#include "listS.h" // ���� ���� ������� (���� ��ġ�� ���ƾ��ϱ� ������ url link�� �� �������.)

int main(void)
{
	int list[MAX] = { 10, 20, 40, 50, 60, 70 };
	int i, move, size = 6;
	printf("\n���� �� ���� ����Ʈ : ");
	for (i = 0; i < size; i++) printf("%3d", list[i]);
	printf("\n������ ���� : %d \n", size);

	move = insertElement(list, size, 30);

	printf("\n���� �� ���� ����Ʈ : ");
	for (i = 0; i <= size; i++) printf("%3d", list[i]);
	printf("\n������ ���� : %d \n", ++size);
	printf("\n�ڸ� �̵� Ƚ�� : %d \n", move);

	move = deleteElement(list, size, 30);
	if (move == size) printf("\n���� ����Ʈ�� ���Ұ� ��� ������ �� �����ϴ�.\n");
	else
	{
		printf("\n���� �� ���� ����Ʈ: ");
		for (i = 0; i < size - 1; i++) printf("%3d ", list[i]);
		printf("\n������ ���� : %d \n", --size);
		printf("\n�ڸ� �̵� Ƚ�� : %d \n", move);
	}

	getchar(); return 0;
}