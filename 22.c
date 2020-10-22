#include <stdio.h>

int main()
{
    int n, i, k, a[20], b[20], c[20];
    printf("enter the degree of the polynomial");
    scanf("%d", &n);
    printf("enter the first polynomial\n");
    for (i = n, k = 0; i >= 0; i--, k++)
    {
        printf("enter the coeffient of x^%d", i);
        scanf("%d", &a[k]);
    }
    printf("enter the second polynomial\n");
    for (i = n, k = 0; i >= 0; i--, k++)
    {
        printf("enter the coeffient of x^%d", i);
        scanf("%d", &b[k]);
    }
    for (k = 0; k <= n; k++)
    {
        c[k] = a[k] - b[k];
    }
    printf("the sum is\n");
    for (i = n, k = 0; i >= 0; i--, k++)
    {
        printf("%dx^%d+", c[k], i);
    }

    return 0;
}