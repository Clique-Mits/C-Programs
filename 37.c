#include<stdio.h> 
void revstr(char str[],int l);
int strileng(char str[]);
int main() {
   char str[50];
   int l,j;
 
   printf("\nEnter the string :");
   scanf("%[^\n]",str);
   
   l=strileng(str);
   j=l-1;
   revstr(str,j);
}
void revstr(char str[],int l)
{  
   int i=0,temp;
   while (i < l) {
      temp = str[i];
      str[i] = str[l];
      str[l] = temp;
      i++;
      l--;
   }
 
   printf("\nReverse string is :%s\n", str);
}
int strileng(char str[])
{
   int c=0,k=0;
   while(str[k])
   {
      c=c+1;
      k++;
   }
   return c;
}


