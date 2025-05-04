#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    fflush(stdout);
    scanf("%d", &n);
    float m = 1;
    double sum1 = 0, sum2 = 0;
    for (int i = 1; i < n; i++)
    {
        sum1 += 1. / m;
        m *= i;
    }
    m = 1;
    for (int i = 1; i < n; i++)
    {
        sum2 += 1 / m;
        m *= i;
    }
    printf("sum1: %.12lf\nsum2: %.12lf\n", sum1, sum2);
    return 0;
}