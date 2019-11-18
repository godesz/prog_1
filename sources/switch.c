#include <stdio.h>

int main(){
	
	int benq;
	
	scanf("%d",&benq);
	
	switch(benq)
	{
	case 1 : { printf("Egy\n"); break; }
	case 2 : { printf("Ketto\n"); break; }
	case 3 : { printf("Harom\n"); break; }
	case 4 : { printf("Negy\n"); break; }
	case 5 : { printf("Ot\n"); break; }
	case 6 : { printf("Hat\n"); break; }
	default : printf("Nem jot adtal meg\n");
	}

return 0;
}
