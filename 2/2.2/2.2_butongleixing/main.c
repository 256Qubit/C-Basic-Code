#include <stdio.h>

int main() {
    int age=21;
    printf("Hello %s,you are %d years old you score is %f\n","bob",age,89.1);
    int i=10;
    float f=92.1;
    printf("student number=%-3d ,student score =%5.2f\n",i,f);//数字前加一个负号代表向左对齐
    i=190;
    f=89.2;
    printf("student number=%3d ,student score =%5.2f\n",i,f);
    i=19;
    f=98.2;
    printf("student number=%3d ,student score =%5.2f\n",i,f);
    return 0;
}
