
//-----------------------------------------tableau des taches---------------------------------------

int increment=0;
Tache myTache[100];

//----check if id already exist .

bool exist(int id)
{
    for(int i=0; i<increment; i++)
    {
        if(id==myTache[i].id_tache)
        {
            return true;
        }
    }
    return false;
}

//-----------------------------------------ajoutes une tache---------------------------------------

void ajouterTach()
{
    int choixStatus;
ajouterTach:

    printf("\n\t -------------------Ajouter un nouveau tache ----------------------");
    printf("\n\t\t entrer id de tache : ");
    scanf("%d", &myTache[increment].id_tache);
    if(exist(myTache[increment].id_tache))
    {
        printf("id %d deja existe merci de choisir un autre !! ", myTache[increment].id_tache);
        sleep(2);
        goto ajouterTach;
    }
    else
    {
        getchar();
        printf("\n\t\t entrer title de tache : ");
        gets(myTache[increment].title);

        printf("\n\t\t entrer description de tache : ");
        gets(myTache[increment].description);

        printf("\n\t\t entrer deadline de tache formart YYYY/MM/DD : ");
        scanf("%d \ %d \ %d", &myTache[increment].deadline.tm_year,&myTache[increment].deadline.tm_mon,&myTache[increment].deadline.tm_mday);

        printf("\n\t\t 1- TO DO : ");
        printf("\n\t\t 2- DOING : ");
        printf("\n\t\t 3- DONE : ");
        printf("\n\t\t choisi status de tache : ");
        scanf("%d", &choixStatus);

        switch(choixStatus)
        {
        case 1 :
            strcpy(myTache[increment].status, "TO DO");
            break;
        case 2 :
            strcpy(myTache[increment].status, "DOING");
            break;
        case 3 :
            strcpy(myTache[increment].status, "DONE");
            break;
        default :
            printf("invalide choix!!");
            break;

        }
    }



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
        ajouterTach();
        system("cls");
    }

}
//-----------------------------------------Afficher list des tache ---------------------------------------
void Afficher()
{
    if(increment==0)
    {

        system("cls");
        printf("\n\t\t Aucan tache pour le moment \n");
        sleep(2);
        system("cls");
    }
    else
    {
        for(int i=0; i<increment; i++)
        {
            printf("\n\t\t-------------------tache %d -------------------",i+1);
            printf("\n\t\t %d",myTache[i].id_tache);
            printf("\t\t %s",myTache[i].title);
            printf("\t\t %s",myTache[i].description);
            printf("\t\t %d/%d/%d",myTache[i].deadline.tm_year,myTache[i].deadline.tm_mon,myTache[i].deadline.tm_mday);
            printf("\t\t %s",myTache[i].status);
        }
    }


}

//----trie par Alphabetique
void liste_Per_Alphabetique()
{
    Tache stock;
    for(int i=0; i<increment; i++)
    {
        for(int j=i+1; j<increment; j++)
        {
            if(strcmp(myTache[i].title,myTache[j].title)>0)
            {
                stock=myTache[i];
                myTache[i]=myTache[j];
                myTache[j]=stock;
            }
        }
    }
    Afficher();
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



