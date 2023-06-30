    #include <stdio.h>

    int main() {
        int year;
        scanf("%d",&year);
        for (int i = 0; i < 1; ++i) {
            if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
                printf("yes\n");
            } else{
                printf("no\n");
            }
        }

        return 0;
    }
