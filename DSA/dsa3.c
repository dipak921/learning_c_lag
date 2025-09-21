// #include<stdio.h>

// int main(){
//     int arr[] = {1,12,3,54,5,67,654};
//     int max = 0;
//     for (int i = 0; i < 7; i++)
//     {
//         if (arr[i]> max)
//         {
//             max = arr[i];
//         }
       
//     }
//      printf("The maxumum array element is : %d",max);

//     return 0;
// }

//end code

// use function to print maximun value

#include<stdio.h>

int returnMax(int array[], int n)
{
    int max = 0;
    for (int i = 0; i < 7 ; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
    
}

int main(){
    int arr[] = {1,12,3,54,5,67,654};
    //int max = returnMax(arr,7);
    //printf("The maxumum array element is : %d",max);

    int a[] = {112,568,457,54};
    int max = returnMax(a,4);
    printf("The maxumum array element is : %d",max);
    return 0;
}