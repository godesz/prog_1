#include <stdio.h>

int main()
{
int i, szam;

scanf("%d",&szam);
for(i=1;i<=szam;i++)
	if (szam%i==0) printf("%d\n",i);

return 0;
}
