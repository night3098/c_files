#include<windows.h> 
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

char *name;
char mustache[4];
char facial_scars[4];
char limp[4];
char hair_color[10];

struct form{
	char *name;
	char mustache[4];
	char facial_scars[4];
	char limp[4];
	char hair_color[10];
};

//typedef struct{
//	char *name;
//	char mustache[4];
//	char facial_scars[4];
//	char limp[4];
//	char hair_color[10];
//}form;

char* res() {
	printf("�������� �� ��������� ��������:\n");
	printf("����� �� ������������� ���? yes/no \n ");
	scanf("%s", mustache);
	printf("���� �� ����� �� ���� yes/no \n ");
	scanf("%s", facial_scars);
	printf("������� �� �� yes/no \n ");
	scanf("%s", limp);
	printf("����� ���� �����? \n ");
	scanf("%s", hair_color);
	
	return mustache, facial_scars, limp;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
struct form forms[] ={"���� ������", "yes", "yes", "no", "red",
					 "ϸ�� ��������", "no", "no", "no", "brown",
				     "���� ����������", "no", "yes", "yes", "black",
					 "������ ���������", "no", "yes", "no", "grey",
					 "������ ����������", "yes", "yes", "yes", "white",
					 "���� ����������", "no", "no", "no", "grey",
					 "��� ��", "no", "no", "no", "grey",
					 "������� ����������", "no", "yes", "no", "white"};
	
//	form ivan_lozkin = {"yes", "yes", "no", "red"};
//	form petr_petrovich = {"no", "no", "no", "brown"};
//	form ivan_timofeevich = {"no", "yes", "yes", "black"};
//	form petrov_alexandr = {"no", "yes", "no", "grey"};
//	form chelovechek = {"no", "yes", "no", "white"};
	
	res();
	
//	if ((strcmp(mustache, ivan_lozkin.mustache) == 0) && (strcmp(facial_scars, ivan_lozkin.facial_scars) == 0) && (strcmp(limp , ivan_lozkin.limp) == 0) && (strcmp(hair_color, ivan_lozkin.hair_color) == 0) ){
//		system("cls");	
//		printf("�������������: ���� ������");	
//	}	
//	else {
//		system("cls");
//		printf("������������� �� �������");
//	}
	
	int i;
	
	for(i;i<sizeof(forms)/sizeof(forms[0]);i++) {
		if((strcmp(forms[i].mustache, mustache) == 0) && (strcmp(forms[i].facial_scars, facial_scars) == 0) && (strcmp(forms[i].limp, limp) == 0) && (strcmp(forms[i].hair_color, hair_color) == 0) ) {
			printf("�������������: %s\n", forms[i].name);
		}
		
		//else{
		//	printf("������������� �� ������\n");
		//}
	}
	
	return 0;
}
