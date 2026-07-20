////without return  >>> without parameter/argument
// #include <stdio.h>
// void add();

// int main() {


//     add();
// }

// void add()
// {
//     int a = 90;
//     int b = 23;
//     int c = a+b;
//     printf("Addition od %d and %d is : %d\n",a,b,c);
// }

////without return >>> with parameter/argument
// #include <stdio.h>
// void mul (int a,int b);
// int main ()
// {

// mul(2,9);
// mul(56,65);
// }

// void mul (int a,int b)
// {
//     int c = a*b;
//     printf("Multiplication of %d and %d is : %d\n",a,b,c);
// }

////with return type >>> Without argument/parameter
// #include <stdio.h>
// int div();
// int main()
// {
//     int res=div();
//     printf("%d",res);
// }
// int div()
// {
//     int a = 90;
//     int b = 7;
//     int c = a / b;
//     printf("Result :%d\n",c);
//     // return c;
// }

////
// #include <stdio.h>

// int mod(int a, int b)
// {
//     return a % b;
// }

// int main()
// {
//     // int res = mod(20, 3);
//     // printf("%d\n", res);

//     printf("%d",mod(10,3));

// }


////
// #include <stdio.h>
// float div(float a,float b);
// int main()
// {
//     float a = 90;
//     float b = 56;
//     float res=div(a,b);
//     printf("%f",res);

// }
// float div(float a,float b)
// {
//     return a/b;
// }


#include <stdio.h>

int main ()
{
    int s;
    // s=printf("technoscripts\n");
    // printf("%d",s);

    int a,b,c;
    // s=scanf("%d%d%d",&a,&b,&c);
    // printf("%d\n",s);

    // printf("%d",printf("techno_embedded\n"));

    printf("%d",scanf("%d%d%d",&a,&b,&c));
}
