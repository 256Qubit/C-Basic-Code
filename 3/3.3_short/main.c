#include <stdio.h>
//短路运算，【逻辑与】、【逻辑或】
int main() {
    int i;
    scanf("%d",&i);
    i&& printf("Hello, World![0]\n");//i若为假则不会运行【逻辑与】后面的表达式，i若为真则相反，称为短路运算
    int o;
    scanf("%d",&o);
    o|| printf("Hello, World![1]\n");
    int T=i&&o;
    T|| printf("Hello, World![2]\n");
    return 0;
}
