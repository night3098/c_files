#include<windows.h> // �����������
#include<stdlib.h>
#include<stdio.h>

char* askText(char *prompt);
void tellStory(char *name, char *location, char *prilag, char *dat, char *locationtwo);


char* askText(char prompt[]) {
	char* txt = malloc(40);   // �������� ������ � ����
	memset(txt, 0, 40);   //  ��������� ���������� ������
	
	puts(prompt);
	scanf("%s", txt);
	return txt;
}

void tellStory(char *name, char *location, char *prilag, char *dat, char *locationtwo) {	
	printf("%s %s %s %s %s %s %s %s %s %s %s %s", "� ", dat, " ���� ������ �� ����� ", name, "����� ��������� �������� ����������, ������� ���������� ", locationtwo, "\n ��� ���������� � ", location, "� ���� �����", prilag , ".");
}

int main() {
	SetConsoleCP(1251);         //�����������
	SetConsoleOutputCP(1251);   // �����������

	printf("%s\n����� ���������� � ���������\n\n");
	char *dat = askText("\n������� ���: ");
	char *name = askText("\n������� ��� ���������: ");
	char *location = askText("\n������� ������� ����������: ");
	char *prilag = askText("\n������� ������ �����������: ");
	char *locationtwo = askText("\n������� �������� �����������: ");

	tellStory(name, location, prilag, dat, locationtwo);
	
	return 0;
}
