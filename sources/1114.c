#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
srand(time(NULL));

int kecsi;

FILE *ablak;  // mutat�, tartalma egy mem�riac�m 6584168
FILE *ajto;
ablak = fopen("valami.txt","w");
ajto = fopen("valami_amerika.txt","r");
/*
printf("kecske_cmd\n");
kecsi = rand()%100+1;
fprintf(ablak,"kecske_file %d\n",kecsi);


//EOF - End Of File

while(!feof(ajto))
{
fscanf(ajto,"%d\n",&kecsi);
printf("%d\n",kecsi);
}
fclose(ablak);
fclose(ajto);
*/

FILE *fityness;
fityness = fopen("1114.c","r");
//fityness = fopen("pilates.txt","r");
char mander;

while(!feof(fityness))
{
//fscanf(fityness,"%c",&mander);
mander = fgetc(fityness);
// fputc(mander,fityness);
printf("%c",mander);
}

fclose(fityness);

return 0;
}

//gcc valami.c -o valami
//./valami
//kicsi O betu



/********************
r - megnyit�s olvas�sra
w - megnyit�s �r�sra (l�trehoz�s)
a - megnyit�s b�v�t�sre
r+ - megnyit�s �r�sra �s olvas�sra (elej�re �r)
w+ - megnyit�s �r�sra �s olvas�sra (fel�l�r)
a+ - megnyit�s �r�sra �s olvas�sra (v�g�re f�z)
********************/
