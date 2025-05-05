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
    double a, b, c;
    printf("Enter a b: ");
    fflush(stdout);
    scanf("%lf %lf", &a, &b);
    c = 0;
    asm volatile("fsqrt.d %0, %1" : "=f"(c) : "f"(a));
    printf("a / b = %.12lf, fsqrt(a) = %.12lf\n", a / b, c);
    return 0;
}