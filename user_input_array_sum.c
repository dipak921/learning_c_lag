#include<stdio.h>
int main()
{
    int a[5];
    int sum = 0;
    printf("enter a array elememtn : ");
    for (int  i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        sum = sum + a[i];
    }

    printf("%d",sum);
    






    return 0;
}