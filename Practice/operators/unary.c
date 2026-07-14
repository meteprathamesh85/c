#include <stdio.h>

int main ()
{
    int a = 66;
    int b = 67;
    int c = a++ + ++b + --a - ++a - b;
    printf("%d\n",c);


    int d = 0;
    for(d ; d <= 25; d++)
    {
        printf("%d\n",d);
    }
}