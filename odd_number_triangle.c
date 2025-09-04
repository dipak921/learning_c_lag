#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);

    // for(int i = 1; i<=n; i++){
    //     for(int j= 1; j<=n; j+=2){
    //         printf("%d ",j);
    //     }
    //     printf("\n");
    // }
    //OUTPUT
    // Enter a number :7
    //     1 3 5 7 
    //     1 3 5 7 
    //     1 3 5 7 
    //     1 3 5 7 
    //     1 3 5 7 
    //     1 3 5 7 
    //     1 3 5 7     

    
    for(int i=1; i<=n; i++)
    {
        int a = 1;
        for(int j = 1; j<=i;j++)
        {
            printf("%d",a);
            a = a+ 2;
        }
        printf("\n");
    }

    //OUTPUT
    // Enter a number :4
    //     1
    //     13
    //     135
    //     1357


    return 0;
}