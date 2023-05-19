#include<windows.h> 
#include<stdlib.h>
#include<stdio.h>
#include "encrypt.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	FILE *w_file;
	w_file = fopen("encrypt_pass.txt", "w");
	char *pointer;
	char str[80];
	
	while(1) {	
		pointer = fgets(str, sizeof(str), w_file);
		decrypt(str);
		printf("%s", str);
		
	}
	
	return 0;
}
