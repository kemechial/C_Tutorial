/*
count blanks, tabs and newlines...
*/

#include <stdio.h>

main(){ 
  int c, nt, ns, nl;
  nt=0;
  ns=0;
  nl=0;
  while((c=getchar())!=EOF)
	if(c=='\n')
	 ++nl;
	else if(c==' ')
	 ++ns;
	else if(c=='\t')
         ++nt;       

  printf("number of lines:  spaces: tabs:\n");
  printf("\t%d\t%d\t%d\n",nl,ns,nt);
	
   
}
