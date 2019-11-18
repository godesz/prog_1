#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
srand(time(NULL));
int szam;
float kosar = 0;
FILE *input;
input = fopen("100szam.txt","r");

while(!feof(input))
{
fscanf(input,"%d\n",&szam);
kosar += szam;
}

printf("Kosar tartalma: %f\nAtlag: %f\n",kosar, kosar/100);
fclose(input);
return 0;
}

/*
linuxra
gcc nev.c -o nev
./nev
*/
