#include<windows.h> 
#include<stdlib.h>
#include<stdio.h>

typedef struct books {  // ����������� ���������, ����� �������� ���� ����
	char *name;
	char *date;
	struct books *next;   // ��������� �� ���� ����   ����� ��� ��������
}books;

void display(books *start) {
	books *i = start;
	for(;i != NULL; i = i->next) {
		printf("%s %s\n", i->name, i->date);
	}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	struct books secret_room = {"����� ������ � ������ �������", "1998", NULL};
	struct books child = {"����� ������ � ��������� ����", "2016", NULL};
	struct books death = {"����� ������ � ���� ������", "2007", NULL};
	struct books fire = {"����� ������ � ����� ����", "2000", NULL};
	struct books princ = {"����� ������ � �����-����������", "2005", NULL};
	struct books philosopher_stone = {"����� ������ � ����������� ������", "1997", NULL};
	struct books prisoner_of_azkaban = {"����� ������ � ����� ��������", "1999", NULL};
	
	philosopher_stone.next = &secret_room;
	secret_room.next = &prisoner_of_azkaban;
	prisoner_of_azkaban.next = &fire;
	fire.next = &princ;
	princ.next = &death;
	death.next = &child;
	
	struct books fenix = {"����� ������ � ����� �������", "2003", NULL};
	
	display(&philosopher_stone);
	
	printf("==================================================\n");
	
	fire.next = &fenix;
	fenix.next = &princ;
	
	display(&philosopher_stone);
	
	return 0;
}
