#include<windows.h> // �����������
#include<stdlib.h>
#include<stdio.h>

void chtoto() {
	/*
	char str1[10] = "012453456435633"; //  � ����� ������� ������
	char str2[3]="33"; // ����� ������ ������
	
	char *istr; 
	istr = strstr(str1, str1); // ��� ���� ��� ����
	if(istr == NULL) {
		printf("������ �� �������");
	}
	else {
		printf("������� ������ ���������� � ������� %d\n", istr-str1 +1);
	}
	*/
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	char str[999999];
	FILE *read_file;
	
	char slovo[10] = "������";
	
	int g = 0;
	int i;
	
	FILE *log;
	
	char *istr; 

	// ��������� � ������� ����� ����٨� ������ ������� � ������� ����� ������� ������, ��� NULL, ���� ��������� ����� ����� ��� ���� ��������� ������
	char *pointer_arr;
	read_file = fopen("C:/SemenovArtem/books/kruzo.txt", "r");
	
	log = fopen("C:/SemenovArtem/books/log.json", "a");
	
	if(read_file == NULL) {
		printf("\nERROR\n");
		return -1;
	}
	
	else printf("\n���������\n\n\n\n");
	
	while (1000) {
		pointer_arr = fgets(str, sizeof(str), read_file);
		if (pointer_arr == NULL) {
			if(feof(read_file) != 0) {
				printf("\n\n������ ����� ���������\n\n");
				break;
			}
			else {
				printf("\n\n������ ������ �����\n\n");
				break;
			}
		//printf("%s", str);
		}
	}
	istr = strstr(str, slovo); // ��� ���� ��� ����
	if(istr == NULL) {
		g++;
	}
	
	//fprintf(log, "\n����� %s ����������� � ����� %i ���", slovo, g);
	fclose(log);
	// ��������� ����
	fclose(read_file);
	
	printf("%s", str);
	
	printf("����� %s ����������� � ����� %i ���", slovo, g);
	
	//printf(" %d\n", istr - str);
	
	return 0;
}
