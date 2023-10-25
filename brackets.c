/*
A string S consisting of N characters is considered to be properly nested if any of the following conditions is true:

S is empty;
S has the form "(U)" or "[U]" or "{U}" where U is a properly nested string;
S has the form "VW" where V and W are properly nested strings.
For example, the string "{[()()]}" is properly nested but "([)()]" is not.

Write a function:

int solution(char *S);

that, given a string S consisting of N characters, returns 1 if S is properly nested and 0 otherwise.

For example, given S = "{[()()]}", the function should return 1 and given S = "([)()]", the function should return 0, as explained above.

Write an efficient algorithm for the following assumptions:

N is an integer within the range [0..200,000];
string S is made only of the following characters: '(', '{', '[', ']', '}' and/or ')'.
*/

int solution(char *S) 
{
    int top = 0;
    int i = 0;
    int str = strlen(S);
    int result = 0;
    if(str == 0 || str % 2 == 1)
    {
        result  = 0;
    }
    else 
    {
        char * stack = (char*)malloc(sizeof(char) * (str / 2));  // creat a stack 
        stack[top] = S[i];  // adding first first character to the first element on stack 
        i++;
        while(i != str)  // ending when i equal to strlen(string)
        {
            //pop exsisting element
            if(((stack[top]+1) == S[i]) || ((stack[top] + 2) == S[i]))
            {
                top--;  
                i++;
            } 
            else    //push new element 
            {
                top++;
                stack[top] = S[i];
                i++;
            }
        }
        if(top == -1)  // stack become empty 
        {
            result = 1;
        }
        else // stacl not empty
        {
            result = 0;
        }
    }
    return result;

}
