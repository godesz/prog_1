#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
srand(time(NULL));

unsigned char kecske, liba, tyuk;
//0 : 255
//signed char -128 : 127

kecske = 175;  // 10101111
liba = 76;     // 01001100
			// &  00001100     12
tyuk = kecske & liba;
printf("%d\n",tyuk);

printf("%d\n",kecske);
kecske = ~kecske;
printf("%d\n",kecske);  //összegük 11111111
kecske = ~kecske;

kecske = kecske << 1;// 01011110
printf("%d\n",kecske);
kecske = kecske << 1;// 10111100
printf("%d\n",kecske);
kecske = kecske << 1;// 01111000
printf("%d\n",kecske);

kecske = 101;           // 01100101
kecske = kecske >> 1; 
printf("%d\n",kecske);

/*int nagykecske = 7;
nagykecske = nagykecske <<10;
printf("%d\n",nagykecske);*/

unsigned char maszk = 1, res;  //  00000001
kecske = 163;                  //  10100011
							   //  00100000
							   //  00100000

maszk = maszk << 5; // 00100000 
res = kecske & maszk; 
res = res >> 5;
printf("%d\n",res);
return 0;
}
/*
~
& | ^
<<
>> 
*/
