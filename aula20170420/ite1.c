#include <stdio.h>
void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}
int main () {
    int numero, i, fatorial;
    printf("Entre com um numero inteiro:");
    scanf("%d", &numero);
    fatorial=1;
    for(i=2; i<=numero; i++)
        fatorial= fatorial*i;
    printf("fatorial: %d\n", fatorial);




    return 0;
}
