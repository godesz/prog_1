#include <stdio.h>

int main()
{

int bastya, kannasbor, i;
scanf("%d %d",&bastya, &kannasbor);
// 12 16
if (bastya>kannasbor) i=kannasbor;
				else  i=bastya;
for(;i>=1;i--)
	{
		if (bastya%i==0 && kannasbor%i==0) { printf("Legn.k.o.: %d\n",i); break; }
	}


if (bastya<kannasbor) i=kannasbor;
				else  i=bastya;
for(;;i++)  // bastya*kannasbor
	{
		if (i%bastya==0 && i%kannasbor==0) { printf("Legk.k.t.: %d\n",i); break; }
	}

for(;;);  // végtelenciklus

return 0;
}
