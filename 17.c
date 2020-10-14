#include <stdio.h>
int main()
{
    int i,n,num,low,high,mid,a[10],f=0,temp,j;
    printf("enter the limit");
    scanf("%d",&n);
    printf("enter the elemets");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("enter the element to be searched");
    scanf("%d",&num);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==num)
        {
            f=1;
            printf("element found at %d",mid+1);
            break;
        }
        else if(a[mid]>num)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(f==0)
    {
        printf("element not found");
    }
    return 0;
}