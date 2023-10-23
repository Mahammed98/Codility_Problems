// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int X, int A[], int N)
 {
    // Implement your solution here
    int result = -1;
    int iteration = 0;
    int counter = 0;          // to count a number of leaves to reache the desired position (X must = counter) 
    int freq [100001] = {0};  // array to store a number of frequantly of elements
    // iterat until end of array 
    while(iteration != N)
    {
       if(freq[A[iteration]] == 0) 
       {
           freq[A[iteration]]++;
           counter++;
       } 
       if(counter == X) // if all leaves from 1 to X were fall, then break from loop
       {
           break;
       }
        iteration++;
    }
    if(counter == X)
    {
        result = iteration;
    }
    return result;
}

