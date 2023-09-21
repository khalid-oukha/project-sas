
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

    int choix,id;

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
            scanf("%d", &id);
            modifier_description(id);
            break;
        case 2 :
            printf("\n\t\t entrer id de tache pour modifier : ");
            scanf("%d", &id);
            modifier_status (id);
            break;
        case 3 :
            printf("\n\t\t entrer id de tache pour modifier : ");
            scanf("%d", &id);
            modifier_deadline (id);
            break;

        default :
            printf("\t\t choix invalide");
            break;
        }


    }
    while (choix!=0);
    system("cls");

}




//------------------------Menu principal

void Menu()
{
    int choix,id;
    char title[30];
    do
    {
        printf("\n\t---------------------------------menu--------------------------------\t\n");
        printf("\n \t\t 1. Ajouter une tache    \n");
        printf("\t\t 2 Ajouter plusieur tache     \n");
        printf("\t\t 3 Afficher list des tache   \n");
        printf("\t\t 4 Modifier les taches  \n");
        printf("\t\t 5 Supprimer une tache    \n");
        printf("\t\t 6. Rechercher par id  \n");
        printf("\t\t 7. Rechercher par title  \n");
        printf("\t\t 8. Statistiques des taches  \n");
        printf("\t\t 0. Quite  \n");
        printf("\t----------------------------votre choix------------------------------\t");
        printf("\n\t\t entrez votre choix :  \n");
        printf("\t\t");
        scanf("\t\t %d",&choix);


        switch (choix)
        {
        case 1 :
            ajouterTach();
            break;
        case 2 :
            ajouterTachs();
            break;
        case 3 :
            Menu_Afficher();
            break;
        case 4 :
            Menu_modification();
            break;
        case 5 :
            printf("\n\t\t entrer id de tache pour supprimer : ");
            scanf("%d", &id);
            system("cls");
            supprimer (id);
            break;
        case 6 :
            printf("\n\tdonner id de tache   :");
            scanf("%d",&id);
            system("cls");
            Rechercher_Id(id);
            Sleep(2);
            break;
        case 7 :
            printf("\n\t donner title de tache   :");
            scanf("%s",&title[30]);
            system("cls");
            Rechercher_Titre(title);
            Sleep(2);
            break;
        case 8 :
            system("cls");
            nbr_T_completes ();
            Sleep(2);
            break;
        default :
            printf("\t\t choix invalide \n");
            break;
        }

    }
    while (choix!=0);


}
