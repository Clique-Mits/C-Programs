#include <stdio.h>
#include<math.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f*=i;
    }
    return f;
}
int main()
{
    int i,j,x,n;
    double sum=0,y;
    printf("enter the value of x");
    scanf("%d",&x);
    y=(x*3.14)/180;
    printf("enter the number of terms");
    scanf("%d",&n);
    for(i=1,j=1;i<2*n;i+=2,j++)
    {
        if(j%2!=0)
        {
            sum+=pow(y,i)/fact(i);
        }
        else
        {
            sum-=pow(y,i)/fact(i);
        }
    }
    printf("sin %d = %lf ",x,sum);
    return 0;
}
