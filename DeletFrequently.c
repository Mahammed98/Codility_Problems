#include <stdio.h>
#include <string.h>

int main()
{
    int arr[10] = {1,2,1,1,3,5,6,2};
    int freq[7] = {0};
    int counter = 0;

    for (int i = 0; i < 8; i++)
    {
        freq[arr[i]]++;
    }
    for (int i = 0; i < (sizeof(arr)/sizeof(arr[0])) - 1; i++)
    {
        
        if(freq[i] >= 1)
        {
            printf("%d ", i);
        }
    }
    
}
