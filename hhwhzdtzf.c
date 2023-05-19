#include<windows.h> 
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

char *name;
char mustache[4];
char facial_scars[4];
char limp[4];
char hair_color[10];

struct form{
	char *name;
	char mustache[4];
	char facial_scars[4];
	char limp[4];
	char hair_color[10];
};

char* res() {
	printf("Ответьте на несколько вопросов:\n");
	printf("Носит ли подозреваемый усы? yes/no \n ");
	scanf("%s", mustache);
	printf("Есть ли шрамы на лице yes/no \n ");
	scanf("%s", facial_scars);
	printf("Хромает ли он yes/no \n ");
	scanf("%s", limp);
	printf("Какой цвет волос? \n ");
	scanf("%s", hair_color);
	
	return mustache, facial_scars, limp;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	struct form forms[] ={"Иван Ложкин", "yes", "yes", "no", "red",
						 "Пётр Петрович", "no", "no", "no", "brown",
					     "Иван Тимофеевич", "no", "yes", "yes", "black",
						 "Петров Александр", "no", "yes", "no", "grey",
						 "Андрей Тимофеевич", "yes", "yes", "yes", "white",
						 "Иван Генадьевич", "no", "no", "no", "grey",
						 "Кто то", "no", "no", "no", "grey",
						 "Тимофей Витальевич", "no", "yes", "no", "white"};
	
	res();
	
	int i;
	
	for(i;i<sizeof(forms)/sizeof(forms[0]);i++) {
		if((strcmp(forms[i].mustache, mustache) == 0) && (strcmp(forms[i].facial_scars, facial_scars) == 0) && (strcmp(forms[i].limp, limp) == 0) && (strcmp(forms[i].hair_color, hair_color) == 0) ) {
			printf("Подозреваемый: %s\n", forms[i].name);
		}
		//else{
		//	printf("Подозреваемый не найден\n");
		//}
	}
	
	return 0;
}
