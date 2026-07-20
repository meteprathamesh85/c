#include <stdio.h>

int main () {

    // int i = 1;
    // for (i;i <= 5;i++)
    // {
    //     printf("Hello world !\n");
    // }

    // for (int i = 1; i  <= 10; i++ )
    // {
    //     printf("no:%d\n",i);
    // }


    // for (int i = 10; i > 0; i--)
    // {
    //     printf("%d\n",i);
    // }
    
    // int i;
    // printf("enter the number: ");
    // scanf("%d",&i);
    // for(i;i > 0;i--)
    // {
    //     printf("%d\n",i);
    // }

    // int s;
    // int e;
    // printf("Enter the init and termination variable :");
    // scanf("%d%d",&s,&e);

    // printf("Even numbers between %d and %d are :",s,e);
    // for(int i = s;i <= e; i++)
    // {
    //     if(i % 2 == 0)
    //     {
    //         printf(" %d\n",i);
    //     }
    // }

    // char ch;
    // for (ch = 'a';ch <= 'z';ch++ )
    // {
    // printf("%c\t",ch);
    // }
    // printf("\n");
    // for (ch = 'A';ch <= 'Z';ch++ )
    // {
    // printf("%c\t",ch);
    // }

    // int i = 1;
    // int j;
    // printf("Enter a number :");
    // scanf("%d",&j);
    // int sum = 0;
    // printf("Addition of %d to %d is :\n",i,j);
    // for (i; i <= j; i++)
    // {
    //     sum+=i;
    // }
    // printf("%d",sum);


    ///factorial from user input 
    // int i = 1;
    // int j;
    // printf("Enter a number :");
    // scanf("%d",&j);
    // int sum = 1;
    // printf("factorial of %d is :\n",j);
    // for (i; i <= j; i++)
    // {
    //     sum*=i;
    // }
    // printf("%d",sum);


    ///factor of numbers
    // int i = 1;
    // int j;
    // printf("Enter your number :");
    // scanf("%d",&j);

    // for(i;i <= j;i++)
    // {
    //     if(j % i ==0)
    //     {
    //         printf("%d\n",i);
    //     }
    // }


    //prime numbers
    // int i = 1;
    // int num;
    // int count = 0;
    // printf("Enter your number :");
    // scanf("%d",&num);

    // for(i;i <= num;i++)
    // {
    //     if(num % i == 0)
    //     {
    //         count ++;
    //         printf("%d\n",i);
    //     }
        
    // }
    // printf("\n number of factorial of %d is : %d\n",num,count);

    // if( count <= 2)
    // {
    //     printf("the number %d is prime number :\n",num);
    // }
    // else
    // {
    //     printf("The number %d is not prime number \n",num);
    // }

    ///failed try
    // int c;
    // int num;
    // printf("Enter a number");
    // scanf("%d",&num);
    // for (int a = 1; a < num; a++)
    // {
    //     for(int b = 0; b < num; b++ )
    //     {
    //         printf("%d",a+b);
    //     }
    // }


    ///febunachi series
    // int a = 0;
    // int b = 1;
    // int c = 0;
    // printf("%d%d\n",a,b);

    // for(int i = 0; i <= 10; i++)
    // {
    //     printf("%d\t",c);
    //     c = a+b;
    //     a = b;
    //     b = c;
    // }

    // for (;;)
    // {
    //     printf("hello \n");
    // }
    
    ///all codes of embedded written in the loop whether it is a for while or do-while


    ///if we use two conditions at a time for for loop then it will execute till the both conditions will satisfy if the one condition is terminated still it will execute till another is not satisfy.

    //for loop default way
    // int i = 0;
    // for (i =0;i <= 10;i++)
    // {
    //     printf("%d\n",i);
    // }

    ///for loop initializing before for block and inc at(update in) block of code
    // int i = 0;
    // for (;i <= 10;)
    // {
    //     printf("%d\n",i);
    //     i++;
    // }

    // int i = 0;
    // int j = 0;
    // for (;i <= 5,j <= 10;)
    // {
    //     printf("%d\t %d\n",i,j);
    //     i++;
    //     j++;
    // }

}
