#include<stdio.h>
int main()
{
    unsigned int num1;
    printf("enter a decimal number:");
    scanf("%u",&num1);
    printf("Binary:");
    for(int i=8;i>=0;i--)
    {
        printf("%d",(num1>>i)&1);
    }
    return 0;
}