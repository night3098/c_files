#include<windows.h> 
#include<stdlib.h>
#include<stdio.h>
	

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	struct options {
		const char *food;   // ��� ����� ������ ��������
		int exercise_hours;  // ������������ ���
	};
	
	struct animal {
		char *name; 
		char *family;
		
		int *age;
		
		struct options care;   //  ������ ��������� ������ ������ ��������� ��� ����� ������
	};

	struct animal simba = {"�����", "����", 23, {"�����", 16}};       // ��������� ��������� ������ ���������
	
	printf("%s - ��� %s. ��� �������: %i. �� ����� ������ %s. %s ���� %i ����� � �����.", simba.name, simba.family, simba.age, simba.care.food, simba.name, simba.care.exercise_hours);

	
	return 0;
}
