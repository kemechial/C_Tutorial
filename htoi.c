#include <stdio.h>
#include <ctype.h>

int htoi(char[]);

main()
{ 
 char h[100];
 char hx[100];
 int i, c;
 
 for(i=0; (c=getchar())!='\n'; ++i)
    h[i]=c;
    hx[i]=c;
 h[i]='\0';

 printf("String representation of Hexadecimal: %s\n", h);
 printf("Decimal Value from htoi: %d\n", htoi(h));
 printf("Hexadecimal (Verification): %x\n", htoi(h));
 return 0;
}

int htoi(char s[]){
  int sum;
  int i, val;
  sum=0;
  
  for(i=2; s[i]!='\0'; ++i){
  if(s[i]>='0' && s[i]<='9')
    val=s[i]-'0';
  else if(s[i]>='a' && s[i]<='f')
    val=10+s[i]-'a';
  sum=16*sum+val;
  }

  return sum; 	
}

