#include <stdio.h>

int main()
{   //ez itt egy komment lesz, 1 soros komment

int i;

for(i=0;i<100;i=i+1)
{
if (i%2==0) printf("%d ",i);
       //else {}
}

printf("\nMasodik fele:\n");
for(i=0;i<100;i=i+2)
{printf("%d ",i);}


printf("\n");

int valto=1;
scanf("%d",&valto);
while(valto!=0)
{
printf("%d\n",valto*2);
scanf("%d",&valto);
} // elöltesztelõs, nem biztos, hogy lejátszódik 1x is


do
{
scanf("%d",&valto);
printf("%d\n",valto*2);
}while(valto!=0); // hátultesztelõs, legalább 1x végrehajtódik

int balogh_mari=45,j;
for(j=0;j<100;j++)
{
   printf("%d",j);
   if (j<balogh_mari) printf("Szeretlek B.M. x%d\n",j);
   if (j>=balogh_mari) break;  // break -> j=100
}
printf("j erteke: %d\n",j);


int valysz_gizikeh=19, k=0;

while(1)
{
printf("Gizikeh <3\n");
k++;
if (k==1000) break;
}
k=0;

for(printf("WWW");;)
{
printf("<3 Gizikeh <3\n");
k++;
if (k==10) break;
}

int putnoki_halottlato_nenike;
for(putnoki_halottlato_nenike=0;putnoki_halottlato_nenike<10;putnoki_halottlato_nenike++)
{
printf("%d\n",putnoki_halottlato_nenike);
printf("AA\n");
if (putnoki_halottlato_nenike==5) continue;
printf("BB\n");
//continue;
}  // IDE fog ugrani


int z;
for(z=0;z<10;z++)
{
printf("Z");
}

return 0;
}
