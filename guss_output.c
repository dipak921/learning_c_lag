// #include<stdio.h>

// int main(){
//     int a = 10;
//     int c, b = 20;
//     c =a;
//     a = b;
//     b = c;
//     printf(" a = %d and b = %d", a,b);
//     return 0;
// }

#include <stdio.h>

int main()
{
    // int a = 10, b = 20;

    // a = a + b;
    // b = a - b;
    // a = a - b;

    // printf("After swap: a = %d, b = %d\n", a, b);

    // int a = 5, b = -7, c = 0, d;
    // d = ++a && ++b || ++c;
    // printf("\n %d %d %d %d", a, b, c, d);

    // int a = 10, b = 5, c = 5, d;
    // d = b + c == a;
    // printf("\n %d", d);

    // int a = 10, b = 5, c = 5;
    // b != !a;
    // c = !!a;
    // printf("\n %d / t %d", b, c);

    // int x=2,y=0,z;
    // z=y && (y!=10);
    // printf("%d",z);

    int x = 2, y = 0, z;
    z = (y++, y);
    printf("%d", z);

    return 0;
}