struct Results solution(int arr[], int n, int k) {
    struct Results result;
    short int __first_iteration__, __seconde_iteration__;
    int __TEMP__;
    for(__first_iteration__ = 1; __first_iteration__<= k; __first_iteration__++ )
    {
        __TEMP__ = arr[n-1];
        for(__seconde_iteration__ = 1; __seconde_iteration__ <= (n - 1); __seconde_iteration__++)
        {
            arr[n-__seconde_iteration__] = arr[n-__seconde_iteration__-1];
        }
        arr[0] = __TEMP__;
    }
    result.A = arr;
    result.N = n;
    return result;
}