#include<windows.h> 
#include<stdlib.h>
#include<stdio.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int num[9][1] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	int i;

	for(i=0; i<9; i++) {
		if(num[i] == 1) {
			printf("%s \n 1st");
		}
		
		if(num[i] == 2) {
			printf("%s \n 2nd");
		}
		
		//if(strcmp(num[i], "3")==0) {
		//	printf("%s \n 3rd");
		//}
		else {
			printf("%i \n ", num[i], "%s th");
		}
	}

	return 0;
}
