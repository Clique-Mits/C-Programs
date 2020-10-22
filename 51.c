//Program to print the fibonacci series using recursion


#include<stdio.h>

int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
} 
 
int main(void)
{
   int n, i = 0, c;
   printf("\nEnter the number of elements to be printed : ");
   scanf("%d",&n);
 
   printf("\nFibonacci series\n");
 
   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d\n", Fibonacci(i));
      i++; 
   }
 
   return 0;
}
 

