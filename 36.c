//Program to print the upper triangle and lower triangle of a matrix

#include<stdio.h>
void main()
{
    int n;
    printf("\nEnter order of the square matrix :");
    scanf("%d",&n);
    int A[n][n];
    printf("\nENTER MATRIX A VALUES\n");
    for(int I=0;I<n;I++)
    {
        for(int J=0;J<n;J++)
        {
            scanf("%d",&A[I][J]);
        }
    }
    printf("LOWER MATRIX C VALUES ARE :\n");
    for(int I=0;I<n;I++)
    {
        printf("\n");
        for(int J=0;J<=I;J++)
        {
            printf("%d\t",A[I][J]);
        }
        printf("\n");
    }
    printf("UPPER MATRIX C VALUES ARE :\n");
    for(int I=0;I<n;I++)
    {
        printf("\n");
        for(int J=0;J<n;J++)
        {
             if(J>=I)
            printf("%d\t",A[I][J]);
             else
            printf("\t");
        }
        printf("\n");
    }
    printf("\n");
}
