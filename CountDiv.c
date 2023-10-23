// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A, int B, int K)
{
    int counter = 0;  
    counter = (B / K) - (A / K);
    if(A % K == 0)
    {
        counter++;
    }
return counter;
}