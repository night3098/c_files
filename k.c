#include<windows.h> // �����������
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main() {
	SetConsoleCP(1251);        //�����������
	SetConsoleOutputCP(1251); // �����������

	char str[999999];
	
	int i;
	int g;
	
	FILE *txt;
	
	char theWordCopy[] = {};
	
	char *pointer_arr;
	txt = fopen("kruzo", "r");
	
	
	pointer_arr = fgets(str, sizeof(str), txt);

/*
	for(i=0; i<strlen(pointer_arr); i++) {
		if (strcmp(pointer_arr, "������") == 0) {
			g++;
		}
	}
*/
	fclose(txt);
	printf("%i", g);
	
	return 0;
}
