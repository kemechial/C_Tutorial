#include <stdio.h>

void atoi(void);
char d[20];
int n;

main()
{
 int i, v;
 atoi();
 printf("Numeric value: %d\n", n);
 return 0;
}


void atoi(void)
{
 int i, j, c;
 for(i=0; i<20 && (c=getchar())!='\n'; ++i)
  if(c>='0' && c<='9')
    d[i]=c;
 for(j=0; j<i; ++j){
  printf("digit %d: %d\n",j,d[j]);
  n=10*n+(d[j]-'0');}
 
}
