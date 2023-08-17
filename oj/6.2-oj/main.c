#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d\n",&n);
    char c;
    scanf("%c",&c);//清楚标准输入缓冲区中的\n
    char *p;
    p=(char*)malloc(n);
    fgets(p,n,stdin);//gets(p)
    puts(p);
    return 0;
}
