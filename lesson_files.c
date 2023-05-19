#include<windows.h> // русификация
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h>

int main() {
	SetConsoleCP(1251);        //русификация
	SetConsoleOutputCP(1251); // русификация
	
	// СОЗДАЁМ ПЕРЕМЕННУЮ ДЛЯ ХРАНЕНИЯ СТРОК ИЗ ФАЙЛА
	char str[80];
	
	// СОЗДАЁМ УКАЗАТЕЛЬ НА ФАЙЛ
	FILE *file_read;
	
	// 	ОТКРЫВАЕМ ФАЙЛ НА ЧТЕНИЕ
	file_read = fopen("chtoto.txt" , "r");
	
	// СЧИТЫВАЕМ ИЗ ФАЙЛА ДАННЫЕ
	fscanf(file_read, "%s", &str); //  :D	
	
	printf("%s", str);
	
	// закрываем файл
	fclose(file_read);
	
	return 0;
}
