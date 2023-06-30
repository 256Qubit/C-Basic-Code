#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define c 2+1;
int main() {
    int i=5;
    float f=5/2;
    printf("%f\n",f);
    i=7;
    float t=(float)i/2;
    printf("%f\n",t);
    int k=c+2;
    printf("%d\n",k);
    return 0;
}
