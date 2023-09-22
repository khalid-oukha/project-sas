
//-------------------------Menu  affichage
void Menu_Afficher()
{

    int choix;

    do
    {
        printf("\n\t---------------------------------Menu afficher--------------------------------\t\n");
        printf("\n\t\t 1. afficher tous les taches   \n");
        printf("\t\t 2. Trier les tâches par ordre alphabétique.    \n");
        printf("\t\t 3. Trier les tâches par deadline     \n");
        printf("\t\t 4. Afficher les tâches dont le deadline est dans 3 jours ou moins.   \n");
        printf("\t\t 0. Quite  \n");
        printf("\t----------------------------votre choix------------------------------\t");
        printf("\n\t\t entrez votre choix :  \n");
        printf("\t\t");
        scanf("\t\t %d",&choix);


        switch (choix)
        {

        case 1 :
            system("cls");
            Afficher();
            break;
        case 2 :
            system("cls");
            liste_Per_Alphabetique();
            break;
        case 3 :
            system("cls");
            liste_Per_deadline();
            break;
        case 4 :
            afficher_deadline();
            break;

        default :
            printf("\t\t choix invalide");
            break;
        }


    }
    while (choix!=0);
    system("cls");

}



//-------------------------Menu  modification
void Menu_modification()
{

    int choix,num;

    do
    {
        printf("\n\t---------------------------------Menu modifier--------------------------------\t\n");
        printf("\n\t\t 1. modifier description    \n");
        printf("\t\t 2. modifier status    \n");
        printf("\t\t 3. modifier deadline    \n");
        printf("\t\t 0. Quite  \n");
        printf("\t------------------------------------votre choix-----------------------------------\t");
        printf("\n\t\t entrez votre choix :  \n");
        printf("\t\t");
        scanf("\t\t %d",&choix);


        switch (choix)
        {

        case 1 :
            printf("\n\t\t entrer id de tache pour modifier : ");
            scanf("%d", &num);
            modifier_description(num);
            break;
        case 2 :
            printf("\n\t\t entrer id de tache pour modifier : ");
            scanf("%d", &num);
            modifier_status (num);
            break;
        case 3 :
            printf("\n\t\t entrer id de tache pour modifier : ");
            scanf("%d", &num);
            modifier_deadline (num);
            break;

        default :
            printf("\t\t choix invalide");
            break;
        }


    }
    while (choix!=0);
    system("cls");

}

