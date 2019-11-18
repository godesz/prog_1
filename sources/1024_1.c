#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

srand(time(NULL));

int f_be, db=0,i;

scanf("%d",&f_be);

for(i=0;i<1000;i++)
if (rand()%151+20==f_be) db++;


printf("Ennyiszer volt az 1000 szamban a %d-es szam: %d\n",f_be,db);
return 0;
}
