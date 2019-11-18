#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

srand(time(NULL));

int i, leg1, leg2, leg3, be;
// leg3 legkisebb
leg1 = rand()%151+20;
leg2 = rand()%151+20;
leg3 = rand()%151+20;
// helyes sorrend leg3 leg2 leg1 
printf("A harom legkisebb szam: %d %d %d\n",leg3,leg2,leg1);
if (leg3<=leg1 && leg3<=leg2) if (leg1<leg2) { be=leg1; leg1=leg2; leg2=be; }   // 3 1 2
											    								// 3 2 1
if (leg2<=leg1 && leg2<=leg3) if (leg1<leg3) { be=leg1; leg1=leg3; leg3=leg2; leg2=be; } // 2 1 3
							else { be=leg2; leg2=leg3; leg3=be;} 						// 2 3 1	
if (leg1<=leg2 && leg1<=leg3) if (leg1<=leg3) { be=leg3; leg3=leg1; leg1=be;}		// 1 2 3
	else { be=leg3; leg3=leg2; leg2=leg1; leg1=be; } 								// 1 3 2

for(i=3;i<10;i++)
{
printf("A harom legkisebb szam: %d %d %d\n",leg3,leg2,leg1);
be=rand()%151+20;

//   l3   l2   l1
//   25   36   74
//  be 31 
//   25  31  36  74
//	 25  31  36
// be 21
//   21  25  31
if (be<leg1) 
		if (be<leg2)
				if (be<leg3) { leg1=leg2; leg2=leg3; leg3=be; }
					else { leg1=leg2; leg2=be; }  // 3. if
			else { leg1=be; } // 2. if


}	

printf("A harom legkisebb szam: %d %d %d\n",leg3,leg2,leg1);
return 0;
}
