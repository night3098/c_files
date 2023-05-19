#include<windows.h> // русификация
#include<stdlib.h>
#include<stdio.h>

void chtoto() {
	/*
	char str1[10] = "012453456435633"; //  в каком массиве искать
	char str2[3]="33"; // какой символ искать
	
	char *istr; 
	istr = strstr(str1, str1); // где ищем что ищем
	if(istr == NULL) {
		printf("Строка не найдена");
	}
	else {
		printf("искомая строка начинается с символа %d\n", istr-str1 +1);
	}
	*/
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	char str[999999];
	FILE *read_file;
	
	char slovo[10] = "остров";
	
	int g = 0;
	int i;
	
	FILE *log;
	
	char *istr; 

	// УКАЗАТЕЛЬ В КОТОРЫЙ БУДЕТ ПОМЕЩЁН АДРЕСС МАССИВА В КОТОРЫЙ БУДЕТ СЧИТАНА СТРОКА, ИЛИ NULL, ЕСЛИ ДОСТИГНУТ КОНЕЦ ФАЙЛА ИЛИ ЕСЛИ ПРОИЗОШЛА ОШИБКА
	char *pointer_arr;
	read_file = fopen("C:/SemenovArtem/books/kruzo.txt", "r");
	
	log = fopen("C:/SemenovArtem/books/log.json", "a");
	
	if(read_file == NULL) {
		printf("\nERROR\n");
		return -1;
	}
	
	else printf("\nВЫПОЛНЕНО\n\n\n\n");
	
	while (1000) {
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
		//printf("%s", str);
		}
	}
	istr = strstr(str, slovo); // где ищем что ищем
	if(istr == NULL) {
		g++;
	}
	
	//fprintf(log, "\nСлово %s встречается в книге %i раз", slovo, g);
	fclose(log);
	// закрываем файл
	fclose(read_file);
	
	printf("%s", str);
	
	printf("Слово %s встречается в книге %i раз", slovo, g);
	
	//printf(" %d\n", istr - str);
	
	return 0;
}
