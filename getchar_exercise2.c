#include <stdio.h>

main(){
/*
int a;

a=EOF;

putchar(a);
printf("\n");
int b=getchar()!=EOF;
putchar(b);
printf("\n");
*/
printf("%c\t%d\n",EOF,getchar()!=EOF);
int a=EOF;
printf("The machine representation of 'end of line' charachter (dec)\n");
printf("%d\n",a);
printf("The machine representation of 'end of line' charachter (hex)\n");
printf("%x\n",a);
}


