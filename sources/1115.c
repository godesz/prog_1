#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
srand(time(NULL));
/*
FILE *sas;
char kar = 'N';
int bela = 789;
sas = fopen("elsofile.txt","w");

printf("KECSKE %d\n",bela);

fprintf(sas,"KECSKE %d\n",bela);

fputc('M',sas);
fputc(kar,sas);
fclose(sas);
*/
/*
FILE *szamok_file;
szamok_file = fopen("szamok.txt","r");

int karoly,i;
for(i=0;i<8;i++)
{
fscanf(szamok_file,"%d",&karoly);
printf("%d\n",karoly);
}

while(!feof(szamok_file))
{
fscanf(szamok_file,"%d\n",&karoly);
printf("%d\n",karoly);
}
fclose(szamok_file);

while(1)
{
c = fgetc(fille);
if (c == 'EOF') break;
}*/

FILE *laura;
laura = fopen("1115.c","r");
char kez;

while(!feof(laura))
{
//fscanf(laura,"%c",&kez);
kez = fgetc(laura);
printf("%c",kez);
}


fclose(laura);
return 0;
}

/********************
r - megnyit�s olvas�sra
w - megnyit�s �r�sra (l�trehoz�s)
a - megnyit�s b�v�t�sre
r+ - megnyit�s �r�sra �s olvas�sra (elej�re �r)
w+ - megnyit�s �r�sra �s olvas�sra (fel�l�r)
a+ - megnyit�s �r�sra �s olvas�sra (v�g�re f�z)
********************/
