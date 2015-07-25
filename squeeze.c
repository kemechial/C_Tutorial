#include <stdio.h>
#include <ctype.h>

void squeeze(char[], int);

main()
{
 char s1[100];
 int i, c;
 printf("input the word to process\n");
 for(i=0; (c=getchar())!='\n'; ++i)
   s1[i]=c;
 s1[i]='\0';
 printf("input the character to remove:\n");
 c=getchar();
 squeeze(s1,c);
 printf("processed word: %s\n", s1);
 return 0;
}

void squeeze(char s[], int c){
  int i,j;
   
  for(i=j=0; s[i]!='\0'; ++i)
    if(s[i]!=c)
       s[j++]=s[i];
  s[j]='\0';
}
