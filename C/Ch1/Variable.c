/*
�ۼ��� : 2025-02-17
�ۼ��� : �ڼ���
��  �� : ����
*/

// 0 ȯ�� ����
#include <stdio.h>

int main()
{
    // player: �г���(���ڿ�) - kk, oo
	// enemy : ���� �̸�(���ڿ�)
	// player's attackpower : �÷��̾��� ���ݷ�(����)
	// enemy's attackpower  : ������ ���ݷ� (����)

	// ������ �̿��ؼ� - �ѹ濡 player�̸��� �ٲپ� ����.
	// ��ǻ�Ϳ��� �����ؾ� �� ����(������ �̸�, ��� �����ΰ�(�ڡڡ�), ��)

	int playerAttackPower = 6;
	int monsterAttackPower = 2;
	int playerHealth = 50;
	int monsterHealth = 10;
	int pH = playerHealth - monsterAttackPower;
	int mH = monsterHealth - playerAttackPower;
	int mH1 = mH - playerAttackPower;
	int mH2 = mH1 - playerAttackPower;
	int pH1 = pH - monsterAttackPower;
	
	printf("%s�� ���� �������� %s�� �������ϴ�.\n", "�����̾�", "������");
	printf("\n");
	printf("-��������-\n");
	printf("\n");
	printf("%s ü��(%d)   %s ü��(%d)\n", "�����̾�", playerHealth, "������", monsterHealth);
	printf("%s�� ������ ���� %d �������� �־����ϴ�.\n", "�����̾�", playerAttackPower);
	printf("%s�� ü���� %d ���ҽ��ϴ�.\n", "������", mH);
	//printf("%s�� %s�� ���� �����Ͽ� %d�� %d�� �������� �־����ϴ�.\n", "�����̾�", "������", playerAttackPower, monsterAttackPower);
	//printf("%s�� ü���� %d, %s�� ü���� %d�̵Ǿ����ϴ�.\n","�����̾�", pH, "������", mH1);
	printf("%s�� �����Ͽ� %d �������� �־����ϴ�.\n", "������", monsterAttackPower);
	printf("%s�� ü���� %d ���ҽ��ϴ�.\n", "�����̾�", pH);
	printf("%s�� �����Ͽ� %d �������� �־����ϴ�.\n", "�����̾�", playerAttackPower);
	printf("%s�� ü���� %d ���ҽ��ϴ�.\n", "������", mH1);
		// ���� ���̳ʽ��� �ȶ߰� 0�̶߰�. (0�̵Ǹ� ����̶�� ������ �߰Ե� �Ҽ��� �ֳ���)
	printf("���Ͱ� ����ǰ�� ���������ϴ�.\n");
	printf("����ǰ�� ȹ���Ͻðڽ��ϱ�? y or n\n");

	int y, n;

	//scanf_s("%d", &y);  // n������ ����ǰ ��ȹ���ϰ� �� �� �ֳ���?

	printf("(�ܵ�)*1 (���Ⱝȭ��)*1 �� ȹ���Ͽ����ϴ�.\n");
	printf("\n");
	printf("-��������-\n");
	printf("\n");
	printf("��ȭ���� ȹ���Ͽ����ϴ�. ��ȭ�� �Ͻðڽ��ϱ�? y or n\n");
	
	//scanf_s("%d", &y);  // �ѹ��� �ȵǳ���?

	int attackPower;          

	int basicPower = 10;
	int weaponLevel = 0;
	int growthPower = 3;

	attackPower = basicPower + weaponLevel * growthPower;


	printf("������ �̸� : %s, ������ ���� : %d, ���� ���� Ȯ�� : %f\n", "�ռҵ�", weaponLevel, 100.0);  
	printf("��ȭ�� �����Ͽ����ϴ�. ������ ���ݷ��� �����Ͽ����ϴ�.\n");
	printf("��ȭ �Ŀ� ������ ���ݷ��� %d�� �Ǿ����ϴ�\n", attackPower);



	










}
// <������>
// ����
// ����
// ����
// ����
// ���
// �尩
// �Ź�
// �㸮��
// �����
// ����
// 
// 
// 
//
//
//
//
//
//
//
//
//
//
//
//
//
