#include <stdio.h>

int main() {

    int i;
    while (scanf("%d",&i)){
        if(i>0){
            printf("i>0\n");
        } else{
            printf("i<0\n");
        }
    }

    return 0;
}
