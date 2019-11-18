#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
   int felhasznalo_szama, gen, darab=0, i;  // kezdõérték adás fontos
  
   srand(time(NULL));
	
	scanf("%d",&felhasznalo_szama);

	for(i=0;i<10000;i++)
	{ // [0:200], hányszor lesz a f_száma benne
		gen = rand()%201+0;
		if (gen == felhasznalo_szama) darab++;
	}

	printf("Ezt a szamot %d ennyiszer porgettem ki: %d\n",felhasznalo_szama, darab);

return 0;
}
