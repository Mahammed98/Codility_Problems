/*
A non-empty array A consisting of N integers is given. The product of triplet (P, Q, R) equates to A[P] * A[Q] * A[R] (0 ≤ P < Q < R < N).

For example, array A such that:

  A[0] = -3
  A[1] = 1
  A[2] = 2
  A[3] = -2
  A[4] = 5
  A[5] = 6
contains the following example triplets:

(0, 1, 2), product is −3 * 1 * 2 = −6
(1, 2, 4), product is 1 * 2 * 5 = 10
(2, 4, 5), product is 2 * 5 * 6 = 60
Your goal is to find the maximal product of any triplet.

Write a function:

int solution(int A[], int N);

that, given a non-empty array A, returns the value of the maximal product of any triplet.

For example, given array A such that:

  A[0] = -3
  A[1] = 1
  A[2] = 2
  A[3] = -2
  A[4] = 5
  A[5] = 6
the function should return 60, as the product of triplet (2, 4, 5) is maximal.

Write an efficient algorithm for the following assumptions:

N is an integer within the range [3..100,000];
each element of array A is an integer within the range [−1,000..1,000].

*/

int cmp (const void * a, const void * b)
{
    return (*(int*)a - *(int*)b);
}

int solution(int A[], int N) {
    qsort(A, N, sizeof(int), cmp);
    int result1 = 0, result2 = 0;
    int max = -1000;
    
    /*
        after sorting array we compare beetween multi of first two elements and two elements before last one 
        if first two elements were negative numbers, so the result of mutiplaction will be positive number,so 
        we should compaer them, may be result greater than two elements before last one(n-2,and n-3)
    */
    // fixed (n-1) elements because it is the largest element 
    result1 = A[N-1] * A[N-2] * A[N-3];
    result2 = A[N-1] * A[0] * A[1];
    if(result1 > result2)
    {
        max = result1;
    }
    else 
    {
        max = result2;
    }
    return max;
    // Implement your solution here
}

