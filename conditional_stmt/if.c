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


    // int num;
    // printf("Enter a number here :");
    // scanf("%d",&num);

    // if(num % 5 == 0 || num % 11 == 0 )
    // {
    //     if(num % 5 == 0 && num % 11 == 0)
    //     {
    //         printf("The number is divisible by 5 and 11");
    //     }else if(num % 11 == 0)
    //     {
    //         printf("the number is divisible by 11");
    //     }else{
    //         printf("the number is divisible by 5");
    //     }
    // }else{
    //     printf("the number is not divisible by 5 and 11");
    // }
    
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
    
    ///nested-if scholarship example
    // int marks;
    // int attendance;
    // printf("Enter marks :");
    // scanf("%d",&marks);
    // printf("Enter attendance :");
    // scanf("%d",&attendance);

    // if (marks >= 80 && marks <= 100)
    // {
    //     if (attendance >= 70 && attendance < 90) {
    //         printf("your 50%% eligible for scholarship");
    //     }
    //     else if(attendance >= 90 && attendance <=100){
    //         printf("your 100%% eligible for scholarship");
    //     }else
    //     {
    //         printf("your attendance is below our requirement ");
    //     }
    // }else{
    //     printf("your not eligible for the scholarship");
    // }

    // int a, b;
    // char op;

    // printf("Welcome to calculator !! \n which operation you want to perform :");
    // scanf("%d%c%d",&a,&op,&b);

    // if (op == '+')
    // {
    //     printf("Addition of %d and %d is: \n%d\n",a,b, a + b);
    // }
    // else if (op == '-')
    // {
    //     printf("Subtraction of %d and %d is: \n%d\n",a,b, a - b);
    // }
    // else if (op == '*')
    // {
    //     printf("multiplication of %d and %d is: \n%d\n",a,b, a * b);
    // }
    // else if (op == '/')
    // {
    //     if (b != 0)
    //     {
    //         printf("division of %d and %d is: \n%d\n",a,b, a / b);
    //     }
    //     else
    //     {
    //         printf("Cannot divide by zero\n");
    //     }
    // }
    // else if (op == '%')
    // {
    //     if (b != 0)
    //     {
    //         printf("module of %d and %d is: \n%d\n",a,b, a % b);
    //     }
    //     else
    //     {
    //         printf("Cannot divide by zero\n");
    //     }
    // }
    // else
    // {
    //     printf("Invalid operator\n");
    // }


    // calculator using the switch case
    // int a, b;
    // char choice;
    // printf("Enter your choice");
    // scanf("%c",&choice);
    // printf("Enter the numbers ");
    // scanf("%d%d",&a,&b);

    // switch (choice)
    // {
    // case '+':
    //     printf("addition of %d and %d is %d",a,b,a+b);
    //     break;

    // case '-':
    //     printf("subtraction of %d and %d is %d",a,b,a-b);
    //     break;

    // case '*':
    //     printf("multiplication of %d and %d is %d",a,b,a*b);
    //     break;

    // case '/':
    //     if(b !=0)
    //     {
    //         printf("division of %d and %d is %d",a,b,a/b);
    //     }else{
    //         printf("cannot divide by zero");
    //     }
    //     break;

    // case '%':
    //     if(b !=0)
    //     {
    //         printf("module of %d and %d is %d",a,b,a%b);
    //     }else{
    //         printf("cannot divide by zero");
    //     }
    //     break;
    
    // default:
    //     printf("Enter valid operator");
    //     break;
    // }

    // char ch;
    // printf("Enter the character :");
    // scanf("%c",&ch);

    // switch (ch)
    // {
    // case 'a':
    // case 'e':
    // case 'i':
    // case 'o':
    // case 'u':
    // case 'A':
    // case 'E':
    // case 'I':
    // case 'O':
    // case 'U':
    //     printf("Vowels");
    //     break;
    
    // default:
    //     printf("Consonent");
    //     break;
    // }

    // int a;
    // printf("Enter your choice\n 1:Monday\n 2:Tuesday\n 3:Wednesday\n 4:Thirsday\n 5:Friday\n 6:saturday\n 7:Sunday\n");
    // scanf("%d",&a);

    // switch (a)
    // {
    // case 1:
    //     printf("Monday");
    //     break;

    // case 2:
    //     printf("Tuesday");
    //     break;

    // case 3:
    //     printf("Wednesday");
    //     break;

    // case 4:
    //     printf("Thirsday");
    //     break;

    // case 5:
    //     printf("Friday");
    //     break;

    // case 6:
    //     printf("Saturday");
    //     break;

    // case 7:
    //     printf("Sunday");
    //     break;
    
    // default:
    //     printf("Enter the valid input");
    //     break;
    // }

    // int a;
    // printf("Enter your choice\n 1:January\n 2:February\n 3:March\n 4:April\n 5:May\n 6:June\n 7:July\n 8:August\n 9:September\n 10:October\n 11:November\n 12:December\n");
    // scanf("%d",&a);

    // switch (a)
    // {
    // case 1:
    //     printf("January : days are 31");
    //     break;
    // case 2:
    //     printf("February : days are 28 / 29");
    //     break;
    // case 3:
    //     printf("March : days are 31");
    //     break;
    // case 4:
    //     printf("April : days are 30");
    //     break;
    // case 5:
    //     printf("May : days are 31");
    //     break;
    // case 6:
    //     printf("June : days are 30");
    //     break;
    // case 7:
    //     printf("July : days are 31");
    //     break;
    // case 8:
    //     printf("August : days are 31");
    //     break;
    // case 9:
    //     printf("September : days are 30");
    //     break;
    // case 10:
    //     printf("October : days are 31");
    //     break;
    // case 11:
    //     printf("November : days are 30");
    //     break;
    // case 12:
    //     printf("December : days are 31");
    //     break;
    
    // default:
    // printf("Enter the valid input");
    //     break;
    // }

    

}