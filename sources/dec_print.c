#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bin_print(unsigned char local_loo)
{
int i;
unsigned char maszk = 1, res;
for(i=7;i>=0;i--)
{
maszk = 1;
maszk = maszk << i;
res = local_loo & maszk;
res = res >> i;
// res = (local_loo & (1<<i)) >> i;
printf("%d",res);
}

printf("\n");
}

int bin_darab(unsigned char local_loo)
{
int i, darab = 0;
unsigned char maszk = 1, res;
for(i=7;i>=0;i--)
{
maszk = 1;
maszk = maszk << i;
res = local_loo & maszk;
res = res >> i;
if (res == 1) darab++;
}
return darab;
}

int fgv_to1(unsigned char szaaam, int N)
{

// 10110110  N = 4
// 00001000  |
// 10111110  -> res
// 10111110

unsigned char maszk = 1 << (N-1);
unsigned char res = szaaam | maszk;
return res; //  
}

//  10111011   << 1
//  01110111   << 1
//  11101110   << 1
//  11011101

// return szaaam | 1 << (N-1);

int loop_left_one(unsigned char tejfol)
{
unsigned char maszk = 128;
if (((tejfol & maszk) >> 7) == 1) { tejfol = tejfol << 1; tejfol++;}
else { tejfol = tejfol << 1; }
return tejfol;
}

int loop_left_one2(unsigned char tejfol)
{
return (tejfol/128)+(tejfol<<1);
//0-127  / 128  0      0XXXXXXX
//128-255 / 128  1     1XXXXXXX
}


int main()
{
unsigned char loo = 164;
bin_print(loo);
printf("%d\n",bin_darab(loo));
printf("%d\n",fgv_to1(loo,4));

bin_print(loo);
bin_print(loop_left_one2(loo));
bin_print(loop_left_one2(loop_left_one2(loo)));

return 0;
}
