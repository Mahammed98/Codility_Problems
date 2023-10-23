#include <stdio.h>

int main()
{
    int arr1[10] = {2,4,6,8,10};
    int arr2[5] = {1,3,5,7,9};
    //printf("welcome");

    int arr1_len = sizeof(arr1) / sizeof(arr1[0]);
    int arr2_len = sizeof(arr2) / sizeof(arr2[0]);

    for(int i = 0,j = 0; j < arr2_len; i = i+2, j++)
    {
        arr1[arr1_len - i - 1] = arr1[arr2_len - j - 1];
        arr1[arr1_len - i - 2] = arr2[arr2_len - j - 1];
    }
    /*
        if first array start from 0 (0,2,4,6,8), then 
        for(int i = 0,j = 0; j < arr2_len; i = i+2, j++)
    {
        arr1[arr1_len - i - 2] = arr1[arr2_len - j - 1];
        arr1[arr1_len - i - 1] = arr2[arr2_len - j - 1];
    }
    
    */

    // print array
    for(int k = 0; k < arr1_len; k++)
    {
        printf("%d ", arr1[k]);
    }
    
}