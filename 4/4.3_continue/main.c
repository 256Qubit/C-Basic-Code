#include <stdio.h>

int main() {
    int i,total;
    for(i=1,total=0;i<=100;i++){
        if(i%2==0){
            continue;
        }
        total+=i;
    }
    printf("total=%d\n",total);
    int j,sum;
    for (j =1,sum=0; j <=100 ; ++j) {
        if(j%2==1){
            continue;
        }
        sum+=j;
    }
    printf("sum=%d\n",sum);
    int T=0;
    for(int m = 1; m <=100; ++m) {
        T+=m;
    }
    printf("T=%d\n",T);
    return 0;
}
