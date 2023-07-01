#include <stdio.h>

int main() {
    int i,total=0;
    for (int i  = 1; i <= 100; ++i) {
        total+=i;
    }
    printf("total=%d\n",total);
    return 0;
}
