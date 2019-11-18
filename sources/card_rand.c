#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
srand(time(NULL));
char pakli[52][2]; // 23456789TJQKA : SKPT
char szinek[4]={3,4,5,6}; //{'S','K','T','P'};
char szamok[13]={'2','3','4','5','6','7','8','9','T','J','Q','K','A'};
int i;
for(i=0;i<52;i++)
		{ pakli[i][0]='0'; pakli[i][1]='0';}

for(i=0;i<52;i++)
	printf("%c%c ",pakli[i][0],pakli[i][1]);

//  23456789TJQKA23456789TJQKA23456789TJQKA23456789TJQKA
//  SSSSSSSSSSSSSKKKKKKKKKKKKKTTTTTTTTTTTTTPPPPPPPPPPPPP
for(i=0;i<52;i++)
		{
		pakli[i][0]=szamok[i%13];
		pakli[i][1]=szinek[i/13];
		}
printf("\n");
for(i=0;i<52;i++)
	printf("%c%c ",pakli[i][0],pakli[i][1]);
printf("\n");

int kivalasztott;
for(i=0;i<10;)
{
kivalasztott=rand()%52;
if (pakli[kivalasztott][0]!='0')
{
printf("%c%c ",pakli[kivalasztott][0],pakli[kivalasztott][1]);
pakli[kivalasztott][0]='0';   // a kiválasztottat kinullázzuk
i++;
}  // if true
else 
{
printf("\nUjat kellett huznom!\n");
}//


}
return 0;
}

// 52 lapos francia kártyacsomagból 5 lapot kiosztani
//4 szín, 13 lap
//2345678910 JQKA
//SKPT


