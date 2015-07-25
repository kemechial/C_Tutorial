#include <stdio.h>

main()
{
 int c, f, i;
 int alphabet[26];
 
 /* initialize the array with zero values */
 for(i=0; i<26; ++i)
   alphabet[i]=0;

 /* count the frequency of the characters */
 while((c=getchar())!=EOF)
   if(c>='a' || c<='z')
      ++alphabet[c-'a'];

 /* print the bar histogram based on the values in the array */
 for(i=0; i<26; ++i){
  f=alphabet[i];
  printf("Frequency of %c: ", 'a'+i);
  int j;
  for(j=0; j<f; ++j)
   printf("-");
  printf("\n");
 }
}
