#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
// 11011111
// 00000001
// 00100000
// ~
// 11011111
unsigned char szam1 = 175, szam2 = 201;
unsigned char szam3;

szam3 = szam1 ^ szam2;
printf("%d %d %d\n",szam1,szam2,szam3);

szam1 = 1;
printf("%d\n",szam1);
szam1 = szam1 << 7;
printf("%d\n",szam1);

szam1 = 79;  // 01001111
unsigned char maszk = 1;  //  00000001

//01001111
//00000001

maszk = maszk << 4;

//01001111
//00001000
//00001000

szam3 = szam1 & maszk;
szam3 = szam3 >> 4;

printf("%d\n",szam3);


return 0;
}



//  175
//  10101111
//  201
//  11001001
// & | ^ >> << ~
// 175 & 201  =  137
//     | ^ 
//	10101111
//	11001001&
//	10001001

//  00011011
// ~11100100
/*
    00000001	1
	00000010	2
	00000100	4
				8 16 32....
	01111001	121
	11110010	242
	11100100	484
*/
