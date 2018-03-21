#include <stdio.h>

/*Os programas (trechos de código) abaixo possuem erros. Qual(is)? Como deveriam
ser?*/
int main () {	

	int x, *p;
	x = 100;
	//P é uma variável do tipo ponteiro, então na linha abaixo deve ser p = endereço de x.
	p = &x;
	printf("Valor de p: %d.\n", *p);

    return 0;
}
