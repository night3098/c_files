#include<windows.h> 
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<stdarg.h>

void print_ints(int args, ...) {
	va_list ap;
	va_start(ap, args);
	int i;
	for(i=0;i<args;i++) {
		printf(("Аргумент: %i\n"), va_arg(ap, int));
	}
	va_end(ap);
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	print_ints(3, 48, 02, 92);
	printf("==========================\n");
	print_ints(5, 764, 893, 98, 13, 63);
	
	return 0;
}
