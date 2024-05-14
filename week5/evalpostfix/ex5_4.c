#include <stdio.h>
#include "stackL.h"
#include "evalPostfix.h"

int main(void) {
	int result;
	char* express = "35*62/-";
	printf("후위 표기식 : %s", express);

	result = evalPostfix(express);
	printf("\n\n연산 결과 => %d\n", result);   // 15-3

	getchar();  return 0;

}