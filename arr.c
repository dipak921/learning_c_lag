//collection of similar data typws stored at contiguous memory location

#include<stdio.h>
int main()
{


    int a[] = {10,20,30,40,50};
    //int size = sizeof(a[0]);
    for (int  i = 0; i <=5; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
    int marks[4];
    printf("enter marks phy : ");
    scanf("%d",&marks[0]);

    printf("enter marks chme : ");
    scanf("%d",&marks[1]);
    
    printf("enter marks math : ");
    scanf("%d",&marks[2]);
    
    printf("enter marks bio : ");
    scanf("%d",&marks[3]);

    printf("phy = %d chem = %d math= %d bio =%d ", marks[0],marks[1], marks[2], marks[3]);



    return 0;
}