#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<time.h>

char words[][10] = {"гора", "равнина", "холм", "риф", "обрыв", "овраг", "опушка"};

int main(){
	setlocale(LC_ALL, "Rus");
	//char words[10];
	
	srand(time(0));
	int rnd = rand() %7;
	char *rnd_word = words[rnd];
	char answer[10] = "";
	int letters = strlen(rnd_word);
	char your_letter[2];
	int i;
	
	for(i=0; i<strlen(rnd_word); i++){
		answer[i] = '*';
	}
	
	while(letters>0){
		printf("%s", answer);
		scanf("%s", &your_letter);
		int j;
		for(j=0; j<strlen(rnd_word); j++){
			if(rnd_word[j] == your_letter[0]){
				answer[j] = '!';
				letters--;
			}
		}
		
	}
}
