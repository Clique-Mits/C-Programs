#include <stdio.h>
int prime(int k)
{
	int j,f;
	k=k+1;
	while(1>0)
	{
		int j=2,f=0;
		while(j<k)
		{
			if(k%j==0)
			{
				f=1;
				break;
			}
			else
			{
				j++;
			}
		}
		if(f==0)
		{
			return k;
		}
		else
		{
			k++;
		} 
	}
}
int main()
{
    int n=2,a,b,y=1,p;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        p=b;
    }
    else
    {
        p=a;
    }
    while(n<=p)
    {
        if(a%n==0&&b%n==0)
        {
            y*=n;
            a=a/n;
            b=b/n;
        }
        else
        {
            n=prime(n);
        }
    }
    printf("GCD=%d",y);
    printf("\nLCM=%d",y*a*b);
    return 0;
}
