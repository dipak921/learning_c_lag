#include<stdio.h>
int main()
{
    int sum = 0;
    int a[] = {10,20,30,40};
   // int b[] = {40,50,60,70};

    for(int i = 0; i<3; i++){
        sum=sum + a[i];
    }
    
    

    printf("%d", sum);


    return 0;
}