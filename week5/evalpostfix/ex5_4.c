#include <stdio.h>
#include "stackL.h"
#include "evalPostfix.h"

int main(void) {
	int result;
	char* express = "35*62/-";
	printf("���� ǥ��� : %s", express);

	result = evalPostfix(express);
	printf("\n\n���� ��� => %d\n", result);   // 15-3

	getchar();  return 0;

}