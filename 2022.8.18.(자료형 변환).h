#include <stdio.h>
// scanf�� ���� ���� �� ��ó����� Erorr �ڵ� 4996�� ��Ȱ��ȭ�մϴ�.
#pragma warning(disable:4996)

void main()
{
	// scanf �Լ�
	int value = 50;

	for (int i = 0; i < 5; i++)
	{
		// ���� �����÷ο� ���� ������ ������ scanf_s�� ����ϵ��� �����մϴ�.
		scanf_s("%d", &value);
		printf("value�� �� : %d", value);
	}

}
