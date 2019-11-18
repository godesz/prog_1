#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int melyikanagyobb(int egyik, int masik)
{
if (egyik>masik) return egyik;
else return masik;
}

float my_sqrt(int bemenet)
{
float g;
g = sqrt(bemenet);
return g;
}


void eljaras(char k)
{
// 'l'  -->  abcdefghijkl
// 'b'  -->  ab
// 'e'  -->  abcde
int i;
for(i='a';i<=k;i++)
{
printf("%c",i);
}
printf("\n");
}

/*
int fv_1(int a, int b)
{
scanf("%d",alma);
return (a>b)?a:b;
}*/
// int main
int main(){
int a = 78, b = 43;
int k = 'l';
printf("%d\n",melyikanagyobb(a,b));
printf("%f\n",my_sqrt(12));
printf("\337\n");
eljaras(k);

return 0;
}
// gcc my_code.c -o my_code
// ./my_code
