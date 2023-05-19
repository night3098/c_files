#include<windows.h> // русификация
#include<stdlib.h>
#include<stdio.h>

char* askText(char *prompt);
void tellStory(char *name, char *location, char *prilag, char *dat, char *locationtwo);


char* askText(char prompt[]) {
	char* txt = malloc(40);   // Выделяем память в куче
	memset(txt, 0, 40);   //  Заполняем выделенную ячейку
	
	puts(prompt);
	scanf("%s", txt);
	return txt;
}

void tellStory(char *name, char *location, char *prilag, char *dat, char *locationtwo) {	
	printf("%s %s %s %s %s %s %s %s %s %s %s %s", "В ", dat, " году король по имени ", name, "решил завоевать соседнее королество, которое называлось ", locationtwo, "\n Оно находилось в ", location, "и было очень", prilag , ".");
}

int main() {
	SetConsoleCP(1251);         //русификация
	SetConsoleOutputCP(1251);   // русификация

	printf("%s\nДобро пожаловать в программу\n\n");
	char *dat = askText("\nВведите год: ");
	char *name = askText("\nВведите имя персонажа: ");
	char *location = askText("\nВведите локацию королества: ");
	char *prilag = askText("\nВведите статус королевства: ");
	char *locationtwo = askText("\nВведите название королевства: ");

	tellStory(name, location, prilag, dat, locationtwo);
	
	return 0;
}
