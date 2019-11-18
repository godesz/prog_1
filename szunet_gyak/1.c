#include <stdio.h>

int main()
{

int l1,l2,l3, osszeg = 0;
scanf("%d %d %d",&l1,&l2,&l3);   // 18 15 3
osszeg = l1 + l2 + l3;  // 36

if ( l1 < l2 && l1 < l3)  osszeg = osszeg - l1;
if ( l2 < l1 && l2 < l3)  osszeg = osszeg - l2;
if ( l3 < l2 && l3 < l1)  osszeg = osszeg - l3;  // 36 - 3 = 33

osszeg = osszeg / 10 +1;

/*
0-9     0  +1   1 
10-19   1  +1   2
20-29   2  +1   3
30-39   3  +1   4
40-49   4  +1   5
50      5  +1   6
*/

if (osszeg == 6) printf("Gratulalok, ugyike vagy, csillagos 5os.\n");
		    else printf("Az erdemjegyed: %d\n",osszeg);

return 0;
}
