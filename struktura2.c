#include<windows.h> 
#include<stdlib.h>
#include<stdio.h>
	

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	struct options {
		const char *food;   // что любят кушать животные
		int exercise_hours;  // длительность сна
	};
	
	struct animal {
		char *name; 
		char *family;
		
		int *age;
		
		struct options care;   //  создаём структуру внутри другой структуры под своим именем
	};

	struct animal simba = {"Симба", "Слон", 23, {"траву", 16}};       // описываем структуру внутри структуры
	
	printf("%s - это %s. Его возраст: %i. Он любит кушать %s. %s спит %i часов в сутки.", simba.name, simba.family, simba.age, simba.care.food, simba.name, simba.care.exercise_hours);

	
	return 0;
}
