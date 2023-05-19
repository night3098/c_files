#include<windows.h> // русификация
#include<stdlib.h>
#include<stdio.h>
#include<time.h> // для рандома
/*
void replaceNumber (int *a, int *b, int *s, int *k);

void replaceNumber (int *a, int *b, int *s, int *k) {
	
	int temp = *a;
	int temp2 = *b;
	int temp3 = *s;
	int temp4 = *k;
	
	*a = temp2;
	*b = temp3;
	*s = temp;
	*k = temp4;
	
	printf("%i %i %i %i \n", *a, *b, *s, *k);
}
*/
void farengate(float *c) {
	*c = (*c * 1.8 ) + 32;
	printf("%f \n", *c);
}

void food(char msg[], char msg2[]) {
	printf("сообщение: %s %s %s", msg, "и сообщение: ", msg2);
	printf("\nсообщение занимает %i байтов\n", sizeof(msg));
	printf("второе сообщение занимает %i байтов\n", sizeof(msg2));
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a = 0;
	int b = 1;
	int s = 2;
	int k = 3;
	
	float c = 10;
	
	char fff[] = "шашлык";
	char ddd[] = "пицца";
	
	farengate(&c);
	//replaceNumber(&a, &b, &s, &k);
	food(fff, ddd);
		
	return 0;
}
