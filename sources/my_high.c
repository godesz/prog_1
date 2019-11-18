#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int global_mariska = 195;

int nagyobbik(int o1, int o2)
{
if (o1>o2) return o1;
else return o2;
} // RIP o1 o2
/*
{ return (o1>o2)?o1:o2; }
*/

int main()
{

int kecske1 = 5443, kecske2 = 443;
int szamar;
int local_jozsi = 2132;

szamar = nagyobbik(kecske1,kecske2);
printf("%d\n",szamar);

printf("%c\n",nagyobbik('a','z'));

//printf("%d\n",o1);  nincs o1

return 0;
} // RIP kecske1 kecske2
