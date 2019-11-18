#include <stdio.h>
#include <stdlib.h>

int main()
{

FILE *be;
be=fopen("a5input.txt","r");
double a1,a2,b1,b2;
int db=0;

fscanf(be,"%lf;%lf\n",&a1,&a2);
while(!feof(be))
{
fscanf(be,"%lf;%lf\n",&b1,&b2);
//printf("%lf\n",((b1-a1)*(b1-a1)+(b2-a2)*(b2-a2)));
if ( (1.0*1.0)> ((b1-a1)*(b1-a1)+(b2-a2)*(b2-a2)) ) db++; 
a1=b1;  a2=b2;
}

printf("%d\n",db);

return 0;
}
