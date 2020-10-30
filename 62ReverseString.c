#include<stdio.h>
int main()
{
    char str[100];
    int count=0,end,start;
    
    //read the string with whitespaces
    printf("Enter the string:");
    scanf ("%[^\n]%*c", str);


    //count the string length
    while(str[count]!='\0')
    {
        count++;
    }

    //reverse the string
    for (start = 0,end=count-1; start < count/2;start++,end--)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
    }

    printf("Reverse of the string:%s", str);
    return 0;
}