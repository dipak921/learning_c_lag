#include<stdio.h>

int main(){
    // take the number as an from user 
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    printf("The multiplication table of %d is\n", n);
    for (int  i = 1; i <= 10; i++)
    {
       printf("%d X %d = %d", n,i,i*n);
       printf("\n");
    }
    
    return 0;
}