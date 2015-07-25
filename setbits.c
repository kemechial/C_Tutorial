#include <stdio.h>
#include <ctype.h>
 
int setbits(int, int, int, int);
main()
{
 int x;
 x=0xab23df10;
 int y;
 y=0xaaffddcc;
 int n;
 n=6;
 int p;
 p=20;
 printf("input integer x: %d\n", x);
 printf("mask integer y: %d\n", y);
 printf("processed %d\n", setbits(x,p,n,y));
 return 0;
} 

int setbits(int x, int p, int n, int y){
 int ymask, xmask;
 ymask=(y & ~ (~0 << n))<<(p+1-n);
 xmask=x & ~(~(~0 << n)<<(p+1-n));
 return xmask | ymask;
}
