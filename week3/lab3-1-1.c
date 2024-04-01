#include <stdio.h>

int main(void)
{
	int i, sale[4] = { 157, 209, 251, 312 };

	for (i = 0; i < 4; i++)
	{
		printf("\n address : %u sale[%d] = %d", &sale[i], i, sale[i]);
		// int type만큼 4바이트씩 증가

	}

	getchar(); return 0;
}