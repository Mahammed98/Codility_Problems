// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
long long solution(int A[], int N) { 
    long long result = 0;
    long long __FREQUANCY__[100000000] = {0};

    for(int __iteration__ = 0; __iteration__ < N; __iteration__++)
    {
        __FREQUANCY__[A[__iteration__]]++;
    }
   for(long long __SEC_iteration__ = 1; __SEC_iteration__ < 100000000; __SEC_iteration__ = __SEC_iteration__+2)
    {
       if(__FREQUANCY__[__SEC_iteration__] % 2)
       {
            result = __SEC_iteration__;
            break;
       }
       else
       {
           // continuo; 
       }
    } 
    return result;
}
