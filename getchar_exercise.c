#include <stdio.h>

main()
{

 int c;
 while((c=getchar())!=EOF){
	printf("machine representation of c=getchar() (hex):\n");
	printf("%x\n",c);
	printf("machine representation of c=getchar() (dec):\n");
	printf("%d\n",c);
	putchar(c);
	}
}
