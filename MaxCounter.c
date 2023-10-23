// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

struct Results solution(int N, int A[], int M) {
    // Implement your solution here
    struct Results result;

    int max = 0;
    int i = 0;
    int j = 0;
    int *f = (int *)calloc(sizeof(int), N);
    for(i = 0; i < M; i++)
    {    
        if(A[i] > N)
        {
            for(j = 0; j < N; j++)
            {
                f[j] = max;
            }
            continue;
        }
        f[A[i]-1]++;
        if(max < f[A[i]-1])
        {
            max = f[A[i]-1];
        }
    }
    result.C = f;
    result.L = N;
    return result;
}

