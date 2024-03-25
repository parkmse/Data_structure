#include <stdio.h>

#define ROW_SIZE 5 //행의 크기를 5로 제한
#define COLUMN_SIZE 20 //열의 크기를 20으로 제한


int main(void)
{
	char array[ROW_SIZE][COLUMN_SIZE] = { 0 }; //배열 초기화
	char *ptr[ROW_SIZE]; //포인터 배열 선언

	for (int i = 0; i < ROW_SIZE; i++)
	{
		gets(array[i]);
		ptr[i] = array[i]; //각 포인터를 배열의 해당 요소로 설정
	}
	
	for (int i = 0; i < ROW_SIZE; i++)
	{
		printf("\n%s", ptr[i]); //포인터 배열을 사용하여 문자열 출력
	}
	return 0;
}
