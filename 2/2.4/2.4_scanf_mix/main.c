#include <stdio.h>

int main() {
    int i,ret;
    char c;
    float f;
    ret= scanf("%d %c%f",&i,&c,&f);//ret 为scanf匹配成功的个数
    printf("i=%d,c=%-c,f=%-5.1f\n",i,c,f);
    return 0;
}
