#include <stdio.h>

int main(){
	int kiskutya, talicska, kistalicska;
	kiskutya = 5;
	talicska = 101;
	kistalicska = kiskutya + talicska;
	printf("%d\n",kistalicska);
	printf("%d\n",kiskutya + talicska);
	printf("%d=%d+%d\n\n",kistalicska,kiskutya,talicska);
	
	double kishajo=10.0, sargarepa=3.0, gorbebogre;
	gorbebogre = kishajo / sargarepa;
	printf("10/3 = %.15lf\n", gorbebogre);

	char mander;
	mander = 'k';
	//mander = 107;
	printf("%c\n",mander);
	printf("%d\n",mander);
/*
komi
komi
komi
like
*/
	int gyula=12875;
	printf("gyula => %f\n",(float)gyula);
	float agnes=99.99;
	printf("agnes => %d\n",(int)agnes);

return 0;
}

