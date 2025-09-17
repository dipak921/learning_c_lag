#include<stdio.h>
int main()
{
    // int a = 20; //normal variable
    // int *p;      // pointer variable
    // p = &a; // store adress fo 'a' int pointer p
    // printf("%p",p);

    ////end of program.

    int a = 20;
    int *p = &a;
    *p = 10; // chage value of 'a' 
    printf("Value of a : %d\n",a);
    printf("Address of a : %p\n",&a); // memory address of 'a'
    printf("Pointer p hold  : %p\n",p); //pointer store adress of a
    printf("Value at Pointer p : %d\n",*p); // get value from address

    return 0;
}