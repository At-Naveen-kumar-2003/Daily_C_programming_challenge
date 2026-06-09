#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[100];
    int count=0;
    printf("Enter a String:");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i] !='\0';i++)
    {
        char st=tolower(str[i]);
        if(st=='a'|| st=='e' || st =='i' || st=='o'||st=='u')
        {
            count++;
        }
    }
    printf("total number of vowels present in this string is %d",count);
    return 0;
}