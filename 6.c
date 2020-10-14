#include<stdio.h>
int prime(int);
int main()
{
	int num=2,k=0,n;
	printf("enter the element");
	scanf("%d",&n);
	while(n>1)
	{
		k=0;
		if(n%num==0)
		{
			while(n%num==0)
			{
				k++;
				n=n/num;
			}
		}
	if(k!=0)
		printf("%d^%d*",num,k);
	printf("\n");
	num=prime(num);
}
return 0;
}
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