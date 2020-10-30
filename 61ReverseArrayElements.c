#include <stdio.h>
int main()
{
    int n, arr[10];

    //read the number of elements
    printf("Enter the number of array elements:");
    scanf("%d", &n);

    //read the elements
    for (int i = 0; i < n;i++)
    {
        scanf("%d", &arr[i]);
    }

    //reverse the string
    for (int start = 0, end = n - 1; start < n / 2;start++,end--)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }

    //display the reverse string
    for (int i = 0; i < n;i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}