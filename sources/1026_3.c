#include <stdio.h>

int main()
{
int i, szam1, r;


scanf("%d",&szam1);

for(i=1;i<100;i++)
	{
	r=rand()%162+10;
	if (r%szam1==0) printf("%d\n",r);
	}
return 0;
}
