#include<stdio.h>
int main()
{
    int arr[9] = {15,45,87,63,95,8,4,89,-123};
    int max = arr[0];

    for (int  i = 0; i < 9; i++)
    {
        if (max<arr[i])
        {
           max = arr[i];
        }
        
    }
    printf("%d",max);
    





    return 0;
}