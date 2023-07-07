#include <stdio.h>
void print(int a[],int length){
    int i;
    for (i = 0; i <length; ++i)//sizeof(a)为数组的字节为20个字节，sizeof(int)为四个字节
    {
        printf("%d\n",a[i]);

    }

}

int main() {
    int a[5]={1,2,3,4,5};
    print(a,5);
    return 0;
}
