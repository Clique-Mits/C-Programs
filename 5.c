#include <stdio.h>
#include<math.h>
void pal(int n)
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
        sum+=r*(pow(10,k-1));
        a=a/10;
        k--;
    }
    if(sum==b)
    {
        printf("%d\n",b);
    }
}
int main()
{
    int n,i=1;
    printf("Enter the limit of palimdrome numbers to be checked");
    scanf("%d",&n);
    while(i<=n)
    {
        pal(i);
        i++;
    }
    return 0;
}
