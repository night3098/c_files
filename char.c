#include<windows.h> // �����������
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main() {
	SetConsoleCP(1251);        //�����������
	SetConsoleOutputCP(1251); // �����������
	
	char deck[8] = "ace";
	
	//scanf("%i", &deck);
	
	if(strcmp(deck, "king") == 0) {
		printf("�������� ����� 4 ");
	}

	
	if(strcmp(deck, "queen") == 0) {
		printf("�������� ����� 3 ");
	}

	
	if(strcmp(deck, "ace") == 0) {
		printf("�������� ����� 11 ");
	}

	
	if(strcmp(deck, "jack") == 0) {
		printf("�������� ����� 2 ");
	}

// ��������� �������� ������

	char color[10] = "green";
	
	if(strcmp(color, "green") == 0) {
		puts("GO!");
	}
	
	else if (strcmp(color, "yellow") == 0) {
		puts("PLEASE WAIT");
	}
	
	else if (strcmp(color, "red") == 0) {
	}		puts("STOP!");

	
	else {
		puts("ERROR");
	}
	

	return 0;
}

