#include<windows.h> 
#include<stdlib.h>
#include<stdio.h>

typedef union {
	float lemon;
	short lime;
} fruit_order;

typedef struct {
	const char *name;
	int orange_juice;
	float agave_juice;
	int sugar;
	float water;
	fruit_order amount;
}cocktaile;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	cocktaile usa = {"Margarita", 4, 0.4, 2, 0.5, .amount.lemon=4.3, .amount.lime=2};
	
	printf("Ќазвание: %s \n количество лимона: %f количество лайма: %hx количество воды: %f количество сахара %f\n ", usa.name, usa.amount.lemon, usa.amount.lime, usa.water, usa.sugar);
	
	return 0;
}
