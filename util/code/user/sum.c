#include <stdio.h>
int main()
{
    long n, s = 0, s2 = 0;
    printf("Input n: ");
    fflush(stdout);
    scanf("%d", &n);
    printf("calculation started\n");
    for (int i = 1; i <= n; i++)
    {
        s += i;
        s2 += n - i;
    }
    printf("sum from 1 to %d is %d/%d\n", n, s, s2);
    printf("calculation finished\n");
    return 0;
}