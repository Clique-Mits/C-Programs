#include <stdio.h>

int main()

{

    int n=1,a,b,sum,diff,pro,quo,x;

    while(n!=0)

    {

        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\nEnter your choice");

        scanf("%d",&x);

        switch(x)

        {

            case 1:printf("Enter the numbers to be added");

                   scanf("%d %d",&a,&b);

                   sum=a+b;

                   printf("The sum of two numbers is %d\n",sum);

                   break;

            case 2:printf("Enter the numbers to be subtracted");

                   scanf("%d %d",&a,&b);

                   diff=a-b;

                   printf("The difference of two numbers is %d\n",diff);

                   break;

            case 3:printf("Enter the numbers to be multiplied");

                   scanf("%d %d",&a,&b);

                   pro=a*b;

                   printf("The product of two numbers is %d\n",pro);

                   break;

            case 4:printf("Enter the numbers to be divided");

                   scanf("%d %d",&a,&b);

                   if(b!=0)

                   {

                       quo=a-b;

                       printf("The quotient of two numbers is %d\n",quo);

                   }

                   else

                   {

                       printf("Division not possible\n");

                   }

                   break;

            case 5:exit(0);

        }

    }

    return 0;

}