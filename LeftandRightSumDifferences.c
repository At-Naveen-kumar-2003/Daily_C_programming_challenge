#include<stdio.h>
#include<stdlib.h>
int* leftRightDifference(int* nums, int numsSize, int* returnSize)
{
    int total =0;
    for(int i=0;i<numsSize;i++)
    {
        total+=nums[i];
    }
    int * ans = (int *)malloc(numsSize * sizeof(int));
    int leftsum =0;
    int right ;
    for(int i=0;i<numsSize;i++)
    {
      right = total -leftsum-nums[i];
      ans[i]= abs(leftsum-right);
      leftsum+=nums[i];

    }
    *returnSize = numsSize;
    return ans;
}
int main()
{
    int n;
    printf("enter the number of elements");
    scanf("%d",&n);
    int * nums = (int *)malloc(n * sizeof(int));
    printf("enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    int returnSize;
    int *result = leftRightDifference(nums,n,&returnSize);
    printf("Output\n");
    for(int i=0;i<n;i++)
    {
      printf("%d\n",result[i]);
    }
    free(nums);
    free(result);
    return 0;
}