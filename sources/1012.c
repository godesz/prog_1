/*
a = 2;
b = 1;

a||5+(b-6%a)&&1

mag ala	v�grehajtani
ala mag tov�bbmenni
egy egy k�t�sir�ny

a||5+1&&1

5+1

a||6&&1

6&&1     1

a||1

1
*/

#include <stdio.h>
int main(){

	int targonca = 7, kapa = 8;

	printf("%d\n", targonca++); // itt ++ olni fog a sor v�g�n
	printf("%d\n", targonca);

	printf("%d\n", ++kapa); // itt azonnal fog ++ olni
	printf("%d\n", kapa);

	int kutya = 12, macska = 19, eger = 91;

	printf("%d\n",(kutya++,macska++,eger++));

	printf("%d %d %d\n",kutya,macska,eger);

//�oxd9uhn�owebshb++9pz8ghq--3pa9h zg�p3aikzhg9o,1

/*
121991
91
12
1
0
122 */

return 0;
}




