#include <stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int a,e,i,o,u;
    a = e = i = o = u = 0;
    int k;
    gets(str);
    for(k=0;k<strlen(str);k++) 
    { 
        if(str[k]== 'a') 
        { 
            a = a+1; 
        } 
        else if(str[k] == 'e') 
        { 
            e = e +1; 
        } 
        else if(str[k] == 'i') 
        { 
            i = i +1; 
        } 
        else if( str[k] == 'o') 
        { 
            o = o + 1; 
        } 
        else if(str[k] == 'u') 
        { 
            u = u+1; 
        } 
    }
    printf("a :%d\n",a);
    printf("e :%d\n",e);
    printf("i :%d\n",i);
    printf("o :%d\n",o);
    printf("u :%d\n",u);
    return 0;
}
