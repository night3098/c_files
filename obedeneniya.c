#include<windows.h> 
#include<stdlib.h>
#include<stdio.h>

typedef union {
//	short *count;
	int *weight;
} quantity;

typedef union {
	const char *name;
	const char *family;
	const int age;
	quantity weight; // �����������
} elefant;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	quantity q;
	q.weight = 165;
	printf("%i\n", q.weight);
	
	elefant simba = {"�����", "����", 23 ,165};
	printf("%s ����� %i ��", simba.name, simba.weight);
	
	return 0;
}
