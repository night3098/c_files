#include<windows.h> 
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<stdarg.h>

// create an enumeration with the name of cocktails
enum cocktails {banana_milk, chocolate_milk, avocado_honey, fruit_cream, strawberry_icecream};

float price(enum cocktails c) {
	switch(c) {
		case banana_milk :
			return 109.93;
		case chocolate_milk :
			return 159.53;
		case avocado_honey :
			return 199.28;
		case fruit_cream :
			return 170.13;
		case strawberry_icecream :
			return 190.52;
	}
	
	return 0;
}

float total(float args, ...) {
	va_list ap;
	va_start(ap, args);
	int i;
	float total = 0;
	
	for(i=0;i<args;i++) {
		enum cocktails c = va_arg(ap, enum cocktails);
		total = total + price(c);
	}
	
	va_end(ap);
	return total;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	printf("Цена напитка: %.2f0", price(banana_milk));
	printf("Цена напитка: %.2f0", price(chocolate_milk));
	total(2, price(banana_milk), price(chocolate_milk));
	
	return 0;
}
