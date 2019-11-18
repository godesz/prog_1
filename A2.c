#include <stdio.h>
#include <stdlib.h>

int main()
{

int vektor[14], i = 0, szam;

vektor[i]=rand()%101;
while(i<14)
{
szam=rand()%101;
if (szam>vektor[i]) {vektor[i+1]=szam; i++; continue; }
if (vektor[i]==100) {vektor[i+1]=100; i++; continue; }
}

for(i=0;i<14;i++) printf("%d ",vektor[i]);

return 0;
}
