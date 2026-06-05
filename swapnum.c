#include<stdio.h>

void swap(int *num1,int *num2);
int main()
{
    int num1,num2;
    printf("enter number1 :\n");
    scanf("%d",&num1);
    printf("enter num 2 :\n ");
    scanf("%d",&num2);
    printf("the numbers before swaped %d and %d\n",num1,num2);
    swap(&num1,&num2);
    printf("the numbers after swaped %d and %d\n",num1,num2);
    return 0;
}
 void swap(int * a, int * b)
 {
    int temp;
    temp = *a;
    *a = *b;
    *b =temp;
 }