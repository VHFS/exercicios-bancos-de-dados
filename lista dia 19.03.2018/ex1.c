#include <stdlib.h>
#include <stdio.h>

/*Explique a diferença entre:
p++; (*p)++; *(p++);*/

int main(){
	//Incrementa o endereço do ponteiro.
	p++;
	
	//Incrementa o valor contido no endereço apontado por p.
	(*p)++;
	
	//Incremento o endereço de p e acessa o novo valor.
	*(p++);
	
	return 0;
}
