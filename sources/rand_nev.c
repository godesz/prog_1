#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
srand(time(NULL));
char nev[5]={'b','e','n','c','e'};
char nev2[5]={'0','0','0','0','0'};
char k;
int i=0;

while(1)
{
	k=nev[rand()%5];
	printf("%c",k);

	nev2[0]=nev2[1];
	nev2[1]=nev2[2];
	nev2[2]=nev2[3];
	nev2[3]=nev2[4];
	nev2[4]=k;

i++;
if (nev2[0]==nev[0] && 
	nev2[1]==nev[1] && 
	nev2[2]==nev[2] && 
	nev2[3]==nev[3] && 
	nev2[4]==nev[4]) { printf("\nKECSKE %d\n",i); return 0; }

}
return 0;
}
