#include<windows.h> // �����������
#include<stdlib.h>
#include<stdio.h>
#include<time.h> // ��� �������

/*
int *address;
& - ���������

*/
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	// code
	
	int x = 10;
	int *address_of_x = &x;
	int y;
	scanf("%i", &y);
	
	*address_of_x = y; // ��������� ���������� ����� ���������
	
	
	printf("%i \n", *address_of_x); //����� ���������� ����� �����
	printf("%i \n", address_of_x); // ����� ������ ����������
	return 0;
}

