#include<windows.h> 
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

void kill(){
	puts("��� ����� ���� �������� ������ � ��� ������ ���� ����)))))");
	puts("�������, �� �������� �� ����� ����, ");
	puts("�� ������ ��� �� �����");
}


void start() {
	char *answer_one;
	char *answer_four;
	char *answer_three;
	char *answer_two;
	
	puts("�� ��������� � ����, ���� �� ������ ( ����, �����, ����� ) :\n>");
	
	scanf("%s", &answer_one);
	
	if(strstr(answer_one, "����")) {
		puts("�� ����� � ����� � �� �� ������ �������, ���� �� ������? ( ����, ����� ) :\n>");
	
		scanf("%s", &answer_three);
	
		if(strstr(answer_three, "����")) {
			kill();
		}
		else {
			puts("�� �� ����, ���� �� �������� �����? ( �����, ����� ) :\n>");

			scanf("%s", &answer_two);
	
			if(strstr(answer_two, "�����")) {
				kill();
			}
			else{
				puts("�� ����� � ���� �������, � ����� �� ������? ( 1, 2) :\n>");

				scanf("%s", &answer_four);
	
				if(strstr(answer_four, "1")) {
					kill();
				}
				else{
					kill();
				}
			}
		}
	}
	
	if(strstr(answer_one, "�����")) {
		puts("��� ����� �������, ������ �� ��������� ��� ������");
	}
	if(strstr(answer_one, "�����")) {
		puts("�� �� ����, ���� �� �������� �����? ( �����, ����� ) :\n>");

		scanf("%s", &answer_two);
	
		if(strstr(answer_two, "�����")) {
			kill();
		}
		else{
			puts("�� ����� � ���� �������, � ����� �� ������? ( 1, 2) :\n>");

			scanf("%s", &answer_four);
	
			if(strstr(answer_four, "1")) {
				kill();
			}
			else{
				kill();
			}
		}
	}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	start();
	
	return 0;
}
