#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
   int a, i, b;
   float nulla, fuzet;
   char kar;

   srand(time(NULL));
	
   a = RAND_MAX; 
   printf("%d\n", a );

	for(i=0;i<10;i++)
	{
     a = rand();
     printf("%d ", a );
 	} 
	printf("\n");

	for(i=0;i<10;i++)
	{
    //a = rand()%90+100;            // [100:189]    90 = 189-100+1
	/*
	b = rand()%2;						// b=0 akkor bal, b=1 akkor jobb
	if (b==0) a = rand()%11+10; 		// [10:20]U[30:40]
		 else a = rand()%11+30;     	//  ha a két intervallum egyforma

	a = (rand()%22>10)?rand()%11+10:rand()%11+30;  // más arányokra is jó
	*/

	//nulla = (1.0*rand())/RAND_MAX;      // [0.0:1.0]
	//nulla = ((1.0*rand())/RAND_MAX)*(19.3-3.14)+3.14;      // [3.14:19.3]

    //printf("%d ", a );
	//printf("%f ", nulla );
	kar = rand()%('z'-'a'+1)+'a';              // ['a':'z']
	printf("%c ", kar );
 	}
	printf("\n");

	int szocska[15], minimum, maximum;

	for(i=0;i<15;i++)
		{
			szocska[i]=rand()%72+95;
		}

	minimum=szocska[0];
	maximum=szocska[0];
	for(i=1;i<15;i++){
		if (minimum>szocska[i]) minimum=szocska[i];
		if (maximum<szocska[i]) maximum=szocska[i];
		}			

	for(i=0;i<15;i++)
		{
			printf("%d\t",szocska[i]);
		}
	printf("Minimum: %d\nMaximum: %d\n",minimum,maximum);
   return 0;
}
