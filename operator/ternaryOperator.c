#include <stdio.h>

int main()
{
    int a = 12;
    int b = 13;
    int c = (a<b)?a:b;
    printf("%d\n",c);

    int d = 20;
    int e = 24;
    int f = (d>e)?d:e;
    printf("%d\n", f);

    int g = 455;
    int h = 54;
    int i = (g > h)? printf("%d is greather than %d", g,h): printf("%d is less than %d",g,h);
}
