#include <stdio.h>

/*O que est� errado com os programas abaixo? Descubra e indique a solu��o para
consert�-los. Execute-o no computador para ver se o erro foi resolvido.*/ 

int main () {	
	
	int x, *p;
	x = 10;
	p = &x;
	printf ("%d", *p);
    return 0;
}
