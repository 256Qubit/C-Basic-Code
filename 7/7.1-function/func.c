//
// Created by LZ's PC on 2023/8/17.
//
#include "func.h"

void change(int *j){//j=&i;
    *j=*j/2;
    printf("%d\n",*j);
}

void print_massage(){
    printf("how do you do\n");
    print_star(6);
}
int print_star(int i){
    printf("***********");
    printf("print_star %d\n",i);
    i=i+3;
}

