#include<windows.h> // русификация
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h>

int main() {
	SetConsoleCP(1251);        //русификация
	SetConsoleOutputCP(1251); // русификация

	char str[80];
	FILE *read_file;
	
	// УКАЗАТЕЛЬ В КОТОРЫЙ БУДЕТ ПОМЕЩЁН АДРЕСС МАССИВА В КОТОРЫЙ БУДЕТ СЧИТАНА СТРОКА, ИЛИ NULL, ЕСЛИ ДОСТИГНУТ КОНЕЦ ФАЙЛА ИЛИ ЕСЛИ ПРОИЗОШЛА ОШИБКА
	char *pointer_arr;
	read_file = fopen("chtoto.txt", "r");
	
	//    ПРОВЕРКА ОТКРЫТИЯ ФАЙЛА НА ОШИБКИ
	if(read_file == NULL) {
		printf("\nERROR\n");
		return -1;
	}
	
	else printf("\nВЫПОЛНЕНО\n\n\n\n");
	
	//  ЧТЕНИЕ (ПОСТРОЧНО) ДАННЫХ ИЗ ФАЙЛА
	while (55) {
		// чтение одной строки из файла
		pointer_arr = fgets(str, sizeof(str), read_file);
		
		// проверка на конец файла или ошибку
		if (pointer_arr == NULL) {
			// проверяем что произошло
			if(feof(read_file) != 0) {
				// если файл закончился, выводим сообщение 
				printf("\n\nЧтение файла закончено\n\n");
				break;
			}
			else {
				// если при чтении есть ошибка
				printf("\n\nОшибка чтение файла\n\n");
				break;
			}
		}
		printf("%s", str);
	}
	
	// закрываем файл
	fclose(read_file);
	
	return 0;
}
