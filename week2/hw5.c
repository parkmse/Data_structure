#include <stdio.h>

void hanoi(int n, char from, char tmp, char to);
// n: ������ ����, from: ���� ���, to: ��ǥ ���, tmp: ���� ���

int main()
{
	hanoi(3, 'A', 'B', 'C');
	return 0;
}

void hanoi(int n, char from, char tmp, char to)
{
	if (n == 1)
	{
		printf("%c���� ���� %d��(��) %c�� �ű�\n", from, n ,to);
	}
	else
	{
		hanoi(n - 1, from, to, tmp); // tmp�� ���� ������� ����Ͽ� n-1���� ������ to�� �ű�
		printf("%c���� ���� %d��(��) %c�� �ű�\n", from, n, to); // ���� ū ������ ��ǥ ������� �ű�
		hanoi(n - 1, tmp, from, to); // from�� ���� ������� ����Ͽ� n-1���� ������ to�� �ű�
	}
}
