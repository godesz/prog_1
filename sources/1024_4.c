/*
10db egész szám felhasználótól
eltárolni
átlagot a képernyõre
átlag nem INT
*/

#include <stdio.h>

int main(){

int szamok[13], i;
float avg=0.0;

for(i=0;i<13;i++)
{
scanf("%d",&szamok[i]);
avg+=1.0*szamok[i];
//avg=avg+1.0*szamok[i];
// db++;
// db=db+1;
// db+=1;
}

printf("Osszeg: %f\n",avg);
printf("Atlag: %f\n",avg/13);

return 0;
}

