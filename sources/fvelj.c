#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int nagyobb(int a,int b)  
{
if (a>b) return a;
else return b;
} 
/*
{
return (a>b)?a:b;
}
*/

char abc_nagyobb(char a,char b)  
{
if (a>b) return a;
else return b;
} 

int main()
{

int adam = 18, eva = 17;
int kigyo;
char ch1 = 'w', ch2 = 'j';
char ch3;
ch3 = abc_nagyobb(ch1,ch2);
kigyo = nagyobb(adam,eva);
printf("%d %c\n",kigyo,ch3);

/*
Gener�lni 3 v�l sz�m [1:100]
elj�r�st ami h�romsz�gk�pz�st eld�nti, ki�rja, hogy igen/nem*/



return 0;
}
