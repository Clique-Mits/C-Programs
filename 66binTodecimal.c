#include <stdio.h>
int binarytodecimal(number)
{
    int dval = 0, base = 1, rem;
    while (number > 0)
    {
        rem = number % 10;
        dval = dval + rem * base;
        number = number / 10;
        base = base * 2;
    }
    return dval;
}
void main()
{
    int num;
    scanf("%d", &num);
    printf("%d", binarytodecimal(num));
}