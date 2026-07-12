#include <stdio.h>

int main()
{
/*     printf("%d\n", 94 & 37);
    printf("%d\n", 5 & 7);
    printf("%d\n ", 94 | 37);
    printf("%d\n",15 | 21);
    printf("%d\n", 5 ^ 7); */

    printf("leftshift of 12 by 1: %d\n", 12 << 1);
    printf("leftshift of 12 by 2: %d\n", 12 << 2);
    printf("leftshift of 12 by 3: %d\n", 12 << 3);

    printf("rightshift of 12 by 1: %d\n", 12 >> 1);
    printf("rightshift of 12 by 2: %d\n", 12 >> 2);

    printf("rightshift of 17 by 1: %d\n", 17 >> 1);
    printf("rightshift of 17 by 2: %d\n", 17 >> 2);

    printf("leftshift of 9 by 1: %d\n", 9 << 1);
    printf("leftshift of 9 by 2: %d\n", 9 << 2);

    printf("bitwise NOT of -5:%d\n", ~(0));


    //set bit >>> num |= (1<<bit)  >>> num = num | (1<<bit)
    
    int num = 9;
    int bit = 2;
    num |= (1 << bit);  ///num = num | (1 << bit)
    printf("set bit:%d\n", num);

    int num1 = 12;
    int bit1 = 0;
    num1 |= (1 << bit1);
    printf("set bit num1:%d\n", num1);

    printf("set bit without assignimng:%d\n", 14 | (1<< 0));
    printf("set bit without assignimng:%d\n", 15 | (1<< 0));

    // reset bit / clear bit >>> num &= ~(1<<bit) >>> num = num & ~(1<<bit) 
    int num2 = 9;
    int bit2 = 0;
    num2 &= ~(1 << bit2);
    printf("reset bit num2:%d\n", num2);

}