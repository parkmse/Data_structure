#include <stdio.h>

int main(void)
{
	int array[2][3][4]; // ��, ��, ��(3���� �迭�� ���� ����)
	int page, row, col;
	int val = 1; // val ���� ���������� �Ҵ��ϱ� ���� 1�� �ʱ�ȭ

	for (page = 0; page < 2; page++)
	{
		for (row = 0; row < 3; row++)
		{
			for (col = 0; col < 4; col++)
			{
				array[page][row][col] = val;
				printf("\narray[%d][%d][%d] = %d", page, row, col, array[page][row][col]);
				val++;
			}
		}
	}
	return 0;
}