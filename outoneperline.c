#include <stdio.h>
/* Output one word per line */
#define IN 1
#define OUT 0


main()
{
  int c, state;
  state=OUT;

  while((c=getchar())!=EOF)
    if(c!=' ' && c!='\t' && c!='\n'){
      state=IN;
      putchar(c);
    }
    else if(state==IN){
      state=OUT;
      printf("\n");
    }
    
}
