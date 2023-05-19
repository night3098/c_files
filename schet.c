#include<windows.h> // �����������
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h>

float add_with_price(float price); // ��������

float total = 0.0; // ����� �ר��
short count = 0; // ���������� ���������� ����
short tax_rate = 6; // ��������� ������

float add_with_tax(float f) {
	float tax_percent = 1 + tax_rate/100.0;
	total = total + (f * tax_percent);
	count += 1;
	return total;
}

int main() {
	SetConsoleCP(1251);        //�����������
	SetConsoleOutputCP(1251); // �����������
	
	float val;
	printf("���� �����: ");
	
	while (scanf("%f", &val)) {
		printf("����� �� ������� ������: %.2f\n", add_with_tax(val));
		printf("���� �����: ");
		
		if(val == 'e') {
			break;
		}
	}
	printf("�������� ����: %.2f\n", total);
	printf("���������� ����: %hi\n", count);
	
	return 0;
}
