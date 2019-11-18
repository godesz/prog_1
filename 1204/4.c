#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gen_paros()
{
return (rand()%101)*2;
}

int gen_prt()
{
return (rand()%100)*2+1;
}

int gen_bit()
{
return rand()%2;
}

int gen_sign()
{
return (rand()%2)*2-1;
}

int gen_sqare()
{
int hangya = rand()%201;
return hangya*hangya;
}

int main()
{
srand(time(NULL));
printf("Paros: %d\n",gen_paros());
printf("Prt: %d\n",gen_prt());
printf("Bit: %d\n",gen_bit());
printf("Sign: %d\n",gen_sign());
printf("Sqr: %d\n",gen_sqare());
return 0;
}
