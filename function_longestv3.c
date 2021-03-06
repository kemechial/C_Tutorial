#include <stdio.h>
#define MAXLINE 1000 /*maximum input line size */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* print lines that are longer than 80 characters.*/

main()
{
  int len;
  char line[MAXLINE];

  while((len=get_line(line, MAXLINE))>0)
   if(len>80)
     printf("This line was longer than 80: %s", line);
  return 0;
}

int get_line(char s[], int lim){
  
  int c, i;
  
  for(i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
     s[i]=c;
  if(c=='\n'){
    s[i]=c;
    ++i;
  }
  s[i]='\0';
  return i;
}


