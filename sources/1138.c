#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
srand(time(NULL));

//| & ^ >> << ~

unsigned char tej,nutella,kancso,maszk;
tej = rand()%256;
nutella = rand()%256;
printf("%d %c\n",tej,tej);
// 10101110
// ~
// 01010001
//+
// 11111111   -> 255
tej = ~tej;
printf("%d %c\n",tej,tej);

// | & ^

kancso = tej | nutella;
//    10101110
//  | 01011000
//    11111110

printf("%d | %d = %d\n",tej,nutella,kancso);

kancso = tej & nutella;
//    10101110
//  & 01011000
//    00001000

printf("%d & %d = %d\n",tej,nutella,kancso);

printf("\n\n");
// >> <<

tej = 165; // 10100101
		  //  01010010   82

printf("%d\n",tej);

tej = tej >> 1;

printf("%d\n",tej);


tej = 165;  // 101_0101 
maszk = 1;  // 00000001
            // 00010000
			// 000_0000
kancso = tej & maszk;
kancso = (tej & (maszk << 5)) >> 5;
printf("%d\n",kancso);

tej = 111;            // 01101111  
maszk = 1;            // 00000001
maszk = maszk << 4;  //  00010000

kancso = tej | maszk; // 01111111    127




return 0;
}

/*

short int alma1 = 32767;
unsigned short int alma2 = 65535;
signed char alma6 = 127;      // _0000000
unsigned char alma7 = 255;    // 00000000
char alma8 = 127;

printf("%d %d\n",++alma1,alma1);
printf("%d %d\n",++alma2,alma2);
printf("%d %d\n",++alma6,alma6);
printf("%d %d\n",++alma7,alma7);
printf("%d %d\n",++alma8,alma8);

*/
