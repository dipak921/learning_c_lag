#include<stdio.h>
int main(){

    // int i = 1;
    // while (i<=10)
    // {
    //     printf("%d\n",i);
    //     i++;
    //    // i = i+2;
    // }
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d ",i);
        i= n*i;
    }
    
    

    return 0;
}