#include <stdio.h>

int main () {	
	
(V) Ap�s a atribui��o pa=&a[0]; pa e a possuem valores identicos, isto �, apontam
para o mesmo endere�o
(V) A atribui��o pa=&a[0]; pode ser escrita como pa=a;
(V) a[i] pode ser escrito como *(a+i)
(V) &a[i] e a+i s�o id�nticos
(V) a+i e' o endere�o do i-�simo elemento ap�s a
(V) pa[i] e' id�ntico a *(pa+i)
(V) pa=a e' uma opera��o valida
(V) pa++ e' uma opera��o valida
(F) a=pa e' uma opera��o valida
(F) a++ e' uma opera��o valida
    return 0;
}
