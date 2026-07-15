#include <stdio.h>

int main()
{
/*     int a = 0;
    for(a;a <= 122; a++)
    {
        printf("%c\n",a);
    } */

    // take the 5 sub marks and convert it in the percentage 
    int sub1;
    printf("Enter sub1 marks:");
    scanf("%d",&sub1);
    int sub2;
    printf("Enter sub2 marks:");
    scanf("%d",&sub2);
    int sub3;
    printf("Enter sub3 marks:");
    scanf("%d",&sub3);  
    int sub4;
    printf("Enter sub4 marks:");
    scanf("%d",&sub4);   
    int sub5;
    printf("Enter sub5 marks:");
    scanf("%d",&sub5);

    int obtained_marks = sub1 + sub2 + sub3 + sub4 + sub5;
    printf("Obtained marks are:%d\n",obtained_marks);
    float percentage = ((float)obtained_marks/500)*100;
    printf("percentage :%.2f\n",percentage);


    ///explicite typecasting
/*     int a = 10;
    int b = 3;
    float res;
    res = (float) a / b;
    printf("%f",res); */

    ///implicite  typecasting
    // int o = 90;
    // float p = o;    /// initially a is int and it store in float;
    // float r = p / 7;
    // printf("%.2f\n",r);


    ///remove fractional part from float
    // float s = 90.5499;
    // printf("%d\n", (int)s);

    // double a = 46.6578;
    // printf("%d", (int)a); /// convert double to int 


    /// convert char to decimal and decimal to char
    // char a = 'd';
    // printf("%d\n",a);

    // int b = 33;
    // printf("%c\n",b);
}