#include <stdio.h>


void print() {

    int a[5];

    int i;

    for (i = 0; i < 5; ++i){
        print("%d\n",a[i]);
    }
}

int main() {
    int a[5]={0,1,2,3,4};
//    for (int i = 0; i < 5; ++i) {
//
//        printf("%d\n",a[i]);
//    }

    print(a);
    return 0;
}
