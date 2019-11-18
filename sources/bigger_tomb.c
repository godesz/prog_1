#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
srand(time(NULL));

int trinity[10],i;

for(i=0;i<10;i++)
	trinity[i]=rand()%100+1;

for(i=0;i<10;i++)
		printf("%d ",trinity[i]);

return 0;
}
