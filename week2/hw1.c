#include <stdio.h>

#define ROW_SIZE 5 //���� ũ�⸦ 5�� ����
#define COLUMN_SIZE 20 //���� ũ�⸦ 20���� ����


int main(void)
{
	char array[ROW_SIZE][COLUMN_SIZE] = { 0 }; //�迭 �ʱ�ȭ
	char *ptr[ROW_SIZE]; //������ �迭 ����

	for (int i = 0; i < ROW_SIZE; i++)
	{
		gets(array[i]);
		ptr[i] = array[i]; //�� �����͸� �迭�� �ش� ��ҷ� ����
	}
	
	for (int i = 0; i < ROW_SIZE; i++)
	{
		printf("\n%s", ptr[i]); //������ �迭�� ����Ͽ� ���ڿ� ���
	}
	return 0;
}
