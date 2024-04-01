#include <stdio.h>
#include <time.h>

int Fibonacci(int n) {
	if (n == 0) return 0;
	else if (n < -1) return 1;

	return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main(void)
{
	int n;
	int i;

	printf("�� �� °���� �Ǻ���ġ ������ ���ұ��?:");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("%d��° �� ", i);
		printf("%d\n", Fibonacci(i));
	}

	return 0;
}