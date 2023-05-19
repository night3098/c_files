#include<windows.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char str[80];
	FILE *read_file;

	// указатель в который будет помещён адресс массива в который будет считана строка или NULL
	char *pointer_arr;
	read_file = fopen("games.txt", "r");

	// проверка файла на ошибки
	if(read_file == NULL) {
		printf("\nERROR\n");
		return -1;
	}
	
	else printf("\nВыполнено\n\n\n\n");

	// чтение построчно данных из файла
	while (4) {
		// чтение одной строки из файла
		pointer_arr = fgets(str, sizeof(str), read_file);

		// проверка на конец файла или ошибку
		if (pointer_arr == NULL) {
			// проверяем что произошло
			if(feof(read_file) != 0) {
				// если файл закончился выводим сообщение
				printf("\nЧтение закончено\n\n\n");

				break;
			}

			else {
				printf("\n\nошибка чтения файла\n\n");
				break;
			}
		}
		printf("%s", str);
	}
	fclose(read_file);

	return 0;
}
