#include<stdio.h>
int main()
{
    int roll[5];
    for (int  i = 0; i<5; i++)
    {
        printf("\nEnter a roll No : %d", i+1);
        scanf("%d",&roll[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
       printf("%d ",roll[i]);
    }
    printf("\nThe Reverse Array is :\n");

    for (int i =4; i >= 0; i--)
    {
       printf("%d ",roll[i]);
    }

    

    return 0; 
}