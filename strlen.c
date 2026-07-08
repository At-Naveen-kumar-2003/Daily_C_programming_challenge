#include<stdio.h>
#include<stdint.h>

int custom_strlen(const char *str)
{
    int count=0;
    while(str[count]!='\0')
    {
        count++;
    }
    return count;
}
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    int i=0;
    while(str[i] != '\0')
    {
        if(str[i]=='\n')
        {
            str[i]='\0';
            break;
        }
        i++;
    }
    printf("%d",custom_strlen(str));
    return 0;
}
