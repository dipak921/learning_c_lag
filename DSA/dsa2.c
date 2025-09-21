#include<stdio.h>

int main(){
    int n;
    int sum = 0;
    printf("Enter the last natural number yout want the sum of \n");
    scanf("%d", &n);
    // sum = 1+2+3+4+5..............n
    
    //runs in lienar time
    // for (int  i = 1; i <= n; i++)
    // {
    //      sum = sum + i; // second methos to type this sum +=i;  
    // }
    
    //runs in constant time 
    //without for loop solve ex
    sum = (n*n+n)/2;

    printf("The sum of Natural Number is : %d", sum);
    
    return 0;
}