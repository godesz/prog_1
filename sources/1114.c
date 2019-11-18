#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
srand(time(NULL));

int kecsi;

FILE *ablak;  // mutató, tartalma egy memóriacím 6584168
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
r - megnyitás olvasásra
w - megnyitás írásra (létrehozás)
a - megnyitás bõvítésre
r+ - megnyitás írásra és olvasásra (elejére ír)
w+ - megnyitás írásra és olvasásra (felülír)
a+ - megnyitás írásra és olvasásra (végére fûz)
********************/
