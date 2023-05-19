#include<windows.h> // русификация
#include<stdlib.h>
#include<stdio.h>

/*

функция всегда должна воззвращать значение, перед названием функции пишется тип возвращаемого значения
если функция ничего не возвращает то используется void
функция main всегда int

void vd() {                     // функция которая ничего не возвращает
	puts("void");
}

*/

void man(char txt[40]); //прототип
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
	SetConsoleCP(1251);         //русификация
	SetConsoleOutputCP(1251);   // русификация
	
	/*
	instruction("Правила игры сапёр\n");
	instruction("Правила игры крестики-нолики\n");
	*/

	int greatest = larger(255856591, 255856590);
	printf("Число %i наибольшее\n", greatest);

	int c = "";
	scanf("%i", &c);

	int zx = smile(sm);
	scanf("%i", &sm);


	
	
	return 0;
}
