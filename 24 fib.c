#include<stdio.h>
int main()
{
   int n,k;
   int a[20];
   printf("Enter the range:");
   scanf("%d",&n);
   a[0]=-1;
   a[1]=1;
   printf("The fibonacci series is:");
   for(k=2;k<=n+1;k++)
   {
      a[k]=a[k-1]+a[k-2];
      printf("%d ",a[k]);
   }
   printf("\n");
   return 0;
}
