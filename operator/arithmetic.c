#include <stdio.h>

int main()
{
/*     int a = 67;
    int b = 12; */
/*     printf("addition:%d\n", a + b);
    printf("subtraction:%d\n", a - b);
    printf("multiplication:%d\n", a * b);
    printf("division:%d\n", a / b);
    printf("modulus:%d\n", a % b); */

    //Relational operators
/*     printf("Harshad\n");
    printf("a less than b:%d\n", a < b);//false = 0
    printf("a greater than b:%d\n", a > b); // true = 1
    printf("a less than or equal to b:%d\n", a <= b); //false = 0
    printf("a greater than or equal to b:%d\n", a >= b); // true = 1
    printf("a equal to b:%d\n", a == b); //false = 0
    printf("a not equal to b:%d\n", a != b); // true = 1 */

/*     printf("logical and operator\n");
    printf("%d\n",0 && 0); // false = 0
    printf("%d\n",0 && 1); // false = 0
    printf("%d\n",1 && 0); // false = 0
    printf("%d\n",1 && 1); // true = 1

    printf("logical or operator\n");
    printf("%d\n",0 || 0); // false = 0
    printf("%d\n",0 || 1); // true = 1
    printf("%d\n",1 || 0); // true = 1
    printf("%d\n",1 || 1); // true = 1

    printf("logical not operator\n");
    printf("%d\n", !(0)); // true = 1
    printf("%d\n", !(1)); // false = 0


    printf("bitwise and operator\n");
    printf("%d\n",0 & 0); // false = 0
    printf("%d\n",0 & 1); // false = 0
    printf("%d\n",1 & 0); // false = 0
    printf("%d\n",1 & 1); // true = 1


    printf("bitwise or operator\n");
    printf("%d\n",0 | 0); // false = 0
    printf("%d\n",0 | 1); // true = 1
    printf("%d\n",1 | 0); // true = 1
    printf("%d\n",1 | 1); // true = 1

    int a = 5;
    int b = 7;
    int d = 9; */

/*     int c = (a>b) && (d>a); */
/*     int c = (a>b) || (d>a);
    printf("c = %d\n", c); */

    //int a = 5;

    //a += 10;  //a = a + 10 = 15
    //a -= 10; //a = a - 10 = -5
    //a *= 10; //a = a * 10 = 50
    //a /= 10; //a = a / 10 = 0
    //a %= 10; //a = a % 10 = 5

    //printf("a = %d\n", a);

/*     float a = 78.54984;
    printf("a = %.1f\n", a); */

    //swapping with using third variable
    int a = 10;
    int b = 90;
    
/*     printf("before swapping:\n a = %d, b = %d\n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("after swapping:\n a = %d, b = %d\n", a, b); */

    //swapping without using third variable

    //using addition and subtraction
/*     printf("before swapping:\n a = %d, b = %d\n", a, b);

    a = a + b; // a = 10 + 90 = 100
    b = a - b; // b = 100 - 90 = 10
    a = a - b; // a = 100 - 10 = 90
    printf("after swapping:\n a = %d, b = %d\n", a, b); */

    //using multiplication and division
    printf("before swapping:\n a = %d, b = %d\n", a, b);
    a = a * b; // a = 90 * 10 = 900
    b = a / b; // b = 900 / 10 = 90
    a = a / b; // a = 900 / 90 = 10 
    printf("after swapping:\n a = %d, b = %d\n", a, b);
    

}