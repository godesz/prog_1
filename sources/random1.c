#include <stdio.h>
#include <stdlib.h>

int main () {
   int i, n, a;
   
   n = 5;
  
   for( i = 0 ; i < n ; i++ ) {
		a = rand();
      printf("%d\n", a );
   }
   
   return(0);
}
