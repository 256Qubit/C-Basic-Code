#include <stdio.h>

int main() {
    int a,b;
    int c=0;
        scanf("%d", &a);
        b = a;
        while (a != 0) {
            c = c * 10 + a % 10;
            a = a / 10;
        }
        if (b == c) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    return 0;
}
