#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include "structure.h"
#include "functions.h"
#include "MainMenu.h"





int main()
{
           /* time_t T_now=time(NULL);
    printf("current time is : %ld",T_now);
    struct tm date = *localtime(&T_now);
    //int d=(myTache[index].deadline.tm_year*365)+(myTache[index].deadline.tm_mon*30)+(myTache[index].deadline.tm_mday);

    int years=date.tm_year+1900;
    int months=date.tm_mon+1;
    int days=date.tm_mday;
    printf("\n %d %d %d",years,months,days);
    int all_days = ((years*365)+(months*30)+days);
    printf("\n%d",all_days);
    */


    int choix,id;
    char T[30];
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
            scanf("%s", T);
            system("cls");
            Rechercher_Titre(T);
            Sleep(2);
            break;
        case 8 :
            /*printf("\n\tdonner id de tache   :");
            scanf("%d",&id);
            calcul_deadline(id);*/
            system("cls");
            nbr_T_completes ();
            nbr_jour_rest();
            Sleep(2);
            break;
        default :
            printf("\t\t choix invalide \n");
            break;
        }

    }
    while (choix!=0);

    return 0;
}
