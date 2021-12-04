int EX2()
{
    float PA;
    float CA,FR,FV,HT,TVA,TTC;
    char Type;
    printf("saisir le type de produit\n");
    scanf("%c",&Type);
    printf("saisir le prix d'achat\n");
    scanf("%f",&PA);
    if(PA>9000)
    {
        {FR=PA*4/100;
    }
   if (PA>2000)
   {
       FR=PA*0.1;
   }
   else{
    FR=0.0;
   }
}
CA=PA+FR;
FV=CA*0.1;

if(Type == 'X'  || Type=='x')
{
    TVA=30./100.;
}
if(Type == 'Y' || Type=='y')
{
    TVA=38./100.;
}
if(Type == 'Z' || Type == 'z')
{
    TVA=43./100.;
}
HT=CA+FV;
TTC=HT+HT*TVA;
printf("\n le prix d'achat est %f",PA);
printf("\n le frais de vente est %f",FV);
printf("\n le TVA est %f",TVA);
printf("\n le prix de vente est %f",HT);
printf("\n les Frais est %f",FR);
printf("\n le prix totale TTC est %f",TTC);


}
