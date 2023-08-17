#include <stdio.h>
void change(int *j){//j=&i;
     *j=*j/2;
    printf("%d\n",*j);
}
int main() {
    int i;
    scanf("%d",&i);
    change(&i);
    return 0;
}
