#include<stdio.h>
int main(){

    // for(int i = 1; i<=100; i++){
    //     if (i%2==0)
    //     {
    //         continue;
    //     }
    //     printf("%d ",i); 
    // }  
    int x = 4,y,z;
    z= --x;
    y= x--;
    printf("%d %d %d\n",x,y,z);


    return 0;
}