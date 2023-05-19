#include<windows.h> 
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

char* now() {
	time_t t; // временной тип данных  используется в time.h   поддерживает алгебраические операции
	time(&t);
	return asctime(localtime (&t));
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/*
	char *tm;
	now(tm);
	printf("%s", now());
	*/
	
	//system("msconfig");
	
	//system("taskmgr");
	
	char cmd[120];
	char comment[80];
	char *timestring = NULL;
	fgets(comment, 80, stdin);
	comment[strlen(comment)-1] = 0;
	timestring = now();
	timestring[strlen(timestring)-1] = 0;
	sprintf(cmd, "echo '%s ------ %s' >> reports.log", comment, timestring);
	system(cmd);
	
	return 0;
}
