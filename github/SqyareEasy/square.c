#include <stdio.h>
#include <locale.h>
#include <math.h>

// ���������� ������� �������
int main() {
	// ���������
	setlocale(LC_ALL, "rus");

	// ���������� ����������
	int a = 5, h = 3;
	float s;

	// �������������
	
	printf("������� ��������� � ������ ������������ (� ������� <a h>): ");
	scanf_s("%d %d", &a, &h);

	// ���������� ������
	s = 0.5 * a * h;

	//����� ����������
	printf("������� ������������ �� �������� %d � ������� %d ����� %2f\n", a, h, s);
	system("pause");
	return 0;
}
