#include <stdio.h>

int main() {
    int number;
    float cost;
    while (scanf("%d",&number)){
        if(number>500){
            cost=0.1513;
            printf("cost=%0.2d\n",cost);
        }else if(number>300){
            cost=0.1011;
            printf("cost=%0.2d\n",cost);
        }else if(number>100){
            cost=0.0751;
            printf("cost=%0.2d\n",cost);
        }else if(number>50){
            cost=0.0544;
            printf("cost=%0.2d\n",cost);
        }
    }
}
