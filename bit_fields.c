//       ������� ����

#include<windows.h> 
#include<stdlib.h>
#include<stdio.h>


//    unsigned   -  ��������� ������������� ������������� ��������

typedef struct {
	unsigned int first_visit: 1;   // ��� ��� ������ ����� � ��� �����
	unsigned int come_again: 1; // ������ �� �� ����� ����
	unsigned int dolls_count: 4;   // ����� �������� 4 - ��� ���������� ����� � ������  (4 ���� ��� ����� �� ������ 10 )
	unsigned int days_of_week: 3; // ����� �������� 3 - ��� ���������� ����� � ������ ( 3 ���� - ��� ����� �� ������ 7 )
	
} survey;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
//   �� ������� ������ �������� 1 - yes
//   1 - yes
//   0 - no

	survey s = {0, 1, 4, 3};
	printf("%i", s.dolls_count);
	
	return 0;
}
