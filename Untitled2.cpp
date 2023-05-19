#include<windows.h> // русификация
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h>

int main() {
	SetConsoleCP(1251);        //русификация
	SetConsoleOutputCP(1251); // русификация
	
	// приведение типов данных в C++
	int x = 7;
	int y = 2;
	
	float z = float(x)/y;
	
	printf("%f", z);
	
	return 0;
}
