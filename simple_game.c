#include<windows.h> // �����������
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main() {
	SetConsoleCP(1251);        //�����������
	SetConsoleOutputCP(1251); // �����������

// ����
	int rnd, user_n;
	srand(time(NULL));
	rnd = rand() % 10;
	
	printf("%i", rnd, "\n");	
	printf("�������� ����� �� 0 �� 10\n");
	
	scanf("%i", &user_n);
	
	if(user_n == rnd) {
		puts("����� �������");
		return 1;
	}
	
	else{
		if(rnd > user_n) {
			puts("�� ����� ������");
		}
		else{
			puts("�� ����� ������");
		}
	}
	
	int decks;
	puts("������� ���������� �����: ");
	scanf("%i", &decks);
	
	if(decks < 1){
		puts("������� ������������ ��������");
		return 1;
	}

	else{
		printf("����� ���� %i\n ", (decks * 52));
	}

	return 0;
}
