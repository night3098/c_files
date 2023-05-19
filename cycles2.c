#include<windows.h> 
#include<stdlib.h>
#include<stdio.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char cars[6][10] = {"audi", "ferrari", "mclaren", "bugatti", "bently", "lada"};

	int i;

	for(i=0; i<6; i++) {
		//printf("%s\n", cars[i]);
		
		if(strcmp(cars[i], "mclaren") == 0) {
			puts("\n mclaren top))) \n");
		}
		else {
			printf("%s %s\n", "Welcome, ", cars[i]);
		}
	}

	
	char users[4][10] = {"admin", "user", "gamer", "player"};
	
	char user[6];
	
	for(i=0; i<4; i++) {
		scanf("%s", &user);
		
		if(strcmp(users[i], user) == 0) {
			printf("%s\n error");
		}
		else {
			printf("%s\nOK");
		}
	}
	
	return 0;
}
