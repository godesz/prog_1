#include <stdio.h>

int main()
{

int kecske,i,vodor=1;
scanf("%d",&kecske);

//for(i=1;i<=kecske;i++)
for(i=kecske;i>=1;i--)
	{
		vodor=vodor*i;
	}

printf("%d\n",vodor);
return 0;
}
