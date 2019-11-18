#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	/*
	char nembetu;	
	// ['a':'z']
	nembetu = rand()%('z'-'a'+1)+'a';
	printf("%c\n",nembetu);
	int i;
	for(i=0;i<100;i++) printf("%c",rand()%('z'-'a'+1)+'a');

	int k;
	int lama[1500];
	for(k=0;k<1500;k++)
		lama[k]=rand()%66;

	for(k=0;k<1500;k++)
		printf("%d  ",lama[k]);
*/

	int j, brain_min, brain_max;
	int zsiffin[20];
	for(j=0;j<20;j++)
		zsiffin[j]=rand()%100+1;
	for(j=0;j<20;j++)
		printf("%d  ",zsiffin[j]);

	brain_min = zsiffin[0];
	brain_max = zsiffin[0];
	for(j=1;j<20;j++)
		{
		if (zsiffin[j]<brain_min) brain_min=zsiffin[j];		
		if (zsiffin[j]>brain_max) brain_max=zsiffin[j];		
		}


	printf("\nA legkisebb elem: %d\nA legnagyobb elem: %d\n",brain_min, brain_max);
	// rendezés
	// [ 38,5,74,2,54,...,12,6,45,10,21,51 ]
	// [ 5,38,74,2,54,...,12,6,45,10,21,51 ]
	// [ 2,38,74,5,54,...,12,6,45,10,21,51 ]
	int i1, i2, csere;

	for(i1=0;i1<19;i1++)
		{
			for(i2=i1+1;i2<20;i2++)	
				{
					if (zsiffin[i2]<zsiffin[i1])
										{
											csere=zsiffin[i2];
											zsiffin[i2]=zsiffin[i1];
											zsiffin[i1]=csere;
										}	
				}
		}
	// rendezes vege
	for(j=0;j<20;j++)
		printf("%d  ",zsiffin[j]);

	// [ 1,2,3,4,5,6,7,8,9,10 ]
	// [ 1,2,7,4,5,6,3,8,9,10 ]
	// [ 1,2,7,4,6,5,3,8,9,10 ]
	printf("\n");
	int p, kalacs[10];
	for(p=0;p<10;p++) { 
						kalacs[p]=p+1; 
						printf("%d ",kalacs[p]);
					  }

	/*
	1. Kivalasztok egyet véletlenszerûen
	2. Kivalasztok egy masikat véletlenszerûen
	3. Megcserélem õket
	4. Sokszor megcsinálom ezt (10 elemû tömbnél 100-szor)
	*/

	printf("\n");
	return 0;
}
