#include<windows.h> // �����������
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h> // ��� �������


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	char elements[][20] = {"������", "�������", "������"};
	
	srand(time(NULL));
	int rnd = rand() % 3;
	
	char *TheWord;
	
	//printf("%s", TheWord);
	char user_element[10];
	
	int i;
	int winuser = 0;
	int wincopm = 0;
	
	for(i=0; i <3; i++) {
		TheWord = elements[rnd];
		scanf("%s", &user_element);

		if(strcmp(TheWord, "������") == 0 && strcmp(user_element, "�������") == 0) {
			winuser++;
		}
		if(strcmp(TheWord, "������") == 0 && strcmp(user_element, "������") == 0) {
			wincopm++;
		}
		
		if(strcmp(TheWord, "������") == 0 && strcmp(user_element, "�������") == 0) {
			wincopm++;
		}
		
		if(strcmp(TheWord, "������") == 0 && strcmp(user_element, "������") == 0) {
			winuser++;	
		}
		
		if(strcmp(TheWord, "�������") == 0 && strcmp(user_element, "������") == 0) {	
			wincopm++;
		}
		
		if(strcmp(TheWord, "�������") == 0 && strcmp(user_element, "������") == 0) {
			winuser++;	
		}
	}
	puts("���������� ����� �����: ");
	printf("\n%i\n", winuser);
	puts("���������� ����� �����: ");
	printf("\n%i\n", wincopm);
	return 0;
}
