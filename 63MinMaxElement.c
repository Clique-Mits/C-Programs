#include<stdio.h>

struct pair{
    int min;
    int max;
};

//function to find the minimum and maximum element
struct pair getMinMaxElement(int arr[], int n)
{
    struct pair minmax;
    int i;

    //if n is even then the first two element as min or max
    if(n%2==0)
    {
        if(arr[0]>arr[1])
        {
            minmax.min = arr[1];
            minmax.max = arr[0];    
        }
        else{
            minmax.min = arr[0];
            minmax.max = arr[1];
        }
        i = 2;
    }
    //else set the first element to minimum and maximum
    else{
        minmax.min = arr[0];
        minmax.max = arr[0];
        i = 1;
    }

    //compare the elements pairwise
    while(i<n-1)
    {
        if(arr[i]>arr[i+1])
        {
            if(arr[i]>minmax.max)
            {
                minmax.max = arr[i];
            }
            if(arr[i+1]<minmax.min)
            {
                minmax.min = arr[i + 1];
            }
        }
        else{
            
            if(arr[i]<minmax.min)
            {
                minmax.min = arr[i];
            }
            if(arr[i+1]>minmax.max)
            {
                minmax.max = arr[i + 1];
            }
        }
        i += 2;
    }

    //return the minimum and maximum element
    return minmax;
}

int main()
{
    int arr[20], n;

    //read the number of elements
    printf("Enter the number of elements:");
    scanf("%d", &n);

    //read the array elements
    printf("Enter %d elements:", n);
    for (int i = 0; i < n;i++)
    {
        scanf("%d", &arr[i]);
    }
    //call the function
    struct pair minmax = getMinMaxElement(arr, n);

    //display the results
    printf("The minimum element is:%d\n", minmax.min);
    printf("The maximum element is:%d\n", minmax.max);

}
