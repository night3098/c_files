#include<windows.h> // �����������
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h>

int main() {
	SetConsoleCP(1251);        //�����������
	SetConsoleOutputCP(1251); // �����������
	
	// ���������� ����� ������ � C++
	int x = 7;
	int y = 2;
	
	float z = float(x)/y;
	
	printf("%f", z);
	
	return 0;
}
