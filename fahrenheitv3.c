#include <stdio.h>

/* print Fahrenheit-Celcius table  
    for 0,20,...,200,300... */

main()
{ int fahr; 
  for(fahr=0;fahr<=300;fahr=fahr+20)
    printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
  printf("end of program\n");/*if no braces only one line after while/for included in loop, however it is a good convention to indent*/ 

}



