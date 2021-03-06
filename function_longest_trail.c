#include <stdio.h>
#define MAXLINE 1000 /*maximum input line size */
#define IN 1
#define OUT 0

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* remove trailing blanks and tabs, 
delete entirely blank lines */

main()
{
  int len;
  char line[MAXLINE];


  while((len=get_line(line, MAXLINE))>0)
     printf("%s",line);
  return 0;
}

int get_line(char s[], int lim){
  
  int c, i, state;
  state=OUT;
  for(i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
	if(c==' ' || c=='\t'){
	  if(state==IN)
     	    s[i]=c;
	  else
           --i;
	}else{
	  s[i]=c;
	  state=IN;
	}
   	
  if(c=='\n'){
    s[i]=c;
    ++i;
  }
  s[i]='\0';
  return i;
}



