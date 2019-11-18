File *kukac;
kukac = fopen("valami.txt","r");
//********************
r - megnyitás olvasásra
w - megnyitás írásra (létrehozás)
a - megnyitás bõvítésre
r+ - megnyitás írásra és olvasásra (elejére ír)
w+ - megnyitás írásra és olvasásra (felülír)
a+ - megnyitás írásra és olvasásra (végére fûz)
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
#beolvasás

}

fclose(kukac);








