#include <stdio.h>
#include <stdlib.h>

struct Fracao
 {
    int numerador, denominador;
};

struct Fracao soma(int a, int b, int c, int d) {

    struct Fracao resposta;
    resposta.numerador = (d*a) + (b*c);
    resposta.denominador = b*d;
    return resposta;
}

int main() {
    struct Fracao resposta;
    int  a,b,c,d;
    printf("Entre com o primeiro numerador:");
    scanf("%d", &a);
    printf("Entre com o primeiro denominador:");
    scanf("%d", &b);
    printf("Entre com o segundo numerador:");
    scanf("%d", &c);
    printf("Entre com o segundo denominador:");
    scanf("%d", &d);
    resposta = soma(a,b,c,d);
    printf("Soma: %d / %d",resposta.numerador, resposta.denominador);


    return EXIT_SUCCESS;
}
