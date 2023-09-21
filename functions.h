
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
//----convert dates to days .
int convert_days(int index)
{
    int total_days=(myTache[index].deadline.tm_year*365)+(myTache[index].deadline.tm_mon*30)+(myTache[index].deadline.tm_mday);
    return total_days;
}

//-----------------------------------------ajoutes une tache---------------------------------------

void ajouterTach()
{
    int choixStatus;
ajouterTach:

    printf("\n\t -------------------Ajouter un nouveau tache ----------------------");
    printf("\n\t\t Entrer id de tache : ");
    scanf("%d", &myTache[increment].id_tache);
    if(exist(myTache[increment].id_tache))
    {
        printf("\n\t\t ====> id %d Deja existe merci de choisir un autre !! ", myTache[increment].id_tache);
        sleep(2);
        goto ajouterTach;
    }
    else
    {
        getchar();
        printf("\n\t\t Dntrer title de tache : ");
        gets(myTache[increment].title);

        printf("\n\t\t entrer description de tache : ");
        gets(myTache[increment].description);

        printf("\n\t\t entrer deadline de tache formart YYYY/MM/DD : ");
        scanf("%d %d %d", &myTache[increment].deadline.tm_year,&myTache[increment].deadline.tm_mon,&myTache[increment].deadline.tm_mday);

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
            system("cls");
            printf("\n\n\t\t====> invalide choix!!");
            break;

        }
    }



    system("cls");
    printf("\n\n\t\t votre tache est bien ajouter !");
    sleep(2);
    increment++;

}



//-----------------------------------------Ajouter plusieur tache---------------------------------------
void ajouterTachs()
{
    int numTaches;
    printf("\n\t\t Combien de produit souhaitez-vous ? ");
    scanf(" %d", &numTaches);
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
        Sleep(2);
    }
    else
    {
        for(int i=0; i<increment; i++)
        {
            printf("\n\t\t------------------------------------tache %d -----------------------------------------",i+1);
            printf("\n\n\t\t %d",myTache[i].id_tache);
            printf("\t\t %s",myTache[i].title);
            printf("\t\t %s",myTache[i].description);
            printf("\t\t %d/%d/%d",myTache[i].deadline.tm_year,myTache[i].deadline.tm_mon,myTache[i].deadline.tm_mday);
            printf("\t\t %s",myTache[i].status);
            printf("\n\t\t---------------------------------------------------------------------------------------");
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
    int x,y;
    Tache stock[10];
    int numberDays;
    time_t today;
    today=time(NULL);
    numberDays=today/(60*60*24);
    for(int i=0; i<increment; i++)
    {
        x=convert_days(i)-numberDays;
        for(int j=i+1; j<increment; j++)
        {
            y=convert_days(j)-numberDays;

            if(x>y)
            {
                stock[1]=myTache[i];
                myTache[i]=myTache[j];
                myTache[j]=stock[1];
            }

        }
    }
    Afficher();

}
//----afficher  deadline 3 jour moix
void afficher_deadline()
{

}

//-----------------------------------------Modifier les taches---------------------------------------

void modifier_description (int id)
{
    char newD[30];
    if(exist(id))
    {

        printf("\n\n\t\t entrez new desciption  :");
        scanf("%s", newD);
        strcpy(myTache[Rechercher_Id(id)].description, newD);
        printf("\n\n\t\t====> Description bien modifier  :");
    }
    else
    {
        system("cls");
        printf("\n\n\t\t====> Id Tache Introuvable Merci de Choisir un autre !! \n");


    }
}

void modifier_status (int id)
{

    int choose;
    if(exist(id))
    {
        printf("\n\t\t 1- TO DO : ");
        printf("\n\t\t 2- DOING : ");
        printf("\n\t\t 3- DONE : ");
        printf("\n\t\t choisi status de tache : ");
        scanf("%d", &choose);

        switch(choose)
        {
        case 1 :
            strcpy(myTache[Rechercher_Id(id)].status, "TO DO");
            printf("\n\n\t\t====> status bien modifier  :");
            break;
        case 2 :
            strcpy(myTache[Rechercher_Id(id)].status, "DOING");
            printf("\n\n\t\t====> status bien modifier  :");
            break;
        case 3 :
            strcpy(myTache[Rechercher_Id(id)].status, "DONE");
            printf("\n\n\t\t====> status bien modifier  :");
            break;
        default :
            printf("\n\n\t\t====> Invalide choix!!");
            break;

        }

    }
    else
    {
        system("cls");
        printf("\n\n\t\t====> id  id tache introuvable merci de choisir un autre !! ");

    }


}
void modifier_deadline (int id)
{

    int d,m,y;
    if(exist(id))
    {

        printf("\n\n\t\t====>\t entrez new deadline format YYYY/MM/DD   :");
        scanf("%d %d %d", &y, &m, &d);

        myTache[Rechercher_Id(id)].deadline.tm_year=y;
        myTache[Rechercher_Id(id)].deadline.tm_mon=m;
        myTache[Rechercher_Id(id)].deadline.tm_mday=d;
        //strcpy(myTache[Rechercher_Id(id)].description,newD);
        system("cls");
        printf("\n\n\t\t====>\t deadline bien modifier  ");
    }
    else
    {
        system("cls");
        printf("\n\n\t\t====>\t id tache introuvable merci de choisir un autre !! ");


    }
}

//-----------------------------------------Supprimer une tache---------------------------------------
void supprimer (int id)
{
    int position;
    if(exist(id))
    {
        position=Rechercher_Id(id);
        for(int i=position; i<increment; i++)
        {
            myTache[i]=myTache[i+1];

        }
        increment--;
        printf("\n\n\t\t====>-----------------bien supprimer-------------------");

    }
    else
    {
        printf("erreur !!");
    }

}

//-----------------------------------------Rechercher une tache--------------------------------------

//----Rechercher par Id.
int Rechercher_Id (int id)
{
    for(int i=0; i<increment; i++)
    {
        if(id==myTache[i].id_tache)
        {
            printf("\n\t---------------------------tache %d -------------------------",i+1);
            printf("\n\t\t %d",myTache[i].id_tache);
            printf("\t\t %s",myTache[i].title);
            printf("\t\t %s",myTache[i].description);
            printf("\t\t %d/%d/%d",myTache[i].deadline.tm_year,myTache[i].deadline.tm_mon,myTache[i].deadline.tm_mday);
            printf("\t\t %s",myTache[i].status);
            return i;
        }
    }
    printf("\n\n\t\t====> Aucan tache pour le moment \n");
    return 0;

}
//----Rechercher par Titre
void Rechercher_Titre (char titel[30])
{
    for(int i=0; i<increment; i++)
    {
        if(strcmp(titel[20],myTache[i].title)==0)
        {
            printf("\n\t---------------------------tache %d -------------------------",i+1);
            printf("\n\t\t %d",myTache[i].id_tache);
            printf("\t\t %s",myTache[i].title);
            printf("\t\t %s",myTache[i].description);
            printf("\t\t %d/%d/%d",myTache[i].deadline.tm_year,myTache[i].deadline.tm_mon,myTache[i].deadline.tm_mday);
            printf("\t\t %s",myTache[i].status);

        }
    }

}

//-----------------------------------------Statistiques des taches-----------------------------------
//----Afficher nbr total tâches.
void nbr_Total ()
{
    printf("\n\n\t\t====> Nombre total des taches est : %d \n",increment);
}
//----Afficher nbr tâches complètes / incomplètes.
void nbr_T_completes () {}
void nbr_T_incompletes () {}
//----afficher nbr jours restants .
void nbr_jour_rest () {}



