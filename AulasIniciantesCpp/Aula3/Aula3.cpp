#include <stdio.h>
#include <stdlib.h>

int main(void){
	int numeiroInteiro;
	char caracterLetra;
	float pontoFlutuante;

	numeiroInteiro = (55);
	caracterLetra = ('H');
	pontoFlutuante = (55.467F);

	printf(("Variavel Tipo (int) Valor:....... %d \n\n"), (numeiroInteiro));
	printf(("Variabel Tipo (char) Valor:...... %c \n\n"), (caracterLetra));
	printf(("Variavel Tipo (float) Valor:..... %f \n\n"), (pontoFlutuante));
	system("PAUSE");
	return(0);
};