#include <stdio.h>
#include <time.h>

int main(void)
{
	int i;
	double start, end;

	//for ���� ���� �ð�
	start = (double)clock() / CLOCKS_PER_SEC;

	//for ���� 100000000�� ���ƺ���
	int sum = 0;
	for (i = 0; i < 100000000; i++) {
		sum++;
	}

	//for ���� ���� �ð�
	end = (((double)clock()) / CLOCKS_PER_SEC);
	printf("���α׷� ���� �ð� :%lf\n", (end - start)); // ��� ǥ��� : "n"
} //recursive�� �ð����⵵��?