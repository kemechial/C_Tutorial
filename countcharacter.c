#include <stdio.h>

main(){
  long nc; 
  nc=0;
  while(getchar()!=EOF){
     printf("in while loop, reading with getchar()\n");
     ++nc;
}
  
  printf("%ld\n",nc);
}

