#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

srand(time(NULL));

int tumb[10], i, j, k;

for(i=0;i<10;i++)
tumb[i]=rand()%151+20;

printf("\n[");
for(i=0;i<10;i++) printf("%d,",tumb[i]);
printf("\b]\n");

int csere;
for(j=9;j>0;j--)
for(i=0;i<j;i++)
	if (tumb[i]%2==1) { csere=tumb[i]; tumb[i]=tumb[i+1]; tumb[i+1]=csere; 

//printf("\n[");
//for(k=0;k<10;k++) printf("%d,",tumb[k]);
//printf("\b]\n");

} // if csere

printf("\n[");
for(i=0;i<10;i++) printf("%d,",tumb[i]);
printf("\b]\n");

return 0;
}
