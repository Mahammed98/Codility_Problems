
/*
We draw N discs on a plane. The discs are numbered from 0 to N − 1. An array A of N non-negative integers, specifying the radiuses of the discs, is given. The J-th disc is drawn with its center at (J, 0) and radius A[J].

We say that the J-th disc and K-th disc intersect if J ≠ K and the J-th and K-th discs have at least one common point (assuming that the discs contain their borders).

The figure below shows discs drawn for N = 6 and A as follows:

  A[0] = 1
  A[1] = 5
  A[2] = 2
  A[3] = 1
  A[4] = 4
  A[5] = 0


There are eleven (unordered) pairs of discs that intersect, namely:

discs 1 and 4 intersect, and both intersect with all the other discs;
disc 2 also intersects with discs 0 and 3.
Write a function:

int solution(int A[], int N);

that, given an array A describing N discs as explained above, returns the number of (unordered) pairs of intersecting discs. The function should return −1 if the number of intersecting pairs exceeds 10,000,000.

Given array A shown above, the function should return 11, as explained above.

Write an efficient algorithm for the following assumptions:

N is an integer within the range [0..100,000];
each element of array A is an integer within the range [0..2,147,483,647].

*/
int cmp(const void*a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int solution(int A[], int N) 
{
    int * ArrStart = (int *)malloc(sizeof(int) * N);   // start points array (right discs)
    int * ArrEnd = (int *)malloc(sizeof(int) * N);     // end points array (left discs) 
    int c1 = 0;  // number of discs
    int result = 0;    // number of intersect discs
    int j = 0;

    /*
        add end points and start points (left and right disc's point)
    */
    for(int i = 0; i < N; i++)
    {
        ArrStart[i] = i - A[i];
        ArrEnd[i] = i + A[i];
    }
    /*
        sorting start points array and end points array
    */
    qsort(ArrStart, N, sizeof(int), cmp); 
    qsort(ArrEnd, N, sizeof(int), cmp);
    for(int i = 0; i < N; i++)
    {
        while(ArrEnd[j] < ArrStart[i])
        {
            j++;
            c1--;
        }
              
        if(ArrStart[i] <= ArrEnd[j]) // intersecting discs
        {
            if((c1 > 0))
            {
                result += c1;  //
            }
            c1++; 
        }
        
        
    }
    if(result > 10000000)
    {
        return -1;
    }
    else 
    {
        return result;
    }
}