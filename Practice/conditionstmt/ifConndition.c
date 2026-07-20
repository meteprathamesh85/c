#include <stdio.h>

int main()
{
    // int a;
    // printf("Enter a number here :");
    // scanf("%d",&a);
    // if(a > 0)
    // {
    //     printf("%d:is a positive number",a);
    // }else if(a < 0){
    //     printf("%d:is negative number ",a);
    // }else{
    //     printf("%d:is a zero",a);
    // }

    // int a;
    // printf("enter your amount");
    // scanf("%d",&a);

    // if (a > 100)
    // {
    //     printf("let's go to shopping");
    // }else{
    //     printf("save the money !!");
    // }

    // char ch;
    // printf("Enter a character");
    // scanf("%c",&ch);

    // if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
    //     ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    // {
    //     printf("The character %c is a vowel\n", ch);
    // }
    // else
    // {
    //     printf("The character %c is a consonant\n", ch);
    // }

    // int marks;
    // int attendance;
    // printf("Enter marks :");
    // scanf("%d",&marks);
    // printf("Enter attendance :");
    // scanf("%d",&attendance);

    // if (marks > 80)
    // {
    //     if (attendance > 90)
    //     {
    //         printf("your eligible for scholarship");
    //     }else
    //     {
    //         printf("your attendance is below 90 ");
    //     }
    // }else{
    //     printf("your not eligible for the scholarship");
    // }

    int a, b;
    char op;

    // printf("Enter first number: ");
    // scanf("%d", &a);

    // printf("Enter operator (+, -, *, /, %%): ");
    // scanf(" %c", &op);

    // printf("Enter second number: ");
    // scanf("%d", &b);

    printf("Welcome to calculator !! \n which operation you want to do :");
    scanf("%d%c%d",&a,&op,&b);

    if (op == '+')
    {
        printf("Addition: %d\n", a + b);
    }
    else if (op == '-')
    {
        printf("Subtraction: %d\n", a - b);
    }
    else if (op == '*')
    {
        printf("multiplication: %d\n", a * b);
    }
    else if (op == '/')
    {
        if (b != 0)
        {
            printf("division: %d\n", a / b);
        }
        else
        {
            printf("Cannot divide by zero\n");
        }
    }
    else if (op == '%')
    {
        if (b != 0)
        {
            printf("module: %d\n", a % b);
        }
        else
        {
            printf("Cannot divide by zero\n");
        }
    }
    else
    {
        printf("Invalid operator\n");
    }





}