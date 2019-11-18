#include <stdio.h>

int main()
{
int i,j, szam1;

scanf("%d",&szam1);

for(i=0;i<szam1;i++)
	{
	for(j=i+1;j<=szam1;j++)
		printf("%d ",j);
	printf("\n");
	}
return 0;
}
