#include <stdio.h>
#include <string.h>

#define MAX_SIZE 20

int main(void)
{
	char s1[MAX_SIZE];
	int i = 0; 

	printf("문자열을 입력하세요:");
	gets(s1);
	printf("\n");
	printf("입력된 문자열은\n\"%s\"\n입니다.\n\n", s1);

	i = strlen(s1); //문자열 길이를 계산하기 위해 strlen함수 사용
	printf("입력된 문자열의 길이 = %d\n", i);
	return 0;
}
