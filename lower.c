#include <stdio.h>
#include <ctype.h>

int lower(int);

main()
{
 int c,s;
 printf("insert an uppercase character: \n");
 while((c=getchar())!='\n'){
   s=c;
 }
 printf("result: %c\n", lower(s));
}

int lower(int c){
 return (c>='A' && c<='Z')? c+'a'-'A': c; 
}
