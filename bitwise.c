#include <stdio.h>
#include <ctype.h>
 
main()
{
 int c, s;

 printf("input a character\n");
 while((c=getchar())!='\n')
  s=c;
 printf("decimal representation: %d\n", s);
 printf("hexadecimal representation: %x\n", s);
 printf("set all but the last seven bits to zero with mask & 0177: %d\n", s & 0177);
 return 0;
} 


