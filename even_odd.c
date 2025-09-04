#include <stdio.h>

int main() {
//     int i,j;
//     for (int i = 1;i<=2; i++)
//    {
//      {
//         for(j= i; j<=10; j+=2)
//         printf("%d ",j);
//     }
//     printf(" \n");
//    }




    // int i, j;

    // printf("Even numbers:\n");
    // for (i = 1; i <= 1; i++) { // Outer loop for grouping
    //     for (j = 1; j <= 20; j++) { // Inner loop for checking even
    //         if (j % 2 == 0) {
    //             printf("%d ", j);
    //         }n
    //     }
    //     printf("\n");
    // }

    // printf("\nOdd numbers:\n");
    // for (i = 1; i <= 1; i++) { // Outer loop for grouping
    //     for (j = 1; j <= 20; j++) { // Inner loop for checking odd
    //         if (j % 2 != 0) {
    //             printf("%d ", j);
    //         }
    //     }
    //     printf("\n");
    // }


    for(int i=1; i<=2;i++){
        for(int j= 1; j<=10;j++){
            if(j%2==0 && i==1){
                printf("%d ",j);
            }
            else if (j%2!=0 && i==2)
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }
    
    return 0;
}