#include <stdio.h>

/* print Fahrenheit-Celcius table  
    for 0,20,...,200,300... */

main()
{ int fahr,celcius; 
  int lower,upper,step;
  lower=0;  /* lower limit of temperature */
   upper=300; /* Upper Limit */ 
  step=20;    /* Step Size */

  fahr=lower;
  while(fahr <= upper){
   celcius=5*(fahr-32)/9;
   printf("%3d\t%6d\n", fahr, celcius);
   fahr=fahr+step;
  } 

}



