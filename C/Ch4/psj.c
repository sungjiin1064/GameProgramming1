//#include <stdio.h>
//
//
//int main()
//{
//	printf("���� ��0�����\n");
//
//	int A = 10;
//	int mHP = 40;
//	
//	printf("���͸� �����Ͽ� %d��ŭ ����������\n", A);
//	printf("������ �ǰ� %d��ŭ ����\n", (mHP - A * 1) < 0 ? 0 : (mHP - A * 1));
//	printf("���͸� �����Ͽ� %d��ŭ ����������\n", A);
//	printf("������ �ǰ� %d��ŭ ����\n", (mHP - A * 2) < 0 ? 0 : (mHP - A * 2));
//	printf("���͸� �����Ͽ� %d��ŭ ����������\n", A);
//	printf("������ �ǰ� %d��ŭ ����\n", (mHP - A * 3) < 0 ? 0 : (mHP - A * 3));
//	printf("���͸� �����Ͽ� %d��ŭ ����������\n", A);
//	printf("������ �ǰ� %d��ŭ ����\n", (mHP - A * 4) < 0 ? 0 : (mHP - A * 4));
//	printf("���͸� �����Ͽ� %d��ŭ ����������\n", A);
//	printf("������ �ǰ� %d��ŭ ����\n", (mHP - A * 5) < 0 ? 0 : (mHP - A * 5));

//}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	int random = rand() % 101;

	printf("�������� %d\n", random);

	int user = 0;

	printf("����� ������?  ");
	scanf_s("%d", &user);

	if (user > random)
	{
		printf("������ ���ں��� �۽��ϴ�\n");
	}
	else if (user < random)
	{
		printf("������ ���ں��� Ů�ϴ�\n");
	}
	else
	{
		printf("�����Դϴ�!!\n");
	}







}





