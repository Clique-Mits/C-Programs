#include <stdio.h>

int main()
{
    int i, temp, a[10], n;
    print("enter the limit of the array");
    scan("%d", &n);
    print("enter the array");
    for (i; i < n; i++)
    {
        scan("%d", &a[i]);
    }
    for (i; i < (n / 2); i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1]
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);

        return 0;
    }