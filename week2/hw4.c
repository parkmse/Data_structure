#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long int fact(int); // 반환값은 n의 팩토리얼 값

void main() {
	int n, result;
	printf("\n 정수를 입력하세요 : ");
	scanf("%d", &n);
	result = fact(n); 
	printf("\n\n %d의 팩토리얼 값은 %ld입니다.\n", n, result);
	getchar(); getchar(); // 사용자의 입력을 대기
}

long int fact(int n) { 
	int value;
	if (n <= 1) // n이 1 이하이면 1을 반환(재귀 종료 조건)
	{
		printf("\n fact(1) 함수 호출!"); 
		printf("\n fact(1) 값 1 반환!");
		return 1;
	}
	else 
	{
		printf("\n fact(%d) 함수 호출!",n);
		value = (n * fact(n - 1)); // n*(n-1)의 팩토리얼 값을 계산
		printf("\n fact(%d) 값 %ld 반환!",n,value); 
		return value;
	}
}
