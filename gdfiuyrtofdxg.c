#include<windows.h> 
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

void kill(){
	puts("��� ����� ���� ��������, ������ � ��� ������ ���� ����)))))");
	puts("�������, �� �������� �� ����� ����, ");
	puts("�� ������ ��� �� �����");
}

void cave() {
	puts("�� ����� � ���� �������, � ����� �� ������? ( 1, 2) :\n>");
	
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
	puts("�� �� ����, ���� �� �������� �����? ( �����, ����� ) :\n>");
	
	char answer_two[10][10];
	
	scanf("%s", &answer_two);
	
	if(strcmp(answer_two, "�����") == 0) {
		kill();
	}
	else{
		cave();
	}
}

void river() {
	puts("�� ����� � ����� � �� �� ������ �������, ���� �� ������? ( ����, ����� ) :\n>");
	
	char answer_three[10][10];
	
	scanf("%s", &answer_three);
	
	if(strcmp(answer_three, "����") == 0) {
		kill();
	}
	else {
		field();
	}
}

void start() {
	char answer_one[10][10];
	
	puts("�� ��������� � ����, ���� �� ������ ( ����, �����, ����� ) :\n>");
	
	scanf("%s", &answer_one);
	
	if(strcmp(answer_one, "����") == 0) {
		river();
	}
	
	if(strcmp(answer_one, "�����") == 0) {
		puts("��� ����� �������, ������ �� ��������� ��� ������");
	}
	if(strcmp(answer_one, "�����") == 0) {
		field();
	}
	if(strcmp(answer_one, "cheat") == 0) {
		printf("���������� �� ������ �����");
	}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	start();
	
	return 0;
}
