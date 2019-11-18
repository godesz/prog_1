#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int retek = 67;
/*
FILE *gaspar;
gaspar = fopen("gyozo.txt","w");
printf("%d\n",retek);
fprintf(gaspar,"%d\n",retek);  // printf megfelelõje
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
r - megnyitás olvasásra
w - megnyitás írásra (létrehozás)
a - megnyitás bõvítésre
r+ - megnyitás írásra és olvasásra (elejére ír)
w+ - megnyitás írásra és olvasásra (felülír)
a+ - megnyitás írásra és olvasásra (végére fûz)
********************/

gedit
terminal

ls
gcc forras.c -o forras     // fordítás
./forras








