#include <stdio.h>

void change(int *j){//j形式参数
    *j=5;//*j等价于变量i，只是间接访问
}

int main() {
    int i=10;
    printf("before change i=%d\n",i);
    change(&i);//i实际参数,j=i
    //c语言的函数调用是值传递，实参赋值给形参
    printf("after change i=%d\n",i);
    return 0;
}
