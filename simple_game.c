#include<windows.h> // русификация
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main() {
	SetConsoleCP(1251);        //русификация
	SetConsoleOutputCP(1251); // русификация

// Игра
	int rnd, user_n;
	srand(time(NULL));
	rnd = rand() % 10;
	
	printf("%i", rnd, "\n");	
	printf("Угадайте число от 0 до 10\n");
	
	scanf("%i", &user_n);
	
	if(user_n == rnd) {
		puts("Число угадано");
		return 1;
	}
	
	else{
		if(rnd > user_n) {
			puts("Моё число больше");
		}
		else{
			puts("Моё число меньше");
		}
	}
	
	int decks;
	puts("Введите количество колод: ");
	scanf("%i", &decks);
	
	if(decks < 1){
		puts("Введено недопустимое значение");
		return 1;
	}

	else{
		printf("Всего карт %i\n ", (decks * 52));
	}

	return 0;
}
