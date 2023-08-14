#include <stdio.h>

int main() {
    int i=5;
    //指针变量的初始变量是某个变量地址来赋值，不能写某个数值
    int  *i_pointer=&i;
    //定义了一个指针变量，i_pointer就是指针变量名
    printf("%d\n",i);//直接访问
    //地址和指针是等价的
    printf("*i_pointer=%d\n",*i_pointer);//间接访问
    return 0;
}
