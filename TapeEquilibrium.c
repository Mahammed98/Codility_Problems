/*
    divided this array into two sides 
    LS and RS
    Rs = Arr - Ls
    then |Ls - Rs| = |ls - arr + ls| = | 2*ls - arr|
    so, we make first loop to calucalte the sumition of the array, and
    seconde to calculate the sum of lift side in each iteration 

*/


int solution(int A[], int N) 
{
    int sum_arr = 0;
    int sum_ls = 0;
    int min = 2000;
    int result = 0;
    for (int i = 0; i < N; i++)
    {
        sum_arr += A[i];
    }
    for (int j = 0; j < N-1; j++)
    {
        sum_ls += A[j];
        result = abs((2*sum_ls)- sum_arr);
        if(result < min)
        {
            min =result;
        }
    }
    return min;
}