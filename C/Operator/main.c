/*
�ۼ��� : 2025-02-19
�ۼ��� : �ڼ���
��  �� : 

*/

/*
��Ģ ���� : +, -, *, %

���� ������
��ȣ : +, -  ���� -10    ��� +10

���� ������
num1 + num2

���� ������
? 1��  = 2��   : 3��
*/

/*
�������� ���ӻ�
��� ������ +, -, *, /, %
�� ������ > , < , ==    == �ݴ� !=
��Ʈ ������ (data type)
���� ������ ( or ||   , and && )
*/

/*
�� ������ ��� : ��(true) 1, ����(false) 0
1, 0 : 1 + 0 = 1;
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{

	// ��Ģ ���� + ������

	printf("������ �ǽ� 1\n");

	// ������ ���� �ʱ�ȭ

	int num1 = 10;
	int num2 = 3;

	//����
	printf(" %d + %d = %d\n", num1, num2, num1 + num2);
	//����
	printf(" %d - %d = %d\n", num1, num2, num1 - num2);
	//����
	printf(" %d * %d = %d\n", num1, num2, num1 * num2);
	//������
	printf(" %d / %d = %d\n", num1, num2, num1 / num2);
	//������
	printf(" %d ������ %d = %d\n", num1, num2, num1 % num2);

	printf("������ �ǽ� 2 \n");

	printf("�񱳰�� num1 > num2 : %d\n", num1 > num2); // ��
	printf("�񱳰�� num1 < num2 : %d\n", num1 < num2); // ����

	printf("������ �ǽ� 3\n");
	bool isTrue = true;
	bool isFalse = false;

	int result1 = num1 > num2;

	printf("���� ������ ��� ��� : %s\n", result1 ? "true" : "false");
	printf("���� ������ ��� ��� : %d\n", result1 ? 1 : 0);

	printf("������ �ǽ� 4 : ���� ������ \n");

	printf("���� ������ : %d \n", (num1 != num2) || (num1 < num2));
	printf("���� ������ : %d \n", (num1 != num2) && (num1 > num2));

	printf("�ǽ� 5 : ���� ������ \n");

	int num3 = 2;
	int num4 = 5;
	//num3 = num3 + num4;
	//num3 += num4; //������ ����
	//printf("num3 + num4�� �� : %d", num3);

	printf("num3�� �� : %d\n", num3);//2
	printf("num3�� �� : %d\n", num3++);//2
	printf("num4�� �� : %d\n", num4);//5
	printf("num4�� �� : %d\n", ++num4);//6
	printf("num3�� �� : %d\n", ++num3);//4
	

	printf("\n");
	printf("���ӽ��丮\n");

	// ���Ⱝȭ n���ϋ� ���� n+1���� ���
	printf("%+0s�� ��ȭ�Ͽ� %+d�� �Ǿ����ϴ�.\n", "�ռҵ�", 1);
	//������ Inventory, Slot, ��Ÿ�����ۼ���, Stack * ����
	//Slot �ִ밹�� : ���� 
	//Stack �ִ밹�� : ����
	// A ������ n�� ȹ��, B ������ m�� ȹ��
	// ���� �κ��丮�� ������ ����á���� ��á���� ǥ���ϴ� ����� ǥ��


	//int Slot = 10;
	//int result1 = Slot











	
	




}