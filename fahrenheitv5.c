#include <stdio.h>

#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20

main()
{ int fahr; 
  for(fahr=LOWER;fahr<= UPPER;fahr=fahr+STEP)
    printf("%3d\t%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
  printf("end of program\n");/*if no braces only one line after while/for included in loop, however it is a good convention to indent*/ 

}



