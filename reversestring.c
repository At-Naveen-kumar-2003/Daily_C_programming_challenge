#include<stdio.h>
#include<string.h>
void swap(char *str);

int main()
{
    char string[100];
    
    printf("enter a string:\n");
    scanf("%s",string);
    swap(string);
    printf("after swap string :%s \n",string);
    return 0;
}
void swap(char *string)
{
    char *start;
    char * stop;
    char temp;

    start = string;
    stop = start+ strlen(string)-1;
    while(start<stop)
    {
      temp = *start;
      *start = *stop;
      *stop = temp;
      start++;
      stop--;
    }
    
}