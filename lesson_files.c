#include<windows.h> // �����������
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h>

int main() {
	SetConsoleCP(1251);        //�����������
	SetConsoleOutputCP(1251); // �����������
	
	// ������� ���������� ��� �������� ����� �� �����
	char str[80];
	
	// ������� ��������� �� ����
	FILE *file_read;
	
	// 	��������� ���� �� ������
	file_read = fopen("chtoto.txt" , "r");
	
	// ��������� �� ����� ������
	fscanf(file_read, "%s", &str); //  :D	
	
	printf("%s", str);
	
	// ��������� ����
	fclose(file_read);
	
	return 0;
}
