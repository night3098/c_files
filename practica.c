#include<windows.h> // �����������
#include<stdlib.h>
#include<stdio.h>
#include<time.h> // ��� �������

void game(); // �������� �������

void game() {
	char programming[][9] = {"Editor", "Data", "Python", "Java", "Bash", "Function", "Linux"};
	
	srand(time(NULL));      // ������� ��������� �����
	
	int rnd = rand() % 6;
	
	//�������� �� ������� ����� �� rnd
	char* theWord;
	theWord = programming[rnd];
	// ����� �����
	char theWordCopy[] = {};
	strcpy(theWordCopy, theWord); // ctrcpy(���� ����������, ��� ����������);
	
	//printf("%s %s", theWord, theWordCopy);
	
	int i, index1, index2, j;
	char temp[2];
	for(i=0; i<strlen(theWordCopy); i++) {
		index1 = (rand() % strlen(theWordCopy));
		index2 = (rand() % strlen(theWordCopy));
		temp[0] = theWordCopy[index1];
		theWordCopy[index1] = theWordCopy[index2];
		theWordCopy[index2] = temp[0];
	}
	
	printf("%s \n", theWordCopy);
	char word[20];
	scanf("%s", word);
	
	for(j=0; j < 1; j++) {
		if(strcmp(word, theWord) == 0) {
			printf("%s \n", " �������");
			break;
		}

		else {
			printf("%s \n", " ��������");
		}
	}
	
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int k;
	
	for(k = 0; k < 3; k++) {
		game();
	}
	
	return 0;
}

