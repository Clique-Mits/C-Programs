#include <stdio.h>
int main()
{
    int i=2,n,f,j;
    printf("enter the limiting value n");
    scanf("%d",&n);
    while(i<=n)
    {
        f=0;
        j=2;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            printf("%d\t",i);
        }
        i++;
    }
    return 0;
}
