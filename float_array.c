#include<stdio.h>
int main()
{
    // float a[] ={ 1.3,2.3,4.3,15.5};
    // for (int  i = 0; i < 4; i++)
    // {
    //     printf("%f ",a[i]);
    // }

    int s;
    printf("Enter size :");
    scanf("%d",&s);
    
    float a[s];
    printf("Enter float value:");
    for (int  i = 0; i < s; i++)
    {
        scanf("%f",&a[i]);
    }

    printf("Print Element :");
    for (int  i = 0; i <s; i++)
    {
        printf("%f ",a[i]);
    }
    
    
    





    return 0;

}