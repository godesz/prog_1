#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
srand(time(NULL));

int neo[6][6], i, j, szam;

//  (0,0) --------- (0,5)
//   ....
//  (5,0) --------- (5,5)

for(i=0;i<6;i++)
	for(j=0;j<6;j++)		
		neo[i][j]=rand()%100+1;

for(i=0;i<6;i++)
{{
	for(j=0;j<6;j++)		
		printf("%d\t",neo[i][j]);
}
printf("\n");
}
/*
for(i=0;i<6;i++){
szam=0;
for(j=0;j<6;j++) 
{
szam=szam+neo[i][j];
}
printf("%d-ik sor: %d\n",i,szam);
}

for(i=0;i<6;i++){
szam=0;
for(j=0;j<6;j++) 
{
szam=szam+neo[j][i];
}
printf("%d-ik oszlop: %d\n",i,szam);
}*/
return 0;
}
