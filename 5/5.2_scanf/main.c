#include <stdio.h>
void print(int a[5],int length){
    int i;
    for (int i = 0; i <length; ++i) {
        printf("%d\n",a[i]);
    }
//    printf("%d\n",sizeof(a));//sizeof 字节长度
}
int main() {
    int a[5]={1,2,3,4,5};
    print(a,5);
    return 0;
}
