#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
srand(time(NULL));
int kalap,kabat,i;

for(i=0;i<10;i++)
	{
		kalap = (rand()%101)/2*2;   
		kabat = rand()%101;
		//[0,1,2,3....98,99,100]
		//  99/2  49.5 -> 49  *2  -> 98 
		//  98/2  49   -> 49  *2  -> 98
		//[0,2,4...96,98,100]
	
		printf("%d %d\n",kalap,kabat-kabat%2);
	}

return 0;
}
