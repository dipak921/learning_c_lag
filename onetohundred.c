#include<stdio.h>
int main()
{
    // for(int i = 1; i<=100; i++){
    //     if (!(i %2 == 0)){
    //         printf("%d ",i);
    //     }
        
    // }
    //table print in 19
    int n,i;
    printf("Enter a number you print a table :");
    scanf("%d",&n);
    for( i = 1; i<=10; i++){
        printf("%d ",n*i);

    }

    
    return 0;
}