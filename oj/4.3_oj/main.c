#include <stdio.h>

    int main() {
        int a, b, c, d, sum, total, n = 0;
        for (a = 1; a < 10; a++)
        {
            for (b = 1; b < 20; b++)
            {
                for (c = 1; c < 50; c++)
                {
                    for (d = 1; d < 100; d++)
                    {
                        sum = a * 10 + b * 5 + c * 2 + d;
                        total = a + b + c + d;
                        if (sum == 100 && total == 40)
                        {
                            n++;
                        }
                    }
                }
            }
        }
        printf("%d\n", n);
        return 0;
}
