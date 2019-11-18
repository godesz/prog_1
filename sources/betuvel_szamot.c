/*

írjuk ki betûkkel a bekért számot
#nincs kész ez még, ez csak vázlat csá


*/
#include <stdio.h>
int main(){
int szam;
scanf("%d",&szam);

switch(szam/100)
{
case 1 : { printf("szaz"); break; }
case 2 : { printf("kettoszaz"); break; }
case 3 : { printf("haromszaz"); break; }
case 4 : { printf("negyszaz"); break; }
}

switch(szam/10-(szam/100)*10)   //  123    12 - (123/100)*10
{
case 1 : { printf("tizen"); break; }
case 2 : { printf("huszon"); break; }
case 3 : { printf("harminc"); break; }
case 4 : { printf("negyven"); break; }
}

switch(szam%10)
{
case 1 : { printf("egy"); break; }
case 2 : { printf("ketto"); break; }
case 3 : { printf("harom"); break; }
case 4 : { printf("negy"); break; }
}

1259
1250 + 9
125
120 + 5
12
10 + 2
1
0 + 1


return 0;}
