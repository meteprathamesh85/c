#include <stdio.h>
#define PI 3.14

int main() 
{
/*     int a = 50;
    printf("%d\n",a);
    float b =77.99;
    printf("%f\n",b);
    char name[] ="harshad";
    printf("%s\n",name);
    double c =99.99;
    printf("%f\n",c); */

/*  Name initial
    Age
    Height
    Percentage */


    char name[] = "harshad";
    printf("name:%s\n",name);
    int age = 22;
    printf("age:%d\n",age);
    float H = 170.5;
    printf("height:%f\n",H);
    double p = 34.99;
    printf("percentage:%f\n",p);

    printf("size of int:%zu\n",sizeof(int));
    printf("size of float:%zu\n",sizeof(float));
    printf("size of double:%zu\n",sizeof(double));
    printf("size of char:%zu\n",sizeof(char));

    float r = 5.2;
    printf("area of circle is :%f\n", PI*r*r);

    printf("name:%s\n",name);
    char name1[] = "harshad";
    printf("ASCII value %c%d\n",name1[0],name1[0]);
}