#include <stdio.h>
#define MAXLINE 1000 /*maximum input line size */

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line, v2: print length of lines, and text*/

main()
{
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];
  int textlen;

  max=0;
  textlen=0;
  while((len=get_line(line, MAXLINE))>0){
    if(len>max){
      max=len;
      copy(longest, line);
    }
    textlen=textlen+len;
    printf("This line was %d character(s) long.\n", len);
  }

  if(max>0) /* there was a line */
    printf("The longest line was: %s", longest);
    printf("Text was %d character(s) long.\n", textlen);
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


void copy(char to[], char from[]){
   int i;
   i=0;
   while((to[i]=from[i])!='\0')
     ++i;		
}
