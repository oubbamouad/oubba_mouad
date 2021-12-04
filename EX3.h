int EX3()
{
    char sexe;
    int age;
    printf(" saisir le sexe H pour homme et sexe F pour femme \n");
    sexe=getchar();
    printf("donner l'age\n");
    scanf("%d",&age);
    if((sexe == 'H' && age < 20) ||  (sexe == 'F' && (age <22 || age > 55)))
        printf("\n impossibe");
    else
        printf(" possible ");


}
