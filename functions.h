
typedef struct
{

    int id_tache;
    char title[30];
    char description[100];
    int dateFin;
    int dateDebut;
    char status[30];
} LesTache;
int increment=0;
LesTache myTache[100];
//-----------------------------------------tableau des taches---------------------------------------

//-----------------------------------------ajoutes une tache---------------------------------------

void ajouterTach()
{

    printf("\n\t -------------------Ajouter un nouveau tache ----------------------");
    printf("\n\t\t entrer id de tache : ");
    scanf("%d", &myTache[increment].id_tache);

    printf("\n\t\t entrer title de tache : ");
    scanf("%s", &myTache[increment].title);

    printf("\n\t\t entrer description de tache : ");
    scanf("%s", &myTache[increment].description);

    printf("\n\t\t entrer date debut de tache : ");
    scanf("%id", &myTache[increment].dateDebut);

    printf("\n\t\t entrer date fin de tache : ");
    scanf("%d", &myTache[increment].dateFin);

    printf("\n\t\t entrer status de tache : ");
    scanf("%s", &myTache[increment].status);


    system("cls");
    printf("\n\n\t\t-------------------votre tach est bien ajouter-------------------");
    sleep(2);
    system("cls");
    increment++;

}

//-----------------------------------------Ajouter plusieur tache---------------------------------------
void ajouterTachs()
{
    int numTaches;
    printf("Combien de produits souhaitez-vous ?");
    scanf("%d", &numTaches);
    for(int i=0; i<numTaches; i++)
    {
        printf("\n\t\t ----------Ajouter un nouveau tache -------------");

        printf("\n\t\t entrer id de tache : ");
        scanf("%d", &myTache[i].id_tache);

        printf("\n\t\t entrer title de tache : ");
        scanf("%s", &myTache[i].title);


        printf("\n\t\t entrer description de tache : ");
        getchar();
        gets(myTache[i].description);


        printf("\n\t\t entrer date debut de tache : ");
        scanf("%id", &myTache[i].dateDebut);

        printf("\n\t\t entrer date fin de tache : ");
        scanf("%d", &myTache[i].dateFin);

        printf("\n\t\t entrer status de tache : ");
        scanf("%s", &myTache[i].status);

        system("cls");
        printf("\n\n\t\t-------------------tache %d est bien ajouter-------------------",i+1);
        sleep(1);
        system("cls");

    }
    increment=increment+numTaches;
}
//-----------------------------------------Afficher list des tache ---------------------------------------
void Afficher()
{
    for(int i=0;i<increment;i++)
    {
        printf("\n\t\t-------------------tache %d-------------------\n",i+1);
        printf("\t\t %d",myTache[i].id_tache);
        printf("\t\t %s",myTache[i].title);
        printf("\t\t %s",myTache[i].description);
        printf("\t\t %d",myTache[i].dateDebut);
        printf("\t\t %d",myTache[i].dateFin);
        printf("\t\t %s",myTache[i].status);
    }
}
//----menu de affichage
void Menu_Afficher()
{

}
//----trie par Alphabetique
void liste_Per_Alphabetique()
{

}
//----trie par deadline
void liste_Per_deadline()
{

}
//----afficher  deadline 3 jour moix
void afficher_deadline()
{

}

//-----------------------------------------Modifier les taches---------------------------------------

void modifier_description () {}
void modifier_status () {}
void modifier_deadline () {}

//-----------------------------------------Supprimer une tache---------------------------------------
void supprimer () {}

//-----------------------------------------Rechercher une tache--------------------------------------

//----Rechercher par Identifiant.
void Rechercher_Id () {}
//----Rechercher par Titre
void Rechercher_Titre () {}

//-----------------------------------------Statistiques des taches-----------------------------------
//----Afficher nbr total tâches.
void nbr_Total () {}
//----Afficher nbr tâches complètes / incomplètes.
void nbr_T_completes () {}
void nbr_T_incompletes () {}
//----afficher nbr jours restants .
void nbr_jour_rest () {}

