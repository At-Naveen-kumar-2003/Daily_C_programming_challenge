#include<stdio.h>
void inputarray(int num,int arr[]);
int sumarray(int num ,int arr[]);
int main()
{
    int num;
    printf("enter the number of elements:");
    scanf("%d",&num);
    int arr[num];
    inputarray(num,arr);
    int total = sumarray(num,arr);
    printf("total value%d:",total);
    return 0;
}
void inputarray(int num,int arr[])
{
    int i;
    printf("TOTAL ELEMENTS:%d\t",num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
}
int sumarray(int num,int arr[])
{
    int i,count=0;
    printf("the sum of arrays:\n");
    for(i=0;i<num;i++)
    {
        count+=arr[i];
    }
    return count;
}