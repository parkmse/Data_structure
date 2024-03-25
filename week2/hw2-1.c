#include <stdio.h>

int main(void)
{
	int array[2][3][4]; // 면, 행, 열(3차원 배열의 선언 형식)
	int page, row, col;
	int val = 1; // val 값을 순차적으로 할당하기 위해 1로 초기화

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