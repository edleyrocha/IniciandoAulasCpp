#include <stdio.h>
#include <stdlib.h>

int olaMundoA(void){
	printf("Ola Mundo - Esta e uma Funcao (A).\n \n");
	return (0);
};

void olaMundoB(){
	printf("Ola Mundo - Esta e uma Funcao (B).\n \n");
	return;
};

int main(void){
	printf("Escreva uma Funcao logo abaixo: \n \n");
	olaMundoA();
	olaMundoB();
	system("PAUSE");
	return(0);
};