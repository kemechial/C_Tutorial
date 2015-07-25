#include <stdio.h>
/*
replace multiple blanks with a single blank
*/
main()
{

 int c, bc;
 bc=0, c=0;
 while((c=getchar())!=EOF){
	/* test if the character is blank */
	if(c==' ')
          ++bc;			
	else
	  bc=0;
	/* if blank count is bigger than 2 do not output*/
	if(bc<2)
	  putchar(c);
	            	
  }
}
  
