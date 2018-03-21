#include <stdlib.h>
#include <stdio.h>
#include "exercicio1.h"
#include <string.h>


	
	struct livro {
		char titulo[30];
		int ano;
		int pag;
		float pre;		
	};
	
	Livro* criar(char *titulol, int anol, int pagl, float prel){
			Livro *a = (Livro*) malloc(sizeof(Livro));
		
		if(a!=NULL){
			strcpy(a->titulo,titulol);
			a->ano = anol;
			a->pag = pagl;
			a->pre = prel;
		}
		
	return a;
	} 
	
	void acessar (Livro *livro, char *titulol, int *anol, int *pagl, float *prel){
		strcpy(titulol, livro -> titulo);
		*anol = livro -> ano;
		*pagl = livro -> pag;
		*prel = livro -> pre;
	}
	
	void liberar(Livro *livro){
		free(livro);
	}

