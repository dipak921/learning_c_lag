#include<stdio.h>
int main()
{
    // for(int i = 1; i<=4; i++){
    //     for(int j= 1; j<=4-i; j++){
    //         printf(" ");
    //     }
    //     for(int j = 1; j<=i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    //OUTPUT
    //    * 
    //   * * 
    //  * * * 
    // * * * *

    // for(int i = 3; i>=0; i--){
    //     for(int j = 0;j<=3-i; j++)
    //     {
    //         printf(" ");
    //     }
    //     for(int j= 1; j<=i; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    /* out put
    * * * 
     * * 
      * 
    */
   for(int i = 3; i>=0; i--){
        for(int j = 0; j<=3-i; j++)
        {
            printf(" ");
        }
        for(int j= 1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    /*
    Out put
    ***
     **
      *
    */

    for(int i = 3; i>=0; i--){
        for(int j = 0; j<=3-i; j++)
        {
            printf(" ");
        }
        for(int j= 1; j<=i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    /*
    Out put
      ***
      **
       *
    */


    return 0;
}