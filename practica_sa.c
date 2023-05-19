#include<windows.h> // русификация
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
	
	// УКАЗАТЕЛЬ В КОТОРЫЙ БУДЕТ ПОМЕЩЁН АДРЕСС МАССИВА В КОТОРЫЙ БУДЕТ СЧИТАНА СТРОКА, ИЛИ NULL, ЕСЛИ ДОСТИГНУТ КОНЕЦ ФАЙЛА ИЛИ ЕСЛИ ПРОИЗОШЛА ОШИБКА
	char *pointer_arr;
	read_file = fopen("C:/SemenovArtem/txt/file.json", "a"); // открыавем файл на запсь w+   + нужен для сохранения
																// если нужно добавить данные используем a
	
	printf("Введите первое число: ");
	scanf("%i", &a);
	
	printf("ведите второе число: ");
	scanf("%i", &b);
	
	c = a * b;
	fprintf(read_file, "--------------------------------\n%i * %i = %i\n", a, b, c);
	fclose(read_file);
	
	printf("\n\nУспешно\n\n:)\n\n--------------------------------\nИтог: %i", c);
	
}

void form() {
	char user[20];
	
	FILE *rd;
	
	char *pointer_arr;
	rd = fopen("C:/SemenovArtem/txt/users.txt", "a");
	
	printf("Введите ник:\n");
	scanf("%s", &user);
	fprintf(rd, "\nНовый пользователь: %s", user, "\n");
	
	fclose(rd);
}

void guests() {
	char guest[20];
	
	FILE *rf;
	rf = fopen("C:/SemenovArtem/txt/guest_book.txt", "a");
	
	while (4) {
		printf("\nВведите имя нового пользователя:  ");
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
				printf("\n\nЧтение файла закончено\n\n");
				break;
			}
			else {
				printf("\n\nОшибка чтение файла\n\n");
				break;
			}
		}
		printf("%s", str);
	}
	
	// закрываем файл
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
				printf("\n\nЧтение файла закончено\n\n");
				break;
			}
			else {
				printf("\n\nОшибка чтение файла\n\n");
				break;
			}
		}
		if(strstr(sr, date)) {
			printf("\nнайдено\n");
		}
	}
	printf(pointer_arr);
	fclose(rc);
}


int main() {
	SetConsoleCP(1251);        //русификация
	SetConsoleOutputCP(1251); // русификация
	
	//WriteForUser();
	
	//form();
	//guests();
	pi();
	ppi();
	
	return 0;
}
