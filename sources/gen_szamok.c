#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
srand(time(NULL));

int szam, i;
FILE *output;
output = fopen("100szam.txt","w");

for(i=0;i<100;i++)
{
szam = rand()%2048;
printf("%d\n",szam);    // képernyõre
fprintf(output,"%d\n",szam);   // fileba
}

fclose(output);
return 0;
}

/*
linuxra
gcc nev.c -o nev
./nev
*/
