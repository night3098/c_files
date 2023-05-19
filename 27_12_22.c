#include<windows.h> 
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

//	prototype of the profile search function. The match parametr is a pointer to a function
//	that has an int return type and takes one char parametr.
void find(int(*match)(char *)); 

char *ads[] = {"���: �������� �������, �������� � ����, ���������� �������� �������, ����� ����",
			   "������: ������, �������� ���� ���������, ���������� �������",
			   "����: �������� �������, ������, ���������� ������� �������",
			   "������: ��������, ��������� �����, ���������� �����������, ����� ����",
			   "����: ��������, �������� � ��������������, ���������� ����������� � �������"};

int num = 5;

char sports_no_music(char *s) {
	return strstr(s, "�����") && !strstr(s, "�����");
}
char tvorchestvo_no_kino(char *s) {
	return strstr(s, "���������") && !strstr(s, "����");
}
char kino_no_music(char *s) {
	return strstr(s, "����") && !strstr(s, "�����");
}


void find(int(*match)(char *)) {
	int i;
	puts("������� ����������:");
	puts("===================");
	for(i=0;i<num;i++) {
		if(match(ads[i])) {
			printf("%s\n", ads[i]);
		}
	}
}


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	find(sports_no_music);
	find(kino_no_music);
	find(tvorchestvo_no_kino);
	
	return 0;
}
