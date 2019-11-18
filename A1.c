#include <stdio.h>
#include <stdlib.h>

int main()
{

int be, i, db = 0, szam;
scanf("%d",&be);
if (be<=10) { printf("Rossz bemeneti szam!\n"); return 0; }

for(i=0;i<20;i++)
{
szam = rand()%(be-10+1)+10;
if ( (szam%5==0) && (szam%6!=0) ) db++;
}

printf("Darab:%d\n",db);

return 0;
}
