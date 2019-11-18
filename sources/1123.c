#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// függvény
int osszead(int egyik, int masik)
{
int harmadik;
harmadik = egyik + masik;
return harmadik;  // visszateresi ertek
}

// eljárás
void eljaras(int egyik, int masik)
{
printf("Egyik: %d, masik: %d\n",egyik,masik);
//return aefv
}

int main()
{

int a = 54, b = 12;
int c,d;
float fs;

c = osszead(a,b);
printf("%d\n",c);
eljaras(a,b);

d = rand();
fs = sqrt(87);
printf("%f\n",fs);


return 0;
}





/*
FILE *sara;
sara = fopen("sarika.txt","w");  // r w
fclose(sara);

printf("%d",szam);
fprintf(sara,"%d",szam);
fputc('q',sara);
char c;
fputc(c,sara);

fscanf(sara,"%d",&szam);
char k;
k = fgetc(sara);

while(!feof(sara))
{
// do stuff
}

while(1)
{
k = fgetc(sara);
if (k == 'EOF') break;
}*/
