#include <stdlib.h>
#include <stdio.h>

/*Explique a diferen�a entre:
p++; (*p)++; *(p++);*/

int main(){
	//Incrementa o endere�o do ponteiro.
	p++;
	
	//Incrementa o valor contido no endere�o apontado por p.
	(*p)++;
	
	//Incremento o endere�o de p e acessa o novo valor.
	*(p++);
	
	return 0;
}
