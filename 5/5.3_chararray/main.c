#include <stdio.h>
void print(char e[]){
    int i=0;
    while (e[i]){
        printf("%c",e[i]);
        i++;
    }
}

int main() {
    char c[5]="chars";//使用该方式初始化字符串[字符数组]
    printf("%s\n",c);//使用%s来输出一个字符串
    char b[10]={'i','a','m','h','a','p','p','y','\0'};
    printf("%s\n",b);
    char d[5]={'i','a','m','h','a'};
    printf("%s\n",d);
    return 0;
}
