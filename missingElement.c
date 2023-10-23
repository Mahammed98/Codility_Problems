// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

/*
    this algorithm consider that first element of the array alway equal one, (sequential elements) 
*/
int solution(int A[], int N)
{
    int iteration =  0;
    int result_1 = 0;
    int result_2 = 0;
    for(iteration =  0; iteration < N; iteration++)
    {
        result_1 += A[iteration];
    }
    for(iteration =  1; iteration <= N + 1; iteration++)
    {
        result_2 += iteration;
    }
    return (result_2 - result_1);
}
