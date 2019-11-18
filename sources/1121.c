#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int global_a;

// függvény

int pala_csinta(int liszt, int viz)
{
int local_c;
liszt = viz + 6;
viz = viz * 9;
liszt = viz %  liszt;

return liszt;
} // RIP local_c, liszt, viz

// eljaras
void eljarasom(int vodka, int kompre)
{
int vodor;  // local vodor
vodor = vodka + kompre;
printf("%d\n",vodor);

}// RIP vodor, vodka, kompre


// int main
int main(){

int local_b;
int aladar;
float bela;
aladar = pala_csinta(13,45);
bela = (float)pala_csinta(13,45);
printf("45*9 %%, 45+6  =  %f\n",bela);
printf("%d\n",local_b);
eljarasom(4,20);




return 0;
}


/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
srand(time(NULL));

FILE *banan, *eper, *tok;
banan = fopen("szoveg.txt","r"); // r w 
char k;

fscanf(banan,"%c",&k);
k = fgetc(banan);   // függvény

/*
fprintf(banan,"%c",k);
fputc('w',banan);

//   EOF  1 karakter   if (k=='EOF') ,vjefdiucb 

while(!feof(banan))
{
// do stuff
}

while(1)
{
//****
if (k=='EOF') break;
//***
}

fclose(banana);
return 0;
}
*/
