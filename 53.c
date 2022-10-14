#include <stdio.h>
#include <conio.h>
#include <string.h>
const char* stringrev(char string[])
{
    int i,length;
    char temp;
    length=strlen(string)-1;
    for(i=0;i<strlen(string)/2;i++)
    {
      temp=string[i];
      string[i]=string[length];
      string[length--]=temp;
    }
    return string;
}
int main(){
   char string[20],temp;
   int i,length;
   printf("Enter String : ");
   scanf("%s",string);
   const char* newstr= stringrev(string); 
   printf("\nReverse string :%s",newstr);
   return 0;
}
