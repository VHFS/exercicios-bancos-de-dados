#include <stdio.h>

int main () {	
	
(V) Após a atribuição pa=&a[0]; pa e a possuem valores identicos, isto é, apontam
para o mesmo endereço
(V) A atribuição pa=&a[0]; pode ser escrita como pa=a;
(V) a[i] pode ser escrito como *(a+i)
(V) &a[i] e a+i são idênticos
(V) a+i e' o endereço do i-ésimo elemento após a
(V) pa[i] e' idêntico a *(pa+i)
(V) pa=a e' uma operação valida
(V) pa++ e' uma operação valida
(F) a=pa e' uma operação valida
(F) a++ e' uma operação valida
    return 0;
}
