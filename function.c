#include<windows.h> // �����������
#include<stdlib.h>
#include<stdio.h>

/*

������� ������ ������ ����������� ��������, ����� ��������� ������� ������� ��� ������������� ��������
���� ������� ������ �� ���������� �� ������������ void
������� main ������ int

void vd() {                     // ������� ������� ������ �� ����������
	puts("void");
}

*/

void man(char txt[40]); //��������
int larger(int a, int b);
int cube(int c);
int smile(int sm);

int cube(int c) {
	return c*c*c;
}

int larger(int a, int b) {
	
	if(a>b) return a;
	if(a==b) return 0;
	else return b;
}

int smile(int sm) {
	int i;
	for(i = 0, i<sm, i++) {
		printf("%s :) \n");
	}
}

void instruction(char txt[40]) {
	printf(txt);
}

int main() {
	SetConsoleCP(1251);         //�����������
	SetConsoleOutputCP(1251);   // �����������
	
	/*
	instruction("������� ���� ����\n");
	instruction("������� ���� ��������-������\n");
	*/

	int greatest = larger(255856591, 255856590);
	printf("����� %i ����������\n", greatest);

	int c = "";
	scanf("%i", &c);

	int zx = smile(sm);
	scanf("%i", &sm);


	
	
	return 0;
}
