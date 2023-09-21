
void Menu()
{
    int choix;

    do
    {
        printf("\t---------------------------------menu--------------------------------\t");
        printf("\n \t\t 1. Ajouter une tache    \n");
        printf("\t\t 2. Ajouter plusieur tache     \n");
        printf("\t\t 3. Afficher list des tache   \n");
        printf("\t\t 4. Modifier les taches  \n");
        printf("\t\t 5. Supprimer une tache    \n");
        printf("\t\t 6. Rechercher une tache   \n");
        printf("\t\t 7. Statistiques des taches  \n");
        printf("\t\t 8. Quite  \n");
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

            break;
        case 5 :

            break;
        case 6 :

            break;
        case 7 :

            break;
        case 8 :

            break;
        default :
            printf("\t\t choix invalide");
            break;
        }

    }
    while (choix!=0);


}
//----menu de affichage
void Menu_Afficher()
{

    int choix;

    do
    {
        printf("\t---------------------------------Menu afficher--------------------------------\t");
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
            Afficher();
            break;
        case 2 :
            liste_Per_Alphabetique();
            break;
        case 3 :
            //liste_Per_deadline();
            break;
        case 4 :
            //afficher_deadline();
            break;

        default :
            printf("\t\t choix invalide");
            break;
        }

    }
    while (choix!=0);

}
