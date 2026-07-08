#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    int *arr;

    printf("Enter the number:");
    scanf("%d",&n);

    arr = (int *)calloc(n,sizeof(int));
    if(arr== NULL)
    {
        printf("Memory allocation is failed");
        return 1;
    }
    printf("The Values initilized before (garbage values)");
    for(int i=0;i<n;i++)
    {
        printf("arr[%d] = %d   \n",i,arr[i]);
    }
    printf("Enter the values :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The values are:");
      for(int i=0;i<n;i++)
    {
        printf("arr[%d] = %d   \n",i,arr[i]);
    }
    free(arr);
    arr = NULL;
    return 0;

}