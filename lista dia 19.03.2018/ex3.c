#include <stdlib.h>
#include <stdio.h>

/*Qual o valor de y no final do programa? Tente primeiro descobrir e depois verifique no
computador o resultado. A seguir, escreva um /* coment�rio  em cada comando de atribui��o
explicando o que ele faz e o valor da vari�vel � esquerda do '=' ap�s sua execu��o. */

int main(){
	//Declara��o de vari�veis.
	int y, *p, x; 
	
	//Atribui��o de 0 a y.
	y = 0;     
	 
	//Atribui��o do endere�o de y a p.
	p = &y;
	
	//Atribui��o do conte�do do endere�o de p a x ou seja o valor de y.
	x = *p;  
	    
    //Atribui��o 4 a x.           
	x = 4; 
	 
	//Incrementa��o de 1 ao conte�do que p aponta, o valor de y passa a ser 1.              
	(*p)++; 
	    
	//Decrementa��o do valor de x, o valor de x passa a ser 3.
	x--;   
	
	//Adiciona x ao conte�do de p, ou seja, em y. y passa a ser 4.        
	(*p) += x;  
	 
	//imprime a vari�vel y.
	printf ("y = %d\n", y); 

	return 0;
}
