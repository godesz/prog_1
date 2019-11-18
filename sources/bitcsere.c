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

unsigned char bit_rand(unsigned char input)
{
bin_printf(input);
unsigned char output = input, a=0, b=0, egyik, masik;

while(a==b)
{
a = rand()%8;
b = rand()%8;
}
a = 1; b= 7;

printf("Sorszamok: %d %d\n",a,b);

egyik = (input & (1<<a))>>a;  // 0000000?
masik = (input & (1<<b))>>b;  // 0000000?

printf("Elmentett bitek: %d %d\n",egyik, masik);

if (egyik==1) output = input | (egyik << b);
		 else output = input & (~(1 << b));

bin_printf(~(1 << b));
bin_printf(output);
printf("\n");

if (masik==1) output = input | (masik << a);
		 else output = input & (~(1 << a));

bin_printf(~(1 << a));

bin_printf(output);

return output;
}




int main(){
srand(time(NULL));

unsigned char sertes = 164; // 
printf("%d\n",sertes);
sertes = bit_rand(sertes);
printf("%d\n",sertes);

/*
10100100  input
1_100_00
11100000  output
*/
return 0;

}


// 10100100
// a  b 
// 00000001
// 00010000
// 10110100

// 10100100
//  a   b 
// ?????!??   00000100  11111011
// 10100000





