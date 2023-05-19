#include<windows.h> 
#include<stdlib.h>
#include<stdio.h>

//    структуры можно описывать вне функции 
struct animal {
	char *name; 
	char *family;
	
	int *age;
	float *mass;
};

void zoo (struct animal a) {
	printf("Кличка %s\nСемейство %s\nВозраст %i\nМасса %i", a.name , a.family, a.age, a.mass);
	printf("\n=============================\n");
}

void food(struct animal a) {
	if(a.mass>20) {
		printf("%s %s требует больше 20 кг корма в день", a.family, a.name);
		printf("\n============================================\n");
	}
	
	if(a.mass<20) {
		printf("%s %s требует меньше 20 кг корма в день", a.family, a.name);
		printf("\n============================================\n");
	}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	struct animal elefant = {"Симба", "слон", 10, 1035};
	struct animal monkey = {"Чаппи", "мартышка", 3, 4};
	struct animal dolfin = {"Кокос", "дельфин", 1, 10};
	struct animal gold_fish = {"Голди", "золотая рыбка", 1, 0};
	
	zoo(monkey);
	zoo(elefant);
	zoo(dolfin);
	zoo(gold_fish);
	
	printf("\n====================================================\n");
	food(monkey);
	food(gold_fish);
	food(dolfin);
	food(elefant);
	
	return 0;
}
