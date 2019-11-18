#include <stdio.h>
// 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 
int main(){

	int a=1,b=1,c;
	while(a<20000)
	{
	c=a+b;	
	printf("%d ",a);
	a=b;
	b=c;
	}  // printf   c=a+b   a=b    b=c

return 0;
}
