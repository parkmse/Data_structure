#include <stdio.h>

void hanoi(int n, char from, char tmp, char to);
// n: 원반의 갯수, from: 시작 기둥, to: 목표 기둥, tmp: 보조 기둥

int main()
{
	hanoi(3, 'A', 'B', 'C');
	return 0;
}

void hanoi(int n, char from, char tmp, char to)
{
	if (n == 1)
	{
		printf("%c에서 원반 %d를(을) %c로 옮김\n", from, n ,to);
	}
	else
	{
		hanoi(n - 1, from, to, tmp); // tmp를 보조 기둥으로 사용하여 n-1개의 원반을 to로 옮김
		printf("%c에서 원반 %d를(을) %c로 옮김\n", from, n, to); // 가장 큰 원반을 목표 기둥으로 옮김
		hanoi(n - 1, tmp, from, to); // from을 보조 기둥으로 사용하여 n-1개의 원반을 to로 옮김
	}
}
