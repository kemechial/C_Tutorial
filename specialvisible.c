/*
replace tab with \t, backspace with \b, backslash with \\
*/

#include <stdio.h>

main(){ 
  int c;
	
  while((c=getchar())!=EOF)
	if(c=='\t')
	printf("\\t");
	else if(c=='\b')
	 printf("\\b");
	else if(c=='\\')
	  printf("\\\\");
        else
	 putchar(c);  

	  
}
