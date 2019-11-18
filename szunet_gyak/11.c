#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
srand(time(NULL));
int i, darab=0;
char mander;
int tomb[26];
for(i=0;i<26;i++) tomb[i]=0;
// {0,0,0,0,0,0,0,0,0,....0,0,0,0,0,0,0,0,0,0,0}
// {1,1,1,1,1,1,1,1,1,....1,1,1,1,1,1,1,1,1,1,1}
for(i=0;;i++)
	{
		mander = rand()%('z'-'a'+1)+'a';
		if (tomb[mander -'a'] == 0 ) { tomb[mander -'a'] = 1; darab++; }
		printf("%c",mander);
		if (darab==26) break;
	}
printf("\n%d\n",i);

return 0;
}
