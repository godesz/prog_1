#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int retek = 67;
/*
FILE *gaspar;
gaspar = fopen("gyozo.txt","w");
printf("%d\n",retek);
fprintf(gaspar,"%d\n",retek);  // printf megfelel�je
char t = 'F';
fputc(t,gaspar);  // 1 karakter
fclose(gaspar);*/

FILE *szamok;
int i;
szamok = fopen("1116.c","r");
/*for(i=0;i<8;i++)
{
fscanf(szamok,"%d",&retek);
printf("%d\n",retek);
}*/

/*while(!feof(szamok))   // file end of file
{
fscanf(szamok,"%d\n",&retek);
printf("%d\n",retek);
}*/

char z;
while(!feof(szamok))
{
z = fgetc(szamok);
printf("%c",z);
}

fclose(szamok);
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

gedit
terminal

ls
gcc forras.c -o forras     // ford�t�s
./forras








