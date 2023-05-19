#include<windows.h> 
#include<stdlib.h>
#include<stdio.h>

struct advertising {
	int *numbers_of_ads;
	int *visitors;
	int *average_earnings;
	
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int number = 0;
	int visit = 0;
	int average = 0;
	
	printf("Numbers of ads: ");
	scanf("%i", number); 
	printf("Visitors: ");
	scanf("%i", visit);
	printf("Average earnings: ");
	scanf("%i", average);

	struct advertising log = {number, visit, average};
	
	return 0;
}
