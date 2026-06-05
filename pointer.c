#include <stdio.h>

#define SIZE 3

int main()
{
    int arr[SIZE] = {10,20,30};
    int *ptr;

    ptr = &arr[0];

    int count = 0;

    while(count < SIZE)
    {
        printf("%d ", *ptr);
        ptr++;
        count++;
    }

    return 0;
}