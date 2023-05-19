#include<windows.h> 
#include<stdlib.h>
#include<stdio.h>

typedef struct books {  // рекурсивная структура, будет вызывать сома себя
	char *name;
	char *date;
	struct books *next;   // указатель на саму себя   нужно для рекурсии
}books;

void display(books *start) {
	books *i = start;
	for(;i != NULL; i = i->next) {
		printf("%s %s\n", i->name, i->date);
	}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	struct books secret_room = {"Гарри Поттер и тайная комната", "1998", NULL};
	struct books child = {"Гарри Поттер и Проклятое дитя", "2016", NULL};
	struct books death = {"Гарри Поттер и Дары Смерти", "2007", NULL};
	struct books fire = {"Гарри Поттер и кубок огня", "2000", NULL};
	struct books princ = {"Гарри Поттер и Принц-полукровка", "2005", NULL};
	struct books philosopher_stone = {"Гарри Поттер и философский камень", "1997", NULL};
	struct books prisoner_of_azkaban = {"Гарри Поттер и узник Азкабана", "1999", NULL};
	
	philosopher_stone.next = &secret_room;
	secret_room.next = &prisoner_of_azkaban;
	prisoner_of_azkaban.next = &fire;
	fire.next = &princ;
	princ.next = &death;
	death.next = &child;
	
	struct books fenix = {"Гарри Поттер и Орден Феникса", "2003", NULL};
	
	display(&philosopher_stone);
	
	printf("==================================================\n");
	
	fire.next = &fenix;
	fenix.next = &princ;
	
	display(&philosopher_stone);
	
	return 0;
}
