#include<windows.h> // русификация
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h> // для рандома	

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	char words[][9] = {"word", "city", "comp", "text", "exel", "http", "exit", "done", "path"};
	int letters = 3;
	char letter[2];
	int n, i, k, s;
	srand(time(NULL));
	int rnd = rand() % 9;
	char *TheWord = words[rnd];
	
//	printf("%s", TheWord);
	
	char answerArray[20];
	
	char remaining[27] = "";
	
	for(i=0; i<4; i++) {
		answerArray[i] = '*';
	}
	
	printf(answerArray);
	
	while (letters>0) {
		//выводим текущее состояние игры
		printf("%s%s\n", answerArray, "\nВаша буква: ");
		//запрашиваем букву
		scanf("%s", &letter);
		
		for (k=0; k<27;k++) {
			if(remaining[k] != letter[0]) {
				remaining[k] = letter[0];
			}
		}

		//Запускаем цикл for
		for(n=0; n<4; n++) {
			if(letter[0] == TheWord[n]) {
				answerArray[n] = letter[0];
				letters--;
			}
		}
	}
	printf("Вы выйграли");
	return 0;
}
