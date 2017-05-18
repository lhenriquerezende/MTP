#include <stdlib.h>
#include <stdio.h>
int main() {
    int i;
    int k=0;
    int v[] = {0,1,2,4,8};
    unsigned char *p;
    p = v;
    printf("Primeiro byte: %x | %x | %x | &x\n", *p, *(p+1), *(p+2), *(p+3));
    printf("Endereco 1 e 2: %x | %x\n\n", v[0], v[1]);
    for( i=0; i< sizeof(v); i++) {
        if(*(p+i)==0)
            k=k+1;
    }
    printf("contador igual: %d", k );

}
