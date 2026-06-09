#include<stdio.h>
void reverse(char *start,char *end)
{
    char temp;
    while(start<end)
    {
        temp = *start;
        *start =*end;
        *end=temp;
        start++;
        end--;
    }
}
void reversewords(char *str)
{
  if(str ==NULL)
  return;
  char *wordstart = str;
  char *temp = str;
  while(*temp !='\0')
  {
    temp++;
  }
  temp--;
  reverse(str,temp);
  temp = str;
  while(*temp != '\0')
  {
    while(*temp  ==' ')
    {
        temp++;
    }
    wordstart=temp;
    while(*temp != ' '&& *temp !='\0')
    {
        temp++;
    }
    reverse(wordstart,temp-1);
  }
}
int main()
{
    char str[] = "India is my country";
    reversewords(str);
    printf("reversed words %s",str);
    return 0;
}