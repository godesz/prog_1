File *kukac;
kukac = fopen("valami.txt","r");
//********************
r - megnyit�s olvas�sra
w - megnyit�s �r�sra (l�trehoz�s)
a - megnyit�s b�v�t�sre
r+ - megnyit�s �r�sra �s olvas�sra (elej�re �r)
w+ - megnyit�s �r�sra �s olvas�sra (fel�l�r)
a+ - megnyit�s �r�sra �s olvas�sra (v�g�re f�z)
//********************

fscanf(kukac,"%c",&c);
fscanf(kukac,"%d\n",d);
c = fgetc(kukac);


fprintf(kukac,"eztbeleirom %d",d);
fputc(c,kukac);

if (c==EOF) printf("FILE VEGE VAN\n");

while(!feof(kukac))
{

#cuccok
#beolvas�s

}

fclose(kukac);








