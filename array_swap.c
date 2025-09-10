#include<stdio.h>
int main()
{
    int a[] = {2,1,3,5,4,7,6};

   // printf("%d ",a[0]);

    for(int i = 0; i<7; i++)
    {
        for(int j = 0;j<=6; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
      
        printf("%d ",a[i]);
        
    }
    return 0;
}