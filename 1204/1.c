#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
srand(time(NULL));
FILE *narancs;
narancs = fopen("mandarin.txt","w");
int i;
for(i=0;i<13760;i++)
{
fprintf(narancs,"%d\n",rand()%101);
// [0:100] 101darab
}
fclose(narancs);
return 0;
}
