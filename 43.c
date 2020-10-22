//Program to accept a string and count the number of digits, capital letters and small letters without using any library function

#include <stdio.h>
//#include <stdlib.h>

#define str_size 100

void main()
{
    char str[str_size];
    int cap=0, digit=0, small=0,i=0;
    printf("\nInput the string : ");
    scanf("%s",str);	

    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z') 
            	small++;
        else if(str[i]>='A' && str[i]<='Z')
		cap++;
        else if(str[i]>='0' && str[i]<='9')
            	digit++;
        else{
          i++;
          continue;
	}
        i++;
    }

    printf("Number of digits in the string is : %d\n", digit);
    printf("Number of capital letters in the string is : %d\n", cap);
    printf("Number of small letters in the string is : %d\n", small);
}
