#include <stdio.h>

int main(){

int a,b,c;

for(a=1,b=1;a<100000;c=a+b,a=b,b=c)
printf("%d ",a);

return 0;
}
