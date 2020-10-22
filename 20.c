#include <stdio.h>

int main()
{
    int i, j, num, a[10], n;
    printf("enter the limit of the array");
    scanf("%d", &n);
    printf("enter the array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the number to  be searched");
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == num)
            {
                printf("%d+%d=%d\n", a[i], a[j], num);
            }
        }
    }
    return 0;
}