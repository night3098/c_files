#include<windows.h> // русификация
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h> // для рандома


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	char elements[][20] = {"камень", "ножницы", "бумага"};
	
	srand(time(NULL));
	int rnd = rand() % 3;
	
	char *TheWord;
	
	//printf("%s", TheWord);
	char user_element[10];
	
	int i;
	int winuser = 0;
	int wincopm = 0;
	
	for(i=0; i <3; i++) {
		TheWord = elements[rnd];
		scanf("%s", &user_element);

		if(strcmp(TheWord, "Бумага") == 0 && strcmp(user_element, "Ножницы") == 0) {
			winuser++;
		}
		if(strcmp(TheWord, "Бумага") == 0 && strcmp(user_element, "Камень") == 0) {
			wincopm++;
		}
		
		if(strcmp(TheWord, "Камень") == 0 && strcmp(user_element, "Ножницы") == 0) {
			wincopm++;
		}
		
		if(strcmp(TheWord, "Камень") == 0 && strcmp(user_element, "Бумага") == 0) {
			winuser++;	
		}
		
		if(strcmp(TheWord, "Ножницы") == 0 && strcmp(user_element, "Бумага") == 0) {	
			wincopm++;
		}
		
		if(strcmp(TheWord, "Ножницы") == 0 && strcmp(user_element, "Камень") == 0) {
			winuser++;	
		}
	}
	puts("Количество побед юзера: ");
	printf("\n%i\n", winuser);
	puts("Количество побед компа: ");
	printf("\n%i\n", wincopm);
	return 0;
}
