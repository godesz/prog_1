#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
srand(time(NULL));
int szam = rand()%1000+10000;
printf("Eredeti szam:%d\n",szam);
int i=2;

while(szam>1)
{
if (szam%i==0) { printf("%d\n",i);
				 szam=szam/i;
				}
		else { i++; }
}
return 0;
}
/*
120 2
60 2
30 2
15 3
5  5
1

b=1265
- megkeresni prmeket 1265-ig
- 2,3
- 5
167
2,3,5,7,11,13....
prim_tomb[0] = 2;
prim_tomb[1] = 3;
for(i=5;i<b;i++)
{if osztható-e eddigi bármelyikkel?}

if (egyikkel sem volt osztható) prim_tomb[i_kov] = i;  

*/

