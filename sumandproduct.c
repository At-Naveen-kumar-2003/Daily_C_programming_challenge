#include<stdio.h>
static int sum=0, product=0;
int sumandproduct(int* a,int *b);
int main()
{
    int a=0,b=0;
    printf("ENTER TWO NUMBERS");
    scanf("%d",&a);
    printf("ENTER TWO NUMBERS");
    scanf("%d",&b);
    sumandproduct(&a,&b);
    return 0;

}
int sumandproduct(int *a,int *b)
{
    sum=*a+*b;
    product=(*a)*(*b);
    printf("SUM OF TWO NUMBERS IS %d",sum);
    printf("PRODUCT OF TWO NUMBERS IS %d",product);
    return 0;
}