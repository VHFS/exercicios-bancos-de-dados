#include <stdio.h>

/*Os programas (trechos de c�digo) abaixo possuem erros. Qual(is)? Como deveriam
ser?*/
int main () {	

	int x, *p;
	x = 100;
	//P � uma vari�vel do tipo ponteiro, ent�o na linha abaixo deve ser p = endere�o de x.
	p = &x;
	printf("Valor de p: %d.\n", *p);

    return 0;
}
