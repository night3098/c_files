#include<windows.h> // русификация
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main() {
	SetConsoleCP(1251);        //русификация
	SetConsoleOutputCP(1251); // русификация
/*
	int i;
	int b;

	for(i=0; i<50; i++) {
		printf("%i %s\n", i, ":)");
	}

	for(i=50; i>0; i--) {
		printf("%i %s\n", i, ":)");
	}
	
	puts("конец цикла");
*/

	// генератор цифр

	int i;
	int rnd;
	srand(time(NULL));
	rnd = rand() % 10;
	
	for(i=0; i<10; i++) {
		rnd = rand() % 10000000;
		printf("%i %s\n", rnd, "");
	}
	
	char fruits[12][30] = {"яблоко", "лимон", "лайм", "апельсин", "груша", "банан", "мандарин", "киви", "персик", "манго", "ананас", "кокос"};
	
	//printf("%s", fruits[1]);
	//вывод первого символа из слова
	//printf("%c", fruits[1][0], ":");

	// вывод рандомного слова из массива
	int j;
	for (j=0; j<10; j++){

		srand(time(NULL));
		rnd = rand() % 12;
	}
	printf("\n%s", fruits[rnd]);
	

	return 0;
}

