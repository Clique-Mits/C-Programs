#include<stdio.h>
void bubble(int a[],int n){
 int temp,l,m,k;
  for(l=0;l<n;l++)
  {
   for(m=0;m<n-1-l;m++)
    {
     if (a[m]>a[m+1])
      {
        temp=a[m];
        a[m]=a[m+1];
        a[m+1]=temp;
      }
    }
  } 
 printf("\nThe sorted array is:");
 for(k=0;k<n;k++)
 { printf("%d",a[k]); }
}
int main()
{
 int n,i,a[50] ;
 printf("enter the number of elements");
 scanf("%d",&n);
 printf("enter the elements");
 for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
 bubble(a,n);
}