#include<stdio.h>
int main(){
    // comment out code print table only 5 
    // int a = 5;
    // for(int i = 1; i<=10; i++){
    //     printf("5 x %d = %d\n" , i, a*i);
    // }


    //this code print table user define
    int i, num;
    printf("Enter a number : ");
    scanf("%d", &num);
    for(i=1; i<=10; i++){
        printf("%d * %d = %d\n",num, i, i * num);
    }


    return 0;

}