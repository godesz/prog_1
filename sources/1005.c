#include <stdio.h>

int main(){

	int hubertus, i, huuu;

printf("\nParosak:\n");
	for(i=0;i<100;i=i+2)
		{
		printf("%d ",i);
		}
printf("\nParatlanok:\n");

	for(i=0;i<100;i++)
		{
		if (i%2) printf("%d ",i);
		}

printf("\nReverse:\n");  // 10 9 8 7 6 5 4 3 2 1
for(i=10;i>0;i--)
	{
	printf("%d ",i);
	}
printf("\n\n");
// Kérjen be a felhasznalotol 0 végjelig egész számokat
// 12
// 6
// -78
// 0
// (kilépett)
scanf("%d",&hubertus);
while(hubertus!=0)
{
printf("hubika: %d\n",hubertus);
scanf("%d",&hubertus);
}
printf("\n\n");

huuu=10;
do
{
printf("huu: %d\n",huuu);
huuu++;
}while(huuu<6);

for(i=0;i<100;i++)
{
printf("%d ",i);
if (i==13) break;
} // break az ide ugrik
printf("%d ",i);


for(i=0;i<20;i++)
{ // cont az ide ugrik
printf("\n%d ",i);
if (i==13) continue;
printf("%d",i);
}

return 0;
}

