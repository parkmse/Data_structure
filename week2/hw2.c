#include <stdio.h>
#include <string.h>

#define MAX_SIZE 20

int main(void)
{
	char s1[MAX_SIZE];
	int i = 0; 

	printf("���ڿ��� �Է��ϼ���:");
	gets(s1);
	printf("\n");
	printf("�Էµ� ���ڿ���\n\"%s\"\n�Դϴ�.\n\n", s1);

	i = strlen(s1); //���ڿ� ���̸� ����ϱ� ���� strlen�Լ� ���
	printf("�Էµ� ���ڿ��� ���� = %d\n", i);
	return 0;
}
