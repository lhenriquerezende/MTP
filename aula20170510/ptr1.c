#include <stdlib.h>
#include <stdio.h>
int main() {
    int i;
    unsigned int x= 0xFACA8421 ;
    unsigned char *p;
    printf("Variavel: %x\n", x);
    printf("Endereco: %p |Conteudo: %u\n", &x, x);
    p = (unsigned char *) &x;
    for(i=0; i < sizeof(x);i++)
        printf("Em: %p |Contem: %u ou %x\n", p+i, *p, *p);


    return EXIT_SUCCESS;

}
