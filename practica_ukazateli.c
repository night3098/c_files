#include<windows.h> // �����������
#include<stdlib.h>
#include<stdio.h>
#include<time.h> // ��� �������

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	/*
	char s[] = "green";
	char *z = sss;
	int n = sizeof(s);
	int t = sizeof(z);
	int j = &s;
	int k = &z;
	printf("������ ������� : %i", n);
	printf("\n ������ ��������� : %i", t);
	
	printf("\n����� ������� : %s", j);
	printf("\n����� ��������� �� ������ : %s", k);
	*/
	
	/*
	char name[10];
	printf("������� ���: \n");
	scanf("%9s", name); // ����� �������� �� ��� ������ 9 ��������
	printf("\n %s", name);
	*/
	
	/*
	char food[100];
	printf("������� ������� �����\n");
	fgets(food, sizeof(food), stdin);
	scanf("%s", food);
	printf("%s", food);
	*/
	
	// ������ � ������ while
	/*
	int i = 10;
	int j = 0;
	while(j < i) {
		printf("%i \n", j);
		j++;
	}
	
	int k =0;
	
	while(1) {
		printf("%i", k);
		k++;
		if(k == 10) {
			break;
		}
	}
	*/
	
	char cityes[40];
	
	while(1) {
		printf("\n������� ����� ������. \n");
		printf("\n��� ������ ������� q\n");
		
		fgets(cityes, sizeof(cityes), stdin);
		
		if(cityes[0] == 'q') {
			break;
		}
		
		else {
			printf("\n%s\n", cityes);
		}
	}
	
	
	return 0;
}
