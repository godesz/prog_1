#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
srand(time(NULL));
int i;
float a,b,c;
// [0.0:1.0]
a = ((float)rand())/RAND_MAX;
b = ((float)rand())/RAND_MAX;
c = ((float)rand())/RAND_MAX;   
//[0.0:1.0]
// ((float)rand())/RAND_MAX *10 +10
//[10.0:20.0]

printf("%f %f %f\n",a,b,c);
if ( a<b+c && b<a+c && c<a+b) printf("Lehet\n");
	else printf("Nem lehet\n");

return 0;
}
