#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
srand(time(NULL));

FILE *shrek, *fijona, *donkey;
shrek = fopen("elsofile.txt","r");
fijona = fopen("mgh.txt","w");
donkey = fopen("szmk.txt","w");

char terminator;

while(!feof(shrek))
{
terminator = fgetc(shrek);

if (terminator >= '0' && terminator<='9') fprintf(donkey,"%c",terminator);

if (terminator == 'a' ||
	terminator == 'e' ||
	terminator == 'i' ||
	terminator == 'o' ||
	terminator == 'u') 					fprintf(fijona,"%c",terminator);

}


fclose(shrek);
fclose(fijona);
fclose(donkey);
return 0;
}

