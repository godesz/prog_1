#include <stdio.h>

int main(){

int a=1,b=1,c;

while(a<100000)
{
printf("%d ",a);
c=a+b;     // 1 1 2
a=b;	   // 1 1 2
b=c;	   // 1 2 2
}

return 0;
}
