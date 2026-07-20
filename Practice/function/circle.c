#include <stdio.h>
#define PI 3.14

float area(float r);            
void circumference(float r);  
void dimeter();        
int main() 
{
    float r;
    printf("enter the radius of circle :");
    scanf("%f",&r);

    float areaOfCircle = area(r);                       ////area with return_type and argument function call
    printf("area of circle is: %.2f\n",areaOfCircle);

    circumference(r);                                   ////circumference without return_type with argument function call

    dimeter();                                          ////dimeter without return_type and argument function call
}

float area(float r)                 ////area function definition 
{
    return PI*r*r;
}

void circumference(float r)         ////circumference function definition
{
    float CofCircle = 2 * PI * r;
    printf("circumference of a circle is: %.2f\n",CofCircle);
}

void dimeter()                      ////dimeter function definition
{
    float r;
    printf("Enter the raduis for diameter: ");
    scanf("%f",&r);
    float d = 2 * r;
    printf("Dimeter of a circle is: %.2f\n",d);
}