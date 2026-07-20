#include <stdio.h>

float triValidity(float a,float b,float c);
float area(float base, float height);

int main()
{
    ////validity of triangle with return_type nad argument function call
    float a;
    printf("Enter a first angle of a triangle: ");
    scanf("%f",&a);
    float b;
    printf("Enter a second angle of a triangle: ");
    scanf("%f",&b);
    float c;
    printf("Enter a third angle of a triangle: ");
    scanf("%f",&c);
    float sum = triValidity(a,b,c);
    printf("addition of %.1f , %.1f and %.1f this three angles is: %.1f\n",a,b,c,sum);
    if(sum == 180)
    {
        printf("The triangle is valid\n");

        ////area of triangle with return_type and argument function call
        float base;
        printf("Enter base of the triangle: ");
        scanf("%f",&base);
        float height;
        printf("Enter height of the triangle: ");
        scanf("%f",&height);
        float triArea = area(base,height);
        printf("Area of the triangle is: %.1f",triArea);
    }
    else
    {
        printf("The triangle is not valid\n");
    }



}

////function definition of the triangle validity
float triValidity(float a,float b,float c)
{
    float add = a + b + c;
    return add;
}

////function definition of the area of triangle
float area(float base,float height)
{
    return 1/2 * (base * height);
}