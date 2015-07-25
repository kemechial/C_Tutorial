#include <stdio.h>
#define MAXLINE 1000 /*maximum input line size */

int get_line(char line[], int maxline);
void reverse(char out[], char in[], int maxline);

/* print the reverse of a line */

main()
{
  int len;
  char line[MAXLINE];
  char rev[MAXLINE];

  while((len=get_line(line, MAXLINE))>0){
    reverse(rev, line, len);
    printf("%s", rev);
  }
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


void reverse(char to[], char from[], int len){
   int i;
   int k;
   if(from[len-1]=='\n'){
	to[len-1]='\n';
        k=2;
      }else{
        k=1;     	
    }
   for(i=len-k; i>=0; --i)
        to[len-k-i]=from[i]; 
 
   to[len]='\0';
}
