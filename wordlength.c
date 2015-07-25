#include <stdio.h>
#define IN 1
#define OUT 0

main()
{
 int c,i,l,wl,state;
 int lengths[50];
 
 /* Initialize array with zero values */
 for(i=0; i<50; ++i)
   lengths[i]=0;

 state=OUT;
 /* count the length of the words */
 while((c=getchar())!=EOF)
   if(c==' ' || c=='\t' || c=='\n'){
     if(state==IN){
        ++lengths[wl-1]; 
        wl=0;
        state=OUT;
     }
   }else{
     state=IN;
     ++wl;
     }

 /* print the bar histogram based on the values in the array */
 for(i=0; i<50; ++i){
  l=lengths[i];
  printf("Words with length: ");
  printf("%d\t",i+1);
  int j;
  for(j=0; j<l; ++j)
   printf("-");
  printf("\n");
 }
}
