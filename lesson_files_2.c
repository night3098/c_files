#include<windows.h> // �����������
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h>

int main() {
	SetConsoleCP(1251);        //�����������
	SetConsoleOutputCP(1251); // �����������

	char str[80];
	FILE *read_file;
	
	// ��������� � ������� ����� ����٨� ������ ������� � ������� ����� ������� ������, ��� NULL, ���� ��������� ����� ����� ��� ���� ��������� ������
	char *pointer_arr;
	read_file = fopen("chtoto.txt", "r");
	
	//    �������� �������� ����� �� ������
	if(read_file == NULL) {
		printf("\nERROR\n");
		return -1;
	}
	
	else printf("\n���������\n\n\n\n");
	
	//  ������ (���������) ������ �� �����
	while (55) {
		// ������ ����� ������ �� �����
		pointer_arr = fgets(str, sizeof(str), read_file);
		
		// �������� �� ����� ����� ��� ������
		if (pointer_arr == NULL) {
			// ��������� ��� ���������
			if(feof(read_file) != 0) {
				// ���� ���� ����������, ������� ��������� 
				printf("\n\n������ ����� ���������\n\n");
				break;
			}
			else {
				// ���� ��� ������ ���� ������
				printf("\n\n������ ������ �����\n\n");
				break;
			}
		}
		printf("%s", str);
	}
	
	// ��������� ����
	fclose(read_file);
	
	return 0;
}
