#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	printf("Este � um Texto setlocale \"Portuguese\" \n\n");
	system("PAUSE");
	system("CLS");
	printf("Al� mundo! \n\n");
	system("PAUSE");
	return (0);
};
