#include <stdio.h>
#include <ctype.h>
#define IN 0
#define OUT 1

void squeeze(char[], char[]);

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

 squeeze(s1,s2);

 printf("processed word: %s\n", s1);
 return 0;
}

void squeeze(char s[], char m[]){
  int i, j, k;
   
  for(i=j=0; s[i]!='\0'; ++i){
    k=0;
    state=OUT;
    while(m[k]!='\0')
      if(s[i]==m[k++])
        state=IN;
    if(state)
      s[j++]=s[i];
  }
  s[j]='\0';
}
