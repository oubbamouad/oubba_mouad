
int EX1()
{
    int somme_dargent;
    int billet_200,billet_100,billet_50,billet_1;
    int rest;
    printf("saisir la somme d'argent\n");
    scanf("%d",&somme_dargent);
    billet_200=somme_dargent/200;
    rest=somme_dargent%200;
    billet_100=rest/100;
    rest=rest%100;
    billet_50=rest/50;
    rest=rest%50;
    billet_1=rest;
    printf("les billets est: %d de 200\n  et  %d de 100\n  et %d de 50\n  et %d de 1\n",billet_200,billet_100,billet_50,rest);

    }
