// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int X, int Y, int D) 
{
    int result = (Y - X) / D;
    if((result*D + X) < Y)
    {
        result = result + 1;
    }
    else
    {
        //nothing
    }
    return result;
}