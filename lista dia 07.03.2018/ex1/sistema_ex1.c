#include <stdio.h>
#include <stdlib.h>
#include "exercicio1a.c"

int main() {
	Livro *livro, qtdlivro[5];
	char titulol[30];
	int anol;
	int pagl;
	float prel, media;

	int total, cont;
	
	for(cont=0;cont<5;cont++){
		
		printf("Titulo do livro: ");
		fflush(stdin);
		gets(titulol);
		
		printf("Ano do livro: ");
		scanf("%i", &anol);
		
		printf("Quantidade de Paginas: ");
		scanf("%i", &pagl);
		
		printf("Preço do livro: ");
		scanf("%f", &prel);
		
		livro = criar(titulol, anol, pagl, prel);
		qtdlivro[cont] = *livro;
		
		
	}
	
	for(cont=0;cont<5;cont++){
		livro = &qtdlivro[cont];
		acessar(livro,titulol,&anol,&pagl,&prel);
		printf("\nTitulo do livro: %s, ano: %i, pags: %i, Preço: %f", titulol,anol,pagl,prel);
		total = total + pagl;
	}
	
	media = total/5;
	printf("\n Media de paginas: %.2f",media);
	
	
	return 0;
}
