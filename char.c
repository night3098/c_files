#include<windows.h> // русификация
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main() {
	SetConsoleCP(1251);        //русификация
	SetConsoleOutputCP(1251); // русификация
	
	char deck[8] = "ace";
	
	//scanf("%i", &deck);
	
	if(strcmp(deck, "king") == 0) {
		printf("Значение карты 4 ");
	}

	
	if(strcmp(deck, "queen") == 0) {
		printf("Значение карты 3 ");
	}

	
	if(strcmp(deck, "ace") == 0) {
		printf("Значение карты 11 ");
	}

	
	if(strcmp(deck, "jack") == 0) {
		printf("Значение карты 2 ");
	}

// сравнение названий цветов

	char color[10] = "green";
	
	if(strcmp(color, "green") == 0) {
		puts("GO!");
	}
	
	else if (strcmp(color, "yellow") == 0) {
		puts("PLEASE WAIT");
	}
	
	else if (strcmp(color, "red") == 0) {
	}		puts("STOP!");

	
	else {
		puts("ERROR");
	}
	

	return 0;
}

