#include<windows.h> // �����������
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

//   sizeof(langs)/sizeof(langs[0])        ����������� ���������� ��������� � �������
/*
void find_lang(char search[20]);

char langs[][20] = {"javascript", "python", "c", "c++", "c#", "yoptascript", "object pascal", "trump script", "pascal", "algol", "basic", "cpl", "haskell ", "lua", "bash", "ruby", "ada", "lisp"};

void find_lang(char search[]) {
	int i = 0;
	
	for (i=0; i < sizeof(langs)/sizeof(langs[0]); i++) {
		if(strstr(langs[i], search)) {
			printf("����� %s  � ������: %i", langs[i], i);
		}
	}
}
*/

/*
void st() {
	char words[40000];
	
	while(1) {
		printf("\n������� ����� �����. \n");
		printf("\n��� ������ ������� 0\n");
		
		fgets(words, sizeof(words), stdin);
		
		printf("���������� �������� ������ %s", words, " - ");
		printf("%d", strlen(words));
		
		if(words[0] == '0') {
			break;
		}
	}
}
*/

char elements[][20] = {"������", "�������", "������"};

void game(char user_element[]) {
	int i = 0;
	
	for (i=0; i < sizeof(elements)/sizeof(elements[0]); i++) {
		if(strstr(elements[i], user_elements)) {
		}
	}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	//char search[20];
	//fgets(search, 20, stdin);
	//search[strlen(search)-1]='\0';

	//find_lang(search);
	
	//st();
	
	char user_element[20];
	fgets(user_element, 20, stdin);
	
	game(user_element);
	
	return 0;
}
