#include <stdio.h>
#define N 5

void change(char *d){
    *d='H';//指针指向的为数组初始地址a[0]
    d[1]='E';
    *(d+2)='L';
    d[3]='L';
    *(d+4)='O';
}
int main() {
    char c[10]="hello";
    change(c);
    puts(c);


    int a[N]={1,2,3,4,5};//数组名称内存储了数组的起始地址，a储存的就是一个地址
    int *p;
    p=a;

    int i;
    for (i = 0; i < N; ++i) {
        printf("%3d",a[i]);
    }
    printf("\n");

    p=&a[4];
    for (int i = 0; i < N; ++i) {
        printf("%3d",*(p-i));//逆序输出
    }
    return 0;
}
