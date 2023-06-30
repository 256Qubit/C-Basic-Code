#include <stdio.h>

int main() {
    //scanf用来读取标准输入,scanf需要将读取到的数据放入一个空间之中,因此变量必须获取地址。
    int i;
    char c;
    float f;
    scanf("%d",&i);//&代表数据空间
    printf("i=%d\n",i);//标准输入缓冲区中的10读取擦除，剩余/n
    fflush(stdin);//清空标准输入缓冲区
    scanf("%C",&c);//%c不会忽略任何字符，所以%c会读取残存在缓冲区的\n
    printf("c=%c\n",c);
    fflush(stdin);
    scanf("%f",&f);//scanf在读取整型数，浮点数，字符串时，会忽略‘\n’（回车符）、空号符等字符
    printf("f=%f\n",f);
    return 0;
}
