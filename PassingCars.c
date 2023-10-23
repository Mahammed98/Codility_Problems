// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N)
{
    int i = 0;
    unsigned long int counter = 0;
    int NumberOfZeros = 0;
    int result = 0;

    for(; i < N; i++)
    {
        if(A[i] == 0)
        {
            NumberOfZeros++;
        }
        if(NumberOfZeros > 0 && A[i] == 1)
        {
            counter = counter +(NumberOfZeros);
        }
    }
    if(counter > 1000000000)
    {
        result = -1;
    }
    else 
    {
        result = counter;
    }
    return result;
}