#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int my_factor(int darab)
{
int i, eredmeny = 1;

for(i=1;i<=darab;i++)
   eredmeny = eredmeny * i;

return eredmeny;
}

double my_sin(double x, int n)
{
int i;
double tarolo = 0;
for(i=0;i<n;i++)
	tarolo += pow(-1,i)*pow(x,2*i+1)/my_factor(2*i+1);

return tarolo;
}

int main()
{

printf("%.15lf\n",my_sin(4,7));
printf("%.15lf\n",sin(4));


return 0;
}
