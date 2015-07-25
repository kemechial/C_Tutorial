#include <stdio.h>
#include <ctype.h>

int any(char[], char[]);

int state;
 
main()
{
 char s1[100];
 char s2[100];
 int i, c;

 printf("input the word to process\n");
 for(i=0; (c=getchar())!='\n'; ++i)
   s1[i]=c;
 s1[i]='\0';

 printf("input the word for matching:\n");
 for(i=0; (c=getchar())!='\n'; ++i)
   s2[i]=c;
 s2[i]='\0';

 printf("position of first occurrence: %d\n", any(s1,s2));
 return 0;
}

int any(char s[], char m[]){
  int i, j, k, position;
   
  position=-1;
  for(i=j=0; s[i]!='\0'; ++i){
    k=0;
    while(m[k]!='\0' && position==-1)
      if(s[i]==m[k++]){
        position=i;
      }
  }
  return position;
}
