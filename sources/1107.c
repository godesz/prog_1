#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
srand(time(NULL));

int retek[10],i,j;

for(i=0;i<10;i++)
	retek[i] = rand()%100+1;
for(i=0;i<10;i++)
	printf("%d ",retek[i]);

int kotel[10][15];

for(i=0;i<10;i++)
{
for(j=0;j<15;j++)
{		kotel[i][j]=rand()%100;}
}	

printf("\n\n");

for(i=0;i<10;i++)
{
for(j=0;j<15;j++)
	{		
	printf("%d ",kotel[i][j]);
	}
printf("\n");
}

int rotikapi[5]={0,0,0,0,0};
int matikapi[3][3]={{0,0,0},{1,1,1},{2,2,2}};

return 0;
}
