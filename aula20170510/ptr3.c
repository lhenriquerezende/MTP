#include <stdlib.h>
#include <stdio.h>
int main() {
    int v[] = {0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF};
    int i;
    int k=0;
    int x = 0xFF;
    unsigned char *p=v;

    for( i=0; i< sizeof(v); i++) {
        if(*p==x)
            k=k+1;
            p++;
    }
    printf("contador igual: %d", k );
    return 0;
 }
