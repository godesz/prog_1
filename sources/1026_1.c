#include <stdio.h>

int main()
{
int i, db=0;

for(i=0;i<1000;i++)
	if ((rand()%162+10)%2==0) db++;

printf("Paros: %d\nPAratlan: %d\n",db,1000-db);

return 0;
}
