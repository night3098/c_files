#include<windows.h> // русификация
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h>

float add_with_price(float price); // ПРОТОТИП

float total = 0.0; // СУММА СЧЁТА
short count = 0; // КОЛИЧЕСТВО ЗАКАЗАННЫХ БЛЮД
short tax_rate = 6; // НАЛОГОВАЯ СТАВКА

float add_with_tax(float f) {
	float tax_percent = 1 + tax_rate/100.0;
	total = total + (f * tax_percent);
	count += 1;
	return total;
}

int main() {
	SetConsoleCP(1251);        //русификация
	SetConsoleOutputCP(1251); // русификация
	
	float val;
	printf("Цена блюда: ");
	
	while (scanf("%f", &val)) {
		printf("Итого на текущий момент: %.2f\n", add_with_tax(val));
		printf("Цена блюда: ");
		
		if(val == 'e') {
			break;
		}
	}
	printf("Итоговый счет: %.2f\n", total);
	printf("Количество блюд: %hi\n", count);
	
	return 0;
}
