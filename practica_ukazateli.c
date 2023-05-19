#include<windows.h> // русификация
#include<stdlib.h>
#include<stdio.h>
#include<time.h> // для рандома

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	/*
	char s[] = "green";
	char *z = sss;
	int n = sizeof(s);
	int t = sizeof(z);
	int j = &s;
	int k = &z;
	printf("Размер массива : %i", n);
	printf("\n Размер указателя : %i", t);
	
	printf("\nАдрес массива : %s", j);
	printf("\nАдрес указателя на массив : %s", k);
	*/
	
	/*
	char name[10];
	printf("Введите имя: \n");
	scanf("%9s", name); // будет обрезать всё что дальше 9 символов
	printf("\n %s", name);
	*/
	
	/*
	char food[100];
	printf("Введите любимое блюдо\n");
	fgets(food, sizeof(food), stdin);
	scanf("%s", food);
	printf("%s", food);
	*/
	
	// работа с циклом while
	/*
	int i = 10;
	int j = 0;
	while(j < i) {
		printf("%i \n", j);
		j++;
	}
	
	int k =0;
	
	while(1) {
		printf("%i", k);
		k++;
		if(k == 10) {
			break;
		}
	}
	*/
	
	char cityes[40];
	
	while(1) {
		printf("\nВводите любые города. \n");
		printf("\nДля выхода нажмите q\n");
		
		fgets(cityes, sizeof(cityes), stdin);
		
		if(cityes[0] == 'q') {
			break;
		}
		
		else {
			printf("\n%s\n", cityes);
		}
	}
	
	
	return 0;
}
