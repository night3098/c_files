#include<windows.h> // �����������
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main() {
	SetConsoleCP(1251);        //�����������
	SetConsoleOutputCP(1251); // �����������
/*
	int i;
	int b;

	for(i=0; i<50; i++) {
		printf("%i %s\n", i, ":)");
	}

	for(i=50; i>0; i--) {
		printf("%i %s\n", i, ":)");
	}
	
	puts("����� �����");
*/

	// ��������� ����

	int i;
	int rnd;
	srand(time(NULL));
	rnd = rand() % 10;
	
	for(i=0; i<10; i++) {
		rnd = rand() % 10000000;
		printf("%i %s\n", rnd, "");
	}
	
	char fruits[12][30] = {"������", "�����", "����", "��������", "�����", "�����", "��������", "����", "������", "�����", "������", "�����"};
	
	//printf("%s", fruits[1]);
	//����� ������� ������� �� �����
	//printf("%c", fruits[1][0], ":");

	// ����� ���������� ����� �� �������
	int j;
	for (j=0; j<10; j++){

		srand(time(NULL));
		rnd = rand() % 12;
	}
	printf("\n%s", fruits[rnd]);
	

	return 0;
}

