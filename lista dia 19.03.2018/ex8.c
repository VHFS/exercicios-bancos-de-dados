#include <stdio.h>

//Quais serão os valores de x, y e p ao final do trecho de código abaixo?

int main () {	
	
	int x, y, *p;
	y = 0; p = &y;
	x = *p; x = 4;
	(*p)++;
	--x;
	(*p) += x;
	//x = 3
	//y = 4
	//*p= 4
    return 0;
}
