#include<stdio.h>
int main()
{
    int arr[10];
    int i,j,count=0;
    printf("enter the array values:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("sum of arrays:\n");
    for(j=0;j<10;j++)
    {
        count+=arr[j];
        // printf("count on %d time",j);
    }
    printf("total count = %d",count);
    return 0;
}