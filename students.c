#include<windows.h> 
#include<stdlib.h>
#include<stdio.h>

struct student {
	const char *lastname;
	const char *name;
	int group;
	float averageMark;
};

struct student students[] =
{"������", "ϸ��", 305, 3.65,
"��������", "����", 48, 4.82,
"��������", "������", 1, 3.21,
"������", "����", 227, 4.13,
"��������","�����", 376, 2.44,
};

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int i;
	for(i=0;i<sizeof(students)/sizeof(students[0]);i++) {
		if(students[i].averageMark >= 4.00) {
			printf("\n%s %s ������: %i ������� ����: %f\n", students[i].lastname, students[i].name, students[i].group, students[i].averageMark);
		}
		else {
			printf("������ �� ������");
		}
	}
	return 0;
}
