#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

long factorial(long a)  // rekurzív
{
  if (a > 1)
   return (a * factorial(a-1));
  else
   return 1;
}


double my_sin(double x,int N)
{
double tag = 0;
int i;
for(i=0;i<N;i++)
{
tag += pow(-1,i)*pow(x,2*i+1)/factorial(2*i+1);
printf("%lf\n",tag);
}//for
return tag;

}

int main()
{

int darab = 20;
double szog = 0.48;
printf("Sin1: %.10lf\n", my_sin(szog,darab));
printf("Sin2: %.10lf\n", sin(szog));

return 0;
}
