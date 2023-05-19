#include<windows.h> 
#include<stdlib.h>
#include<stdio.h>

typedef struct location {  // рекурсивная структура, будет вызывать сома себя
	char *name;
	char *addr;
	char *timeOpen;
	char *timeClose;
	struct location *next;   // указатель на саму себя   нужно для рекурсии
}location;

void display(location *start) {
	location *i = start;
	for(;i != NULL; i = i->next) {
		printf("%s находится по адресу %s. Время открытия: %s, время закрытия: %s\n", i->name, i->addr, i->timeOpen, i->timeClose);
	}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
//	struct location tour[] = {{"Музей солнца", "ул. Лазурная 2", "10:00", "19:00", NULL},
//					  		  {"Театр оперы и балета", "Красный Проспект", "9:00", "20:00", NULL},
//					   		  {"Ещё какой-то театр", "где-то там", "0:00", "0:00", NULL},
//							  {"Ещё один музей", "ул. Есенина 9", "11:00", "22:00", NULL}};

	struct location sun_museum = {"Музей солнца", "ул. Лазурная 2", "10:00", "19:00", NULL};
	struct location opera = {"Театр оперы и балета", "Красный Проспект", "9:00", "20:00", NULL};
	struct location other_teatr = {"Ещё какой-то театр", "где-то там", "0:00", "0:00", NULL};
	struct location other_museum = {"Ещё один музей", "ул. Есенина 9", "11:00", "22:00", NULL};
	struct location monument = {"Монумент славы", "ул. Ломоносова", "00:00", "00:00", NULL};
	struct location zoopark = {"Зоопарк", "ул. какая-то", "8:00", "20:00", NULL};

	//sun_museum.next = &opera;
	//opera.next = &other_teatr;
	//other_teatr.next = &monument;
	//monument.next = &other_museum;
	
	//zoopark.next = &sun_museum;

	//display(&zoopark);
	
	printf("Музей солнца - 1\n");
	printf("Театр оперы и балета - 2\n");
	printf("Ещё какой-то театр - 3\n");
	printf("Ещё один музей - 4\n");
	printf("Монумент славы - 5\n");
	printf("Зоопарк - 6\n");
	
	int x;
	
	printf("введите номер локации с которой надо начать: ");
	
	scanf("%i", &x);
	
	if(x == 1) {
		sun_museum.next = &opera;
		opera.next = &other_teatr;
		other_teatr.next = &other_museum;
		other_museum.next = &monument;
		monument.next = &zoopark;
		
		display(&sun_museum);
	}
		if(x == 2) {
		opera.next = &other_teatr;
		other_teatr.next = &other_museum;
		other_museum.next = &monument;
		monument.next = &zoopark;
		
		display(&opera);
	}
		if(x == 3) {
		other_teatr.next = &other_museum;
		other_museum.next = &monument;
		monument.next = &zoopark;
		
		display(&other_teatr);
	}
		if(x == 4) {
		other_museum.next = &monument;
		monument.next = &zoopark;
		
		display(&other_museum);
	}
		if(x == 5) {
		monument.next = &zoopark;
		
		display(&monument);
	}
		if(x == 6) {		
		display(&zoopark);
	}
	return 0;
}
