#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
srand(time(NULL));
int osszeg=0,esernyo,i;

for(i=0;i<10;i++)
	{
		esernyo = rand()%(75-39+1)+39;    // [39:75]
		osszeg+=esernyo;  //osszeg=osszeg+esernyo;
	
		printf("%d %d %f\n",esernyo,osszeg,(1.0*osszeg)/(i+1));
	}

return 0;
}
