#include <stdio.h>

int main()
{
/*     printf("%d\n", 94 & 37);
    printf("%d\n", 5 & 7);
    printf("%d\n ", 94 | 37);
    printf("%d\n",15 | 21);
    printf("%d\n", 5 ^ 7); */

/*     printf("leftshift of 12 by 1: %d\n", 12 << 1);
    printf("leftshift of 12 by 2: %d\n", 12 << 2);
    printf("leftshift of 12 by 3: %d\n", 12 << 3);

    printf("rightshift of 12 by 1: %d\n", 12 >> 1);
    printf("rightshift of 12 by 2: %d\n", 12 >> 2);

    printf("rightshift of 17 by 1: %d\n", 17 >> 1);
    printf("rightshift of 17 by 2: %d\n", 17 >> 2);

    printf("leftshift of 9 by 1: %d\n", 9 << 1);
    printf("leftshift of 9 by 2: %d\n", 9 << 2);

    printf("bitwise NOT of -5:%d\n", ~(0)); */


    //set bit >>> num |= (1<<bit)  >>> num = num | (1<<bit)
    
/*     int num = 9;
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
    printf("reset bit num2:%d\n", num2); */

    /// toggle bit >>> num ^= (1<<bit) >>> num = num ^ (1<<bit)
    int num = 15;
    int bit = 3;
    num ^= (1 << bit); // 1111 | 1000
    printf("toggle bit num:%d\n", num);

    num ^= (1 << 2); // 0111 | 0100
    printf("toggle bit num:%d\n", num);

    num ^= (1 << 4); // 00011 | 10000
    printf("toggle bit num:%d\n", num);

    int a = 8;// 1000 | 0100
    printf("toggle bit a:%d\n", a ^ (1 << 2));

    /// check bit >>> (num & (1<<bit))

    int num1 = 9;
    int bit1 = 3;
    if (num1 & (1 << bit1)) {
        printf("bit is set\n");
    } else {
        printf("bit is not set\n");
    }


    // check bit >>> (num >> bit) & 1
    int b = 8;
    int bit2 = 31;
    if (b >> bit2 & 1) {
        printf("bit is set\n");
    } else {
        printf("bit is not set\n");
    }

    /// positive and negative numbers>>> MSB (most significant bit) is 0 for positive numbers and 1 for negative numbers.
    int c = 5;
    int d = -5;
    if (c & (1 << 31)) {
        printf("c bit is set\n");
    } else {
        printf("c bit is not set\n");
    }

    if (d & (1 << 31)) {
        printf("d bit is set\n");
    } else {
        printf("d bit is not set\n");
    }

    // check LSB least significant bit >>> num & 1
    int e = 9;
    printf("LSB of e:%d\n", e & 1);
    printf("LSB of 8:%d\n", 8 & 1);

    /// swaping two numbers without using third variable >>> using XOR operator
    /// swapping two variables using XOR operator
    int m = 9;
    int n = 8;

    printf("before swapping\n m:%d\n n:%d\n", m, n);
    m = m ^ n; // m = 9 ^ 8 = 1
    n = m ^ n; // n = 1 ^ 8 = 9
    m = m ^ n; // m = 1 ^ 9 = 8
    printf("after swapping\n m:%d\n n:%d\n", m, n);

    int o = 14;
    int p = 3;
    printf("before swapping\n o:%d\n p:%d\n", o, p);
    o = o ^ p; // o = 14 ^ 3 = 13
    p = o ^ p; // p = 13 ^ 3 = 14
    o = o ^ p; // o = 13 ^ 14 = 3
    printf("after swapping\n o:%d\n p:%d\n", o, p);

    int s = 90;
    printf("%d",sizeof(int));

}