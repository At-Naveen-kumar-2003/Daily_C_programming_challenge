#include<stdio.h>
#include<stdlib.h>

unsigned char nibble(unsigned char reg, int pos);

int main()
{
    int pos;
    unsigned char reg;
    printf("Enter position and register:\n");
    scanf("%hhx %d",&reg,&pos);
    printf("%d",nibble(reg,pos));
    return 0;
}
unsigned char nibble(unsigned char reg, int pos)
{
  if(pos==0)
  {
    reg&= 0x0F;
  }
  else
  {
    reg= (reg>>4)& 0x0F;
  }
  return reg;
}