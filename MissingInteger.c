// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");


/*
    This efficiant algorithm with O(n) or O(n * log n)
            first we should sort the array using quick sort algorithm, but here
             i used quick sort function from stdlib file
*/
#include <stdlib.h>
#include <stdio.h>
int cmp(const void * a, const void *b)
{
    return (*(int*)a - *(int*)b);
}
int solution(int A[], int N)
{
    int flag = 1;
    qsort(A, N, sizeof(int), cmp);
    /* 
        CASE 1
                 if all elements are negative
        (last element must be negative after sorting)
    */
    if((A[N -1] < 0))
    {
        return 1;
    }
    /*
        CASE 2
        if 1 doesn't exist on the array
        so, it must be the smallest missing element on the array
    */
    for(int i = 0; i < N; i++)
    {
        if(A[i] == 1)
        {
            flag = 0;
            break;
        }
    }
    if(flag)
    {
        return 1;
    }
    /*
        CASE 3
        missing element between two elements
    */
    for(int i = 0; i < N; i++)
    {
        if((A[i] > 0) && ((A[i+1] - A[i]) > 1))
        {
            return A[i] + 1;
        }
    }

    return (A[N -1] + 1);  // DEFULT (return value of last element + 1)
    
    /*
        //********************  not efficiant algorithm O(n^2)  *************************\\

    int flag = 0;
    int counter = 1;

    for(int j = 0; j < N; j++)
    {
   
        if(counter == A[j])
        {
            counter++;
             j = 0;
        }
    }  
    return counter; 
    */ 
}