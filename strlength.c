#include <stdio.h>

int str_len(char[]);

char wrd[10];

main(){
  int i, l, c;
  for(i=0; i<9 && (c=getchar())!=EOF; ++i)
    wrd[i]=c;
  wrd[i]='\0';
  l=str_len(wrd);
  printf("length is: %d\n character arrays reads to: %s", l, wrd);
  return 0;

}

int str_len(char s[]){
  int i=0;
  while(s[i]!='\0')
    ++i;
  return i;

}
