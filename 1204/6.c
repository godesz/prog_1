#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
srand(time(NULL));
FILE *narancs2;
narancs2 = fopen("mandarin.txt","r");
int i=1, szam, szam2, legkisebb, legnagyobb;
int tescos_kocsi = 0;

fscanf(narancs2,"%d\n",&legkisebb);
legnagyobb = legkisebb;
tescos_kocsi += legkisebb;

while(!feof(narancs2))
{
fscanf(narancs2,"%d\n",&szam);
tescos_kocsi += szam;
if (legkisebb>szam) legkisebb = szam;
if (legnagyobb<szam) legnagyobb = szam;
i++;
}

printf("Sor: %d\n",i);
printf("Legkisebb: %d\n",legkisebb);
printf("Legnagyobb: %d\n",legnagyobb);
printf("Atlag: %lf\n",1.0*tescos_kocsi/i);
fclose(narancs2);
return 0;
}
