/*
A binary gap within a positive integer N is any maximal sequence of consecutive zeros that is surrounded by ones at both ends in the binary representation of N.

For example, number 9 has binary representation 1001 and contains a binary gap of length 2. 
The number 529 has binary representation 1000010001 and contains two binary gaps: one of length 4 and one of length 3. 
The number 20 has binary representation 10100 and contains one binary gap of length 1. The number 15 has binary representation 1111 and has no binary gaps.
 The number 32 has binary representation 100000 and has no binary gaps.

Write a function:
int solution(int N);

that, given a positive integer N, returns the length of its longest binary gap. The function should return 0 if N doesn't contain a binary gap.

For example, given N = 1041 the function should return 5,
 because N has binary representation 10000010001 and so its longest binary gap is of length 5. Given N = 32 the function should return 0,
  because N has binary representation '100000' and thus no binary gaps.

Write an efficient algorithm for the following assumptions:

N is an integer within the range [1..2,147,483,647].
*/

int solution(int N) 
{
    /*
        intilaization vaiables    
    */
    int Local_u32_Value = 0;
    int Local_u32_Increament = 0;
    int Local_u32_Count = 0;
    int Local_u32_Maximum = 0;
    char Local_u8_FlagStart = 0;
    while(Local_u32_Increament < 32)
    {
        Local_u32_Value = 1 << Local_u32_Increament ;
        if(N & Local_u32_Value)     /// anding result > 0
        {
            Local_u8_FlagStart = 1;       // start flag counting after, if anding result equal to 0 
            if(Local_u32_Count > Local_u32_Maximum)
            {
                Local_u32_Maximum = Local_u32_Count;
            }
            Local_u32_Count = 0;   

        }
        else if(((N & Local_u32_Value) == 0) && (Local_u8_FlagStart == 1))      // anding result = 0
        {
            Local_u32_Count++;
        }
        else 
        {
            // no action 
        }
        Local_u32_Increament++;
    }
    return Local_u32_Maximum;
}
