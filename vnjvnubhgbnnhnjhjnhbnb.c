#include<windows.h> 
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

void kill(){
	puts("Вас нашёл злой снеговик теперь у вас только один путь)))))");
	puts("Надеюсь, вы извлекли из этого урок, ");
	puts("Не ходите где не нужно");
}


void start() {
	char *answer_one;
	char *answer_four;
	char *answer_three;
	char *answer_two;
	
	puts("Вы оказались в лесу, куда вы пойдёте ( лево, право, прямо ) :\n>");
	
	scanf("%s", &answer_one);
	
	if(strstr(answer_one, "лево")) {
		puts("Вы вышли к речке и вы не умеете плавать, куда вы пойдёте? ( лево, право ) :\n>");
	
		scanf("%s", &answer_three);
	
		if(strstr(answer_three, "лево")) {
			kill();
		}
		else {
			puts("Вы на поле, куда вы решитесь пойти? ( право, прямо ) :\n>");

			scanf("%s", &answer_two);
	
			if(strstr(answer_two, "право")) {
				kill();
			}
			else{
				puts("Вы вышли к двум пещерам, в какую вы пойдёте? ( 1, 2) :\n>");

				scanf("%s", &answer_four);
	
				if(strstr(answer_four, "1")) {
					kill();
				}
				else{
					kill();
				}
			}
		}
	}
	
	if(strstr(answer_one, "прямо")) {
		puts("Вас нашёл крампус, теперь вы послужите его обедом");
	}
	if(strstr(answer_one, "право")) {
		puts("Вы на поле, куда вы решитесь пойти? ( право, прямо ) :\n>");

		scanf("%s", &answer_two);
	
		if(strstr(answer_two, "право")) {
			kill();
		}
		else{
			puts("Вы вышли к двум пещерам, в какую вы пойдёте? ( 1, 2) :\n>");

			scanf("%s", &answer_four);
	
			if(strstr(answer_four, "1")) {
				kill();
			}
			else{
				kill();
			}
		}
	}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	start();
	
	return 0;
}
