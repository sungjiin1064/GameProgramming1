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

	int playerAttackPower = 8;
	int enemyAttackPower = 3;
	int playerStamina = 100;
	int enemyStamina = 50;
	int pH = playerStamina - enemyAttackPower;
	int eH = enemyStamina - playerAttackPower;
	int mH = eH - playerAttackPower;

	printf("%s�� ���� �������� %s�� �������ϴ�.\n", "�����̾�", "������");
	//printf("-��������-\n");
	//printf("%s ü��(%d)   %s ü��(%d)\n", "�����̾�", playerStamina, "������", enemyStamina);
	//printf("%s�� ������ ���� %d ��ŭ �������� �־����ϴ�.\n", "�����̾�", playerAttackPower);
	//printf("%s�� ü���� %d��ŭ ���ҽ��ϴ�.\n", "������", eH);
	//printf("%s�� %s�� ���� �����Ͽ� %d�� %d�� �������� �־����ϴ�.\n", "�����̾�", "������", playerAttackPower, enemyAttackPower);
	//printf("%s�� ü���� %d, %s�� ü���� %d��ŭ ���ҽ��ϴ�.\n","�����̾�", pH, "������", mH);
	//printf("%s�� %s�� ���� �����Ͽ� %d�� %d�� �������� �־����ϴ�.\n", "�����̾�", "������", playerAttackPower, enemyAttackPower);
	//printf("%s�� ü���� %d, %s�� ü���� %d��ŭ ���ҽ��ϴ�.\n", "�����̾�", pH, "������", mH);


}
// F5, ����� ��ư Ŭ��
// �ܼ� â�� "�ȳ� ����" ��½��Ѻ��ڽ��ϴ�.


// 1. ����ϰ� ���� ������ �ۼ��ߴ�.
// 2. �ܾ�, ����, �Ǽ�, ���ڿ� ����ϼ���.

