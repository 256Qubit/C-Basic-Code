#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int size;
    scanf("%d\n",&size);
    char *p;//void*类型是不能偏移的
    p=(char*)malloc(size);//malloc返回void*是无类型指针
    p[0]='H';
    *(p+1)='E';
    p[2]='L';
    *(p+3)='L';
    p[4]='O';
    *(p+5)='\0';
    strcpy(p,"malloc success");
    puts(p);
    free(p);
    printf("free success");
    return 0;
}
