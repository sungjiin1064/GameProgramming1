/*
* �� �� : �ڵ��� �帧 ���� - �ݺ���
* - for �ݺ���, while �ݺ���
*/

/*
* �ݺ���
* - 1+1+1+1+1 => 1 * 5
* 
* for, while
* 
* for(int i = 0; i < 10 ; i++)  i+=2�� 2�� 
  ��� ���ǿ��� ��(true), ����(false)   ������ ���϶��� �ݺ��� ����, ������ ���� �ݺ����� �����.
* 
* 
*/


#include <stdio.h>

int main()
{
	printf("�ݺ��� ����1\n");
	// A�̸��� �������� ȹ�� - ����
	int Acount = 0;
	printf("A�������� �� : %d\n", Acount);

	//������ 1�� ȹ���ߴ�.
	for (int i = 0; i < 10; i++)
	{
		Acount = Acount + 1;
	}

	printf("A�������� �� : %d\n", Acount);

	printf("for �ݺ��� ����2\n");

	int BCount = 0;

	for (int i = 0; i < 10 ; i++)
	{
		BCount = BCount + i;
	}

	printf("B�������� �� : %d\n", BCount);

	printf("for �ݺ��� ����3\n");

	for (int reverseI = 10; reverseI > 0; reverseI--)
	{
		printf("���� I�� �� : %d\n", reverseI);
	}

	//������ �̾߱⸦ ������ ǥ���ϱ�

	for (;;)
	{
		// 1.������ Stet�� ǥ�����ִ� �ܰ�
		// ������ �̸�
		printf("������ �̸� : %s\n", "�ռҵ�");
		// ������ ����
		int weaponLevel = 0;
		// �⺻���ݷ�, ����ġ
		int basePower = 10;
		int weight = 5;
		// ������ ���ݷ� = �⺻ ���ݷ� + ���� * ����ġ
		int attackPower = basePower + weaponLevel + weight;
		// ��ȭ�� ��� ������ ���ΰ�? �׸��Ѱ��ΰ�
		// 2.��ȭ�� �����ϴ� �ܰ� 
		printf("��ȭ�� �����Ͻðڽ��ϱ�?(Y/N)\n");
		char check = ' ';
		scanf_s("%c", &check, 1);

		if (check == 'Y')
		{
			printf("��ȭ�� �����մϴ�.\n");
		}
		else if (check == 'N')
		{
			printf("��ȭ�� �׸� �ΰڽ��ϴ�.\n");
		}
		else
		{
			printf("�߸��� ���� �Է��Ͽ����ϴ�.\n");

			char another = ' ';
			scanf_s("%c", &another, 1);
			while (getchar() != '\n');
			if (another == 'Y')
			{
				printf("��ȭ�� �����մϴ�.\n");
			}
			else if (another == 'N')
			{
				printf("��ȭ�� �׸� �ΰڽ��ϴ�.\n");
			}
			else
			{
				printf("���α׷��� ����Ǿ����ϴ�.\n");

			}
		}

		break;


	}

}