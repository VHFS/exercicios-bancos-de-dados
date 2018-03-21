#include <stdlib.h>
#include <stdio.h>

/*Qual o valor de y no final do programa? Tente primeiro descobrir e depois verifique no
computador o resultado. A seguir, escreva um /* comentário  em cada comando de atribuição
explicando o que ele faz e o valor da variável à esquerda do '=' após sua execução. */

int main(){
	//Declaração de variáveis.
	int y, *p, x; 
	
	//Atribuição de 0 a y.
	y = 0;     
	 
	//Atribuição do endereço de y a p.
	p = &y;
	
	//Atribuição do conteúdo do endereço de p a x ou seja o valor de y.
	x = *p;  
	    
    //Atribuição 4 a x.           
	x = 4; 
	 
	//Incrementação de 1 ao conteúdo que p aponta, o valor de y passa a ser 1.              
	(*p)++; 
	    
	//Decrementação do valor de x, o valor de x passa a ser 3.
	x--;   
	
	//Adiciona x ao conteúdo de p, ou seja, em y. y passa a ser 4.        
	(*p) += x;  
	 
	//imprime a variável y.
	printf ("y = %d\n", y); 

	return 0;
}
