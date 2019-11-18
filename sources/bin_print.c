#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_bin(unsigned char localis_teja)
{
int i;
unsigned char maszk;
for(i=7;i>=0;i--)
{
maszk = 1 << i; // 10000000, 01000000, 00100000.....
printf("%d", (localis_teja & maszk)>>i );
}
printf("\n");
}

void print_bin2(unsigned char localis_teja)
{
int i;
unsigned char maszk = 128;
for(i=7;i>=0;i--)
printf("%d", (localis_teja & (maszk<<i) )>>i );
printf("\n");
}

int bin_0_count(unsigned char valami)
{
int X = 0, i;
unsigned char maszk = 1;
for(i=0;i<8;i++)
{
if ((valami & (maszk << i)) >> i == 0) X++;
}
return X;
}

int bin_0_count2(unsigned char valami)
{
int X = 0, i;
for(i=0;i<8;i++)
if ((valami & (1 << i)) >> i == 0) X++;
return X;
}

int fgv_pal_paros(unsigned char szam)
{
return !(szam>>7);
}

int main()
{
srand(time(NULL));

unsigned char teja;
int darab;
teja = rand()%256;
// 128   10000000  7
// 127   01111111  1
// 255   11111111  0
// 0     00000000  8
//printf("%d\n",teja);
//print_bin(teja);

darab = bin_0_count(128);
print_bin(128);
printf("%d\n",darab);

//t�mb�t felt�lteni rand, 8 elem� t�mb, 0 vagy 1 --> konvert�lni decim�lis sz�mm�

//bementi decim�lis sz�m bin�ris megfelel�j�t let�kr�zi, majd ezen bin�ris 
//sz�mnak megfelel� decim�lis sz�mr�l eld�nti hogy p�ros-e vagy sem
// p�ros eset�n j�jj�n vissza 1-gyel, prt 0-val
/*
137 
10001001  t�k�rk�p�t vessz�k
10010001
145
p�ratlan*/



return 0;
}
