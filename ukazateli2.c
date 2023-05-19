#include<windows.h> // русификация
#include<stdlib.h>
#include<stdio.h>
#include<time.h> // для рандома

void go_to_the_east( int *lat, int *lon);

void go_to_the_east( int *lat, int *lon) {
	*lat -=1;
	*lon +=1;
}

void hz(int *lat2, int *lon2) {
	*lat2 +=1;
	*lon2 -=1;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int i;
	int j;
	int latitude = 10;
	int longitude = 1;
	
	int latitude2 = 1;
	int longitude2 = 10;
	
	for(i=0; i <10; i++) {
		go_to_the_east(&latitude, &longitude);
		printf("\n [%i,%i]", latitude, longitude);
	}
	
	for(j=0;j<10;j++) {
		hz(&latitude2, &longitude2);
		printf("\n [%i,%i]", latitude2, longitude2);
	}
	
	return 0;
}
