#include <stdio.h>

int main()
{
/*
	int ablak = 200, torlo = 42;
	
	if (ablak>torlo)  printf("ablaktorlo\n");
    // igaz eset�n 1 utas�t�s, hamisn�l semmi

	if (ablak%2 == 0 )   printf("Paros.\n");
				   else  printf("Paratlan.\n");

	int dobokocka = 2;
	switch(dobokocka)
		{
			case 1 : { printf("Egy.\n"); break;}
			case 2 : { printf("Ketto.\n"); break;}
			case 3 : { printf("Harom.\n"); break;}
		default : { printf("Nem jot dobtal.\n"); }
		}
	
	int i,j,k,l; // ciklusv�ltoz�
	int tegla = 6;

	for(i=0;i<10;i++)
	{
		printf("%d ",tegla);
	}

	j=0;
	while(j<10)
	{
		printf("Lya ");
		j++;
	}

	k=0;
	while(1)
	{
	printf("%d ",k);
	if (k==15) break;
	if (k==16) break;
	if (k==17) break;
	k++;
	}


	int zebra, n;
	for(n=1;n<11;n=n+1) 
		printf("%d ",n);

	printf("\n");

	for(n=1;n<11;n=n+1) 
		printf("%d ",11-n);

	printf("\n");

	for(n=10;n>0;n=n-1) 
		printf("%d ",n);
	
	printf("\n");
	for(n=0;n<100;n=n+2) 
		printf("%d ",n);

	printf("\n");
	for(n=0;n<100;n++) 
		if (n%2==1) printf("%d ",n);
	*/

	// K�rjen be a felhaszn�l�t�l 0 v�gjelig eg�sz sz�mokat.
	int bekertszam;
	int batyu = 0;
	int darabszam = 0;

	scanf("%d",&bekertszam);
	while(bekertszam!=0)
	{
	//batyu=batyu+bekertszam;
	batyu+=bekertszam;
	darabszam++;
	scanf("%d",&bekertszam);
	}

	printf("Sum: %d\n",batyu);
	printf("Avg: %f\n",1.0*batyu/darabszam);
	// Ki�rni az �sszeg�k/�tlaguk
	//1 1 2 3 5 8 13 .....
return 0;
}

