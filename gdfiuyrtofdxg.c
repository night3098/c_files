#include<windows.h> 
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

void kill(){
	puts("Вас нашёл злой снеговик, теперь у вас только один путь)))))");
	puts("Надеюсь, вы извлекли из этого урок, ");
	puts("Не ходите где не нужно");
}

void cave() {
	puts("Вы вышли к двум пещерам, в какую вы пойдёте? ( 1, 2) :\n>");
	
	char answer_four[10][10];
	
	scanf("%s", &answer_four);
	
	if(strcmp(answer_four, "1") == 0) {
		kill();
	}
	else{
		kill();
	}
}

void field() {
	puts("Вы на поле, куда вы решитесь пойти? ( право, прямо ) :\n>");
	
	char answer_two[10][10];
	
	scanf("%s", &answer_two);
	
	if(strcmp(answer_two, "право") == 0) {
		kill();
	}
	else{
		cave();
	}
}

void river() {
	puts("Вы вышли к речке и вы не умеете плавать, куда вы пойдёте? ( лево, право ) :\n>");
	
	char answer_three[10][10];
	
	scanf("%s", &answer_three);
	
	if(strcmp(answer_three, "лево") == 0) {
		kill();
	}
	else {
		field();
	}
}

void start() {
	char answer_one[10][10];
	
	puts("Вы оказались в лесу, куда вы пойдёте ( лево, право, прямо ) :\n>");
	
	scanf("%s", &answer_one);
	
	if(strcmp(answer_one, "лево") == 0) {
		river();
	}
	
	if(strcmp(answer_one, "прямо") == 0) {
		puts("Вас нашёл крампус, теперь вы послужите его обедом");
	}
	if(strcmp(answer_one, "право") == 0) {
		field();
	}
	if(strcmp(answer_one, "cheat") == 0) {
		printf("ПОЗДРАВЛЯЮ ВЫ ПРОШЛИ КВЕСТ");
	}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	start();
	
	return 0;
}
