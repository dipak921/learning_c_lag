#include<stdio.h>
int main()
{
    int a[]= {1,2,3,4,5,6,7,8,9};
    for (int  i = 0; i < 10; i++)
    {
        if (a[i] %2==0)
        {
            a[i] = a[i] *2;
        }
        else
        {
            a[i] = a[i] + 10;
        }
        
    }
    
    for (int  i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    








    return 0;
}