#include<windows.h> // �����������
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void WriteFromUser();
void form();
void guests();

void WriteForUser() {
	int a, b, c;

	char str[80];
	FILE *read_file;
	
	// ��������� � ������� ����� ����٨� ������ ������� � ������� ����� ������� ������, ��� NULL, ���� ��������� ����� ����� ��� ���� ��������� ������
	char *pointer_arr;
	read_file = fopen("C:/SemenovArtem/txt/file.json", "a"); // ��������� ���� �� ����� w+   + ����� ��� ����������
																// ���� ����� �������� ������ ���������� a
	
	printf("������� ������ �����: ");
	scanf("%i", &a);
	
	printf("������ ������ �����: ");
	scanf("%i", &b);
	
	c = a * b;
	fprintf(read_file, "--------------------------------\n%i * %i = %i\n", a, b, c);
	fclose(read_file);
	
	printf("\n\n�������\n\n:)\n\n--------------------------------\n����: %i", c);
	
}

void form() {
	char user[20];
	
	FILE *rd;
	
	char *pointer_arr;
	rd = fopen("C:/SemenovArtem/txt/users.txt", "a");
	
	printf("������� ���:\n");
	scanf("%s", &user);
	fprintf(rd, "\n����� ������������: %s", user, "\n");
	
	fclose(rd);
}

void guests() {
	char guest[20];
	
	FILE *rf;
	rf = fopen("C:/SemenovArtem/txt/guest_book.txt", "a");
	
	while (4) {
		printf("\n������� ��� ������ ������������:  ");
		scanf("%s", &guest);
		
		printf("\nHello, %s\n", guest);
		fprintf(rf, "\n%s\n", guest);
		
		if (strcmp(guest, "exit") == 0) {
			break;
		}
	}
	fclose(rf);
}

void pi() {
	char str[80];
	FILE *rc;
	int i;
	
	char *pointer_arr;
	rc = fopen("C:/SemenovArtem/txt/ppi.txt", "r");

	for(i=0; i<3;i++) {
		pointer_arr = fgets(str, sizeof(str), rc);
	
		if (pointer_arr == NULL) {
			if(feof(rc) != 0) {
				printf("\n\n������ ����� ���������\n\n");
				break;
			}
			else {
				printf("\n\n������ ������ �����\n\n");
				break;
			}
		}
		printf("%s", str);
	}
	
	// ��������� ����
	fclose(rc);
}


void ppi() {
	char sr[100000];
	FILE *rc;
	int i;
	char date[30];
	
	scanf("%s", &date);
	
	char *pointer_arr;
	rc = fopen("C:/SemenovArtem/txt/ppi.txt", "r");

	while(2) {
		pointer_arr = fgets(sr, sizeof(sr), rc);
	
		if (pointer_arr == NULL) {
			if(feof(rc) != 0) {
				printf("\n\n������ ����� ���������\n\n");
				break;
			}
			else {
				printf("\n\n������ ������ �����\n\n");
				break;
			}
		}
		if(strstr(sr, date)) {
			printf("\n�������\n");
		}
	}
	printf(pointer_arr);
	fclose(rc);
}


int main() {
	SetConsoleCP(1251);        //�����������
	SetConsoleOutputCP(1251); // �����������
	
	//WriteForUser();
	
	//form();
	//guests();
	pi();
	ppi();
	
	return 0;
}
