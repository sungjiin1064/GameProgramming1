#include <stdio.h>

int main()
{
	int attackPower;          //%d ���

	//���� ���ݷ� ���� : attackPower = �⺻���ݷ� + ���ⷹ�� + ������
	int basicPower = 10;
	int weaponLevel = 0;
	int growthPower = 3;

	attackPower = basicPower + weaponLevel * growthPower;
	//attackPower = 10;
	//float _attackfloatPower;       //%f ���
	//_attackfloatPower = 10.5;

	//printf("��ȭ �Ŀ� ������ ���ݷ��� %f�� �Ǿ����ϴ�", _attackfloatPower);

	printf("������ �̸� : %s, ������ ���� : %d, ���� ���� Ȯ�� : %f\n", "�ռҵ�", weaponLevel, 0.8);     // %�ڿ��̸��̸� s, �����̸� d�ε�
	printf("��ȭ�� �����Ͽ����ϴ�. ������ ���ݷ��� �����Ͽ����ϴ�.\n");
	printf("��ȭ �Ŀ� ������ ���ݷ��� %d�� �Ǿ����ϴ�\n", attackPower);

	printf("\n");

	printf("���� ���� 1 : �簢���� ���̸� ���Ͻÿ�\n");

	int width, height, extent;
	//width = 3;
	//height = 5;
	//extent = width * height;
    
	printf("������ ���̸� �Է����ּ���.\n");
	scanf_s("%d", &width);
	printf("������ ���̸� �Է����ּ���.\n");
	scanf_s("%d", &height);

	extent = width * height;
	printf("�簢���� ���̴� %d�Դϴ�.\n", extent);














}