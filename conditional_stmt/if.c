#include <stdio.h>

int main ()
{
    // int age;
    // printf("Enter your age :\n");
    // scanf("%d",&age);

    // if(age > 18)    ///if the condition is true then block of code will executed otherwisw no
    // {
    //     printf("Your eligible for voting!!\n");
    // }

    ////if marks 90-100 >>>grade A
    // 80-89 >>>grade B
    ///70-79 >>> grade C
    ///60-69 >>> grade D
    // <60 >>> fail

    // int marks;
    // printf("Enter marks of the student :");
    // scanf("%d",&marks);
    // if(marks>=90 && marks <=100)
    // {
    //     printf("Student got grade : A");
    // }
    // if(marks>=80 && marks <=89)
    // {
    //     printf("Student got grade : B");
    // }
    // if(marks>=70 && marks <=79)
    // {
    //     printf("Student got grade : C");
    // }
    // if(marks>=60 && marks <=69)
    // {
    //     printf("Student got grade : D");
    // }
    // if(marks<60)
    // {
    //     printf("Student is failed");
    // }

    ///check the person is eligiblw for voting or not 
    // int age;
    // printf("Enter your age :");
    // scanf("%d",&age);

    // if(age > 18)
    // {
    //     printf("Your eliigible for voting !!");
    // }else{
    //     printf("Your not eligible for voting !!");
    // }

    ///check the num is even or odd
    // int num;
    // printf("Enter a number :");
    // scanf("%d",&num);

    // if(num % 2 == 0)
    // {
    //     printf("%d: is the even number",num);
    // }else{
    //     printf("%d: is the odd number",num);
    // }


    ///check the number is positive or negative
    // int num;
    // printf("Enter a number here :");
    // scanf("%d",&num);
    // if(num > 0)
    // {
    //     printf("%d:is a positive number",num);
    // }else if(num < 0){
    //     printf("%d:is negative number ",num);
    // }else{
    //     printf("%d:is a zero",num);
    // }

    // char ch;

    // printf("Enter a character: ");
    // scanf("%c", &ch);

    // if (ch >= '0' && ch <= '9')
    // {
    //     printf("Entered input is an integer.\n");
    // }
    // else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    // {
    //     printf("Entered input is a character.\n");
    // }
    // else
    // {
    //     printf("Entered input is a special symbol.\n");
    // }

    ///accept 3 numbers and find the max 
    // int a,b,c;
    // printf("enter the first number:");
    // scanf("%d",&a);
    // printf("enter the second number:");
    // scanf("%d",&b);
    // printf("enter the third number:");
    // scanf("%d",&c);

    // if(a > b && a > c)
    // {
    //     printf("%d is max number from %d and %d",a,b,c);
    // }else if(b > a && b > c)
    // {
    //     printf("%d is max number from %d and %d",b,a,c);
    // }else
    // {
    //     printf("%d is a max number from %d and %d",c,a,b);
    // }


    int num;
    printf("Enter a number here :");
    scanf("%d",&num);

    if(num % 5 == 0 || num % 11 == 0 )
    {
        if(num % 5 == 0 && num % 11 == 0)
        {
            printf("The number is divisible by 5 and 11");
        }else if(num % 11 == 0)
        {
            printf("the number is divisible by 11");
        }else{
            printf("the number is divisible by 5");
        }
    }else{
        printf("the number is not divisible by 5 and 11");
    }
    
    // int age;
    // printf("Enter your age :");
    // scanf("%d",&age);

    // if(age > 18)
    // {
    //     printf("Your eliigible for voting !!");
    //     if(age > 60)
    //     {
    //         printf("Senior citizen");
    //     }else{
    //         printf("adult");
    //     }
    // }else{
    //     printf("Your not eligible for voting !!");
    //     if("age > 12")
    //     {
    //         printf("teenage");
    //     }else{
    //         printf("child");
    //     }
    // }


}