#include <stdio.h>


int main() {

	int a=6;
	int b=4;

	printf("%d ",a++); //a++
	printf("%d ",a);
	printf("%d\n",++a);  //azonnal növel

	a=100; // 01100100
	b=254; // 11111110
		   // 01100100	bitenkénti és, vagy, xor
	int c, d;
	c = 123;
	d = 200;
	printf("%d\n",c|d);
	
	// a*b-2
	// 24 -2
	// 22

	// a&&1-b||0
	// a&&-3||0
	// a&&(-3)||0
	// 1||0
	// 1


	if (a==2) printf("igen\n"); 
		  else printf("nem\n");

	b=(a==2)?12:92;   // ?:

	if (a==2) b=12;
		else  b=92;

	printf("%d\n",b);

	c=7;
	c=c+8;
	c+=8;
	
	printf("%d\n",a);
	printf("ertek: %d %d %d\n",a++,b--,c);
	printf("%d\n",a);

	d = 5;
	printf("%d\n",d++);

return 0;
}
