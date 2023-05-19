//       битовые поля

#include<windows.h> 
#include<stdlib.h>
#include<stdio.h>


//    unsigned   -  запрещает использование отрицательных значений

typedef struct {
	unsigned int first_visit: 1;   // это ваш первый поход в наш театр
	unsigned int come_again: 1; // пришли бы вы снова сюды
	unsigned int dolls_count: 4;   // здесь значение 4 - это количество битов в памяти  (4 бита для чисел не больше 10 )
	unsigned int days_of_week: 3; // здесь значение 3 - это количество битов в памяти ( 3 бита - для чисел не больше 7 )
	
} survey;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
//   по дефолту ставим значение 1 - yes
//   1 - yes
//   0 - no

	survey s = {0, 1, 4, 3};
	printf("%i", s.dolls_count);
	
	return 0;
}
