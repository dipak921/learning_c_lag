
#include<stdio.h>
int main()
{
    int a[] = {15,48,78,65,55};
    int max = a[0];

    for(int i = 0; i<5; i++){
        if(a[i] < max){ // minium
            max = a[i];
        }
    }

    printf("%d", max);


    return 0;
}