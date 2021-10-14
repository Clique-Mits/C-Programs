#include<stdio.h>
main()
{
int a[7][7],i,j,k,m,n,temp;
printf("enter number of rows of matrix\n");
scanf("%i",&m);
printf("enter number of columns of matrix\n");
scanf("%i",&n);
printf("enter the elements\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
printf("the matrix you entered:\n");
for(i=0;i<m;i++)
{
printf("\n");
for(j=0;j<n;j++)
{
printf("%4d",*(*(a+i)+j));
}
}
for(i=0;i<n;i++)
{
for(k=0;k<m-1;k++)
{
for(j=0;j<m-k-1;j++)
{
if( *(*(a+j)+i)> *(*(a+(j+1))+i)) 
{
temp=*(*(a+j)+i);
*(*(a+j)+i)=*(*(a+(j+1))+i);
*(*(a+(j+1))+i)=temp;
}
}
}
}
printf("\nSorted Matrix:\n");
for(i=0;i<m;i++)
{
printf("\n");
for(j=0;j<n;j++)
{
printf("%4d",*(*(a+i)+j));
}
}
}
