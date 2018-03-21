#include <stdio.h>

/*O que está errado com os programas abaixo? Descubra e indique a solução para
consertá-los. Execute-o no computador para ver se o erro foi resolvido.*/ 

int main () {	
	
	int x, *p;
	x = 10;
	p = &x;
	printf ("%d", *p);
    return 0;
}
