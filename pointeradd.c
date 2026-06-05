#include<stdio.h>

#define SIZE 4

int main()
{
    int arr[SIZE]={11,22,33,44};

    int count=0;

    int *ptr;

    ptr=&arr[0];

    while(count<SIZE)
    {
        printf("current value is %d\n", *(ptr+count));

        count++;
    }

    return 0;
}