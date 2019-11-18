#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void harszog(int a, int b, int c)
{
printf("%d %d %d\n",a,b,c);
if (a+b>c && a+c>b && b+c>a) printf("Szerkesztheto\n");
else printf("Nem szerkesztheto\n");
}
int main()
{
srand(time(NULL));
harszog(rand()%100+1,rand()%100+1,rand()%100+1);
return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void harszog(int a, int b, int c)
{
if (a+b>c && a+c>b && b+c>a) printf("Szerkesztheto\n");
else printf("Nem szerkesztheto\n");
}

int main()
{
srand(time(NULL));
int o1,o2,o3;
o1=rand()%100+1;
o2=rand()%100+1;
o3=rand()%100+1;
printf("%d %d %d ",o1,o2,o3);
harszog(o1,o2,o3);
return 0;
}
*/
