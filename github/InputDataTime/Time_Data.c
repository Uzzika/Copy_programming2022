#include <stdio.h>
#include <locale.h>
#include <math.h>

// ���������� ������� �������
int main() {
	// ���������

	setlocale(LC_ALL, "rus");

	// ���������� ����������

	int day, month, year, hour, minute, second;

	// �������������

	printf("������� ����: ");
	scanf_s("%d.%d.%d", &day, &month, &year);
	system("cls");
	printf("������� �����: ");
	scanf_s("%d:%d:%d", &hour, &minute, &second);
	system("cls");

	// ���������� ������

	//����� ����������

	printf("� ������� %d.%d.%d %d:%d:%d\n", day, month, year, hour, minute, second);
	system("pause");
	return 0;
}
