/*  
        Task description
        A non-empty array A consisting of N integers is given. A pair of integers (P, Q), such that 0 ≤ P < Q < N, is called a slice of array A (notice that the slice contains at least two elements). The average of a slice (P, Q) is the sum of A[P] + A[P + 1] + ... + A[Q] divided by the length of the slice. To be precise, the average equals (A[P] + A[P + 1] + ... + A[Q]) / (Q − P + 1).

        For example, array A such that:

            A[0] = 4
            A[1] = 2
            A[2] = 2
            A[3] = 5
            A[4] = 1
            A[5] = 5
            A[6] = 8
        contains the following example slices:

        slice (1, 2), whose average is (2 + 2) / 2 = 2;
        slice (3, 4), whose average is (5 + 1) / 2 = 3;
        slice (1, 4), whose average is (2 + 2 + 5 + 1) / 4 = 2.5.
        The goal is to find the starting position of a slice whose average is minimal.

        Write a function:

        int solution(int A[], int N);

        that, given a non-empty array A consisting of N integers, returns the starting position of the slice with the minimal average. If there is more than one slice with a minimal average, you should return the smallest starting position of such a slice.

        For example, given array A such that:

            A[0] = 4
            A[1] = 2
            A[2] = 2
            A[3] = 5
            A[4] = 1
            A[5] = 5
            A[6] = 8
        the function should return 1, as explained above.

        Write an efficient algorithm for the following assumptions:

        N is an integer within the range [2..100,000];
        each element of array A is an integer within the range [−10,000..10,000].
*/

/*  
    slices of 4 or more elements always contain a smaller slice with lower avarage 
    so, we take slice of  2 or 3  elements (value1 and value2)
*/

int solution(int A[], int N) {
    // Implement your solution here
    float minimal = 10000.0;   
    float value1 = 0.0;
    float value2 = 0.0;
    int start_position = 0;
    for(int i = 0; i < N-2; i++)
    {
        value1 = (float)(A[i] + A[i+1]) / 2; 
        value2 = (float)(A[i] + A[i+1] + A[i+2]) / 3; 
        if(value1 < minimal)
        {
            minimal = value1;
            start_position = i;
        }
        else if(value2 < minimal)
        {
            minimal = value2;
            start_position = i;
        }
        
    }
    if(((float)(A[N-1] + A[N-2]) / 2) < minimal) // if last two elements have minimal avarage value
    {
        start_position = N-2;
    }
    return start_position;
}
