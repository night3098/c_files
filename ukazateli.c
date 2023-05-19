#include<windows.h> // русификация
#include<stdlib.h>
#include<stdio.h>
#include<time.h> // для рандома

/*
int *address;
& - апперсант

*/
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	// code
	
	int x = 10;
	int *address_of_x = &x;
	int y;
	scanf("%i", &y);
	
	*address_of_x = y; // изменение переменной через указатель
	
	
	printf("%i \n", *address_of_x); //Вывод переменной через адрес
	printf("%i \n", address_of_x); // Вывод адреса переменной
	return 0;
}

