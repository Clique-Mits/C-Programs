#include<stdio.h>
int main()
{
	int i,r,j;
	printf("enter the number of rows");
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("\t");
		}
		for(;j<r;j++)
		{
			printf("*");
			printf("\t");
		}
		printf("\n");
	}
	return 0;
}
