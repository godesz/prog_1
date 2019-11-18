#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int global_katica = 6141;

// függvény
int osszeadas(int elso, int masodik)
{
int harmadik;
harmadik = elso + masodik;
//printf("%d\n",global_katica);
return harmadik;
}  // RIP elso, masodik, harmadik 

// eljárás

void elj_kiir(int elso, int masodik)
{
printf("%d\n",elso+masodik);
// nincs return
} // RIP elso, masodik, harmadik 


// main fv
int main()
{

int a = 5, b = 9;
int c;
c = osszeadas(a,b);
printf("%d\n",c);
elj_kiir(a,b);
//printf("%d\n",global_katica);


return 0;
} // RIP a, b, c, global_katica

/*
FILE *blabla;
blabla = fopen("neve.txt","w");
fclose(blabla);

"r"
fscanf(blabla,"%d",&hova);
char k;
k = fgetc(blabla);   fscanf(blabla,"%c",&c);


"w"
fprintf(blabla,"%d",hova);
fputc(k,blabla);

while(!feof(blabla))
{

// do stuff

}

'EOF'

while(1)
{
k = fgetc(blabla);
if (k == 'EOF') break;
}

*/










