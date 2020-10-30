#include <stdio.h>
#include <string.h>
int a[10] = {1, 2, 3, 4};

int *arrws(char *token)
{
      // loop through the string to extract all other tokens
   static int arr[100];
   int i = 0;
   while (token != NULL)
   {
      int t = atoi(token);
      arr[i++] = t;
      token = strtok(NULL, " ");
   }
   return arr;
}

int main()
{
   char string[50] = "2 4 5 6 7";
   // Extract the first token
   char *token = strtok(string, " ");
   int *rr = arrws(token);
   for (int i = 0; i < 5; i++)
   {
      printf("%d\t", rr[i]);
   }
   return 0;
}