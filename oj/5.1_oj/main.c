
#include <stdio.h>
#include <math.h>

int main() {
    int a[100], n, count = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        scanf("%d", &a[i]);

        if (a[i] == 2) {
            count++;
        }
    }
    printf("%d\n", count);
}
