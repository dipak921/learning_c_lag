#include<stdio.h>
int main()
{
    int a[] ={1,2,3,4,5};
    int multi = 1;

    for (int  i = 0; i < 5; i++)
    {
        multi = multi * a[i];
    }
    
    printf("%d",multi);









    return 0;
}