#include <stdio.h>
#include<math.h>
int arm(int n)
{
    int a=n,b=n,sum=0,r,k=0;
    while(n!=0)
    {
        n=n/10;
        k++;
    }
    while(a!=0)
    {
        r=a%10;
        sum+=pow(r,k);
        a=a/10;
    }
    if(sum==b)
    {
        return b;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,i=0,j=1,x;
    printf("Enter the number of armstrong numbers to be printed");
    scanf("%d",&n);
    while(i<n)
    {
        x=arm(j);
        if(x!=0)
        {
            printf("%d\t",x);
            i++;
        }
        j=j+1;
    }
    return 0;
}
