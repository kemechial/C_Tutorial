#include <stdio.h>

/* print Fahrenheit-Celcius table  
    for 0,20,...,200,300... */

main()
{ float fahr,celcius; 
  int lower,upper,step;
  lower=0;  /* lower limit of temperature */
   upper=300; /* Upper Limit */ 
  step=20;    /* Step Size */

  fahr=lower;
  while(fahr <= upper){
   celcius=(5.0/9.0)*(fahr-32.0);
   printf("%3.0f\t%6.1f\n", fahr, celcius);
   fahr=fahr+step;
  } 

}



