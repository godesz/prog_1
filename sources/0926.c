#include <stdio.h>
// Kellékek/Parancssor
int main()
{
int votma, telefon, oszcikopi;
double anna, bela, cilike;

votma = 123;
telefon = 159;
anna = 11.0;
bela = 3.0;
oszcikopi = votma + telefon;

printf("   \" \' \\  \n");
printf("%d\n",oszcikopi);
printf("%d\n",votma + telefon);
cilike=anna/bela;
printf("%lf\n",cilike);

char mander;
mander = 97;
printf("%c\n",mander);
printf("%d\n",mander);
printf("Ezt irom ki: %c\n",12);


double gabriella;
scanf("%lf",&gabriella);
printf("Ezt adtad meg: %.21lf\n",gabriella);


return 0;
}

