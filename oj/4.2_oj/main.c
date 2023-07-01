#include <stdio.h>

int main() {
    int i=1;
    int n;
    int ret =1;
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        ret*=i;
    }
    printf("%d\n",ret);
    return 0;
}
