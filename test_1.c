#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<locale.h>

int main() {
	setLocale(LC_ALL, "Rus");
	srand(time(NULL));
	int r = rand()%
	printf("%f", r);
	int n = 0;
	printf("%s %i %s %i %s", n, r);
	puts("HELLO WORLD"); // ����������������� �����
	puts("========================");
	printf("%d", 123); //��������������� �����  %d - ������������
	printf("%f", 5.5);
	return 0;
}
