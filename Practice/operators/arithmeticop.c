#include <stdio.h>

int main ()
{
    int a;
    printf("Enter the first number: ");
    scanf("%d",&a);
    int b = 55;
    printf("Enter the second nunmer: ");
    scanf("%d",&b);

    int sum  = a + b;
    printf("\nAddition :%d\n",sum);

    int sub = a - b;
    printf("Subtraction :%d\n",sub);

    int mul = a * b;
    printf("Multiplication :%d\n",mul);

    float div = (float)a / b;
    printf("Division :%.2f\n",div);

    int mod = a % b;
    printf("Modulation :%d\n",mod);

    int len;
    printf("Enter the length: ");
    scanf("%d",&len);
    int width;
    printf("Enter the width: ");
    scanf("%d",&width);

    int rect = len * width;
    printf("Area of rectangle:%d",rect);

    

}