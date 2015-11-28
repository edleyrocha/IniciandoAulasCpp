#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale((LC_ALL), ("Portuguese"));
	printf("Este é um Texto setlocale \"Portuguese\" \n\n");
	system("PAUSE");
	system("CLS");

	printf("Alô mundo! \n\n");
	system("PAUSE");
	system("CLS");

	int numeroInteiro = (2);
	char caracterUnico = ('B');
	printf("O tamanho da Variavel numeroInteiro é:....  %d bytes.\n\n", sizeof(numeroInteiro));
	printf("O tamanho da Variavel caracterUnico é:....  %d bytes. \n\n", sizeof(caracterUnico));
	system("PAUSE");
	system("CLS");

	printf("Digite um numero Inteiro: ");
	int numeroDigitado;
	scanf_s(("%d"), (&numeroDigitado));
	printf(("\n\nO Numero Digitado foi:... %d \n\n"), (numeroDigitado));
	system("PAUSE");
	system("CLS");

	if ((numeroDigitado) < (12)){
		printf(("O Numero Digitado é Menor que 12 - O numero foi... (%d)\n\n"), (numeroDigitado));
	}
	else{
		printf(("O Numero Digitado é Maior que 12 - O numero foi... (%d)\n\n"), (numeroDigitado));
	};
	system("PAUSE");
	system("CLS");
	return (0);
};
