#include<stdio.h>
#include<stdlib.h>

int prime(int *num);

int main()
{
    int num1;
    printf("Enter any number:");
    if(scanf("%d",&num1) !=1)
    {
        printf("Invalid input");
        return 1;
    }
    printf("the number is prime %d",prime(&num1));
    return 0;
}
int prime(int *num)
{
    int n = *num;
    if(n<=1)return 0;
    if(n<=3)return 1;
    if(n%3==0 || n%2==0) return 0;
    for(int i=5;i*i<n;i+=6)
    {
        if((n%i==0)||(n%(i+2)==0))
        {
            return 0;
        }
    }
    return 1;
}