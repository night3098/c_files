#include<windows.h> 
#include<stdlib.h>
#include<stdio.h>
#include "encrypt.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	char str[80];
	FILE *read_file;
	FILE *w_file;

	char *pointer_arr;
	char *pointer;

	read_file = fopen("passwords.txt", "r");
	w_file = fopen("encrypt_pass.txt", "w");
	
	if (read_file == NULL) {
		printf("\nERROR\n");
		return -1;
	}
	
	while(1) {
		pointer_arr = fgets(str, sizeof(str), read_file);
		if (pointer_arr == NULL) {
			if(feof(read_file) != 0) {
				printf("\n\nЧтение файла закончено\n\n");
				break;
			}
			else {
				printf("\n\nОшибка чтение файла\n\n");
				break;
			}
		}
		encrypt(str);
		pointer = fgets(str, sizeof(str), w_file);
		
		printf("%s\n", str);
		fprintf(w_file, "\n%s", str);
		
		//decrypt(str);
		//printf("%s", str);
		//fprintf(w_file, "\n%s", str);
	}
	
	fclose(read_file);
	fclose(w_file);
	
	return 0;
}
