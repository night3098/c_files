#include<windows.h> 
#include<stdlib.h>
#include<stdio.h>

typedef struct location {  // ����������� ���������, ����� �������� ���� ����
	char *name;
	char *addr;
	char *timeOpen;
	char *timeClose;
	struct location *next;   // ��������� �� ���� ����   ����� ��� ��������
}location;

void display(location *start) {
	location *i = start;
	for(;i != NULL; i = i->next) {
		printf("%s ��������� �� ������ %s. ����� ��������: %s, ����� ��������: %s\n", i->name, i->addr, i->timeOpen, i->timeClose);
	}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
//	struct location tour[] = {{"����� ������", "��. �������� 2", "10:00", "19:00", NULL},
//					  		  {"����� ����� � ������", "������� ��������", "9:00", "20:00", NULL},
//					   		  {"��� �����-�� �����", "���-�� ���", "0:00", "0:00", NULL},
//							  {"��� ���� �����", "��. ������� 9", "11:00", "22:00", NULL}};

	struct location sun_museum = {"����� ������", "��. �������� 2", "10:00", "19:00", NULL};
	struct location opera = {"����� ����� � ������", "������� ��������", "9:00", "20:00", NULL};
	struct location other_teatr = {"��� �����-�� �����", "���-�� ���", "0:00", "0:00", NULL};
	struct location other_museum = {"��� ���� �����", "��. ������� 9", "11:00", "22:00", NULL};
	struct location monument = {"�������� �����", "��. ����������", "00:00", "00:00", NULL};
	struct location zoopark = {"�������", "��. �����-��", "8:00", "20:00", NULL};

	//sun_museum.next = &opera;
	//opera.next = &other_teatr;
	//other_teatr.next = &monument;
	//monument.next = &other_museum;
	
	//zoopark.next = &sun_museum;

	//display(&zoopark);
	
	printf("����� ������ - 1\n");
	printf("����� ����� � ������ - 2\n");
	printf("��� �����-�� ����� - 3\n");
	printf("��� ���� ����� - 4\n");
	printf("�������� ����� - 5\n");
	printf("������� - 6\n");
	
	int x;
	
	printf("������� ����� ������� � ������� ���� ������: ");
	
	scanf("%i", &x);
	
	if(x == 1) {
		sun_museum.next = &opera;
		opera.next = &other_teatr;
		other_teatr.next = &other_museum;
		other_museum.next = &monument;
		monument.next = &zoopark;
		
		display(&sun_museum);
	}
		if(x == 2) {
		opera.next = &other_teatr;
		other_teatr.next = &other_museum;
		other_museum.next = &monument;
		monument.next = &zoopark;
		
		display(&opera);
	}
		if(x == 3) {
		other_teatr.next = &other_museum;
		other_museum.next = &monument;
		monument.next = &zoopark;
		
		display(&other_teatr);
	}
		if(x == 4) {
		other_museum.next = &monument;
		monument.next = &zoopark;
		
		display(&other_museum);
	}
		if(x == 5) {
		monument.next = &zoopark;
		
		display(&monument);
	}
		if(x == 6) {		
		display(&zoopark);
	}
	return 0;
}
