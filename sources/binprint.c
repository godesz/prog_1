#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void bin_printf(unsigned char malac)
{
unsigned char maszk = 128; // 10000000
int i;
for(i=0;i<8;i++)
printf("%d", (malac&(maszk>>i))>>(7-i));

printf("\n");
}

unsigned char balratol(unsigned char input)
{
unsigned char maszk = 128, leeso;
leeso = ( input & maszk ) >> 7;  // 0000000?
input = input << 1;  // ???????0
if (leeso == 1)  input = input | leeso;
return input;
}

unsigned char balratol2(unsigned char input)
{
return (input/128)+(input<<1);
}

int main(){
srand(time(NULL));

unsigned char sertes = 78; // 01001110
printf("%d\n",sertes);
bin_printf(sertes);

int i;
for(i=0;i<9;i++)
{
printf("%d\t",sertes);
bin_printf(sertes);
sertes = balratol2(sertes);   
}

return 0;

}


/*
10011101
00111011
01110110
11101100
11011001
10110011
01100111
11001110
10011101
*/






