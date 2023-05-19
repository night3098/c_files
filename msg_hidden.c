#include<windows.h> 
#include<stdlib.h>
#include<stdio.h>
#include "encrypt.h"  // подключение своего файла выполняется в кавычках

int main() {
	SetConsoleCP(1251);         //русификация
	SetConsoleOutputCP(1251);   // русификация
	
	char msg[80];
	while(fgets(msg, 80, stdin)) {
		encrypt(msg);
		printf(" %s ", msg);
	}
	
	return 0;
}
