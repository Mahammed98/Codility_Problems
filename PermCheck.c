/*
    we check the sumition of elements of array, and check sumition of numbers from 1 to N 
    if they equal, then this is premutation array (result = 1), if not (result = 0)

*/

int solution(int A[], int N)
{
    int result = 1;
    int counter = 0;
    int sum = 0;
    int sum_2 = 0;
    int flag = 0;
    int *ptr = (int *)calloc(N,sizeof(int)); // dynamic allocation

    for(int iteration = 0; iteration < N; iteration++)
    {
        sum += A[iteration];             // sumition of elements in array 
        if(A[iteration] > 100000)        // if any element of array larger than 100000
        {
            flag = 1;
            break;
        }

        if(ptr[A[iteration]] == 0)
        {
            ptr[A[iteration]]++;
            counter++;
           
        }
        else         // if any elemet recurring 
        {
            flag = 1;
            break;
        }
    }
    /*
        making this flag to skip 2nd sumition process (reducing runtime)   
    */
    if(flag)
    {
        result = 0;
    }
    else 
    {
        /*
            check the sum of elements  from 1 to N
        */
        for(int iteration_2 = 1; iteration_2 <= N; iteration_2++)
        {
            sum_2 += iteration_2;
        }
        if(sum_2 != sum)
        {
            result = 0;
        }
    }
    
    return result;
}