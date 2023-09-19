#include <stdio.h>

struct Ajouter{
    
    char Donne1[200];
    char Donne2[200];
    char Donne3[200];
    char Donne4[200];
};

void Ajouter(){
    
    struct Ajouter  donnee1,donnee2,donnee3,donnee4;
    printf("========================================= Ajouter les donnees =========================================\n");
    printf("Donne1 : ",donnee1.Donne1);
    scanf("%s",donnee1.Donne1);
    printf("Donne2 : ",donnee2.Donne2);
    scanf("%s",donnee2.Donne2);
    printf("Donne3 : ",donnee3.Donne3);
    scanf("%s",donnee3.Donne3);
    printf("Donne4 : ",donnee4.Donne4);
    scanf("%s",donnee4.Donne4);
    return;
    
}

void Afficher(){
    struct Ajouter donnee1,donnee2,donnee3,donnee4;
    printf("========================================= Voila les donnees =========================================\n");
    printf("==> Donnee 1 : %s",donnee1.Donne1);
    printf("\n==> Donnee 2 : %s",donnee2.Donne2);
    printf("\n==> Donnee 3 : %s",donnee3.Donne3);
    printf("\n==> Donnee 4 : %s\n",donnee4.Donne4);

    return;
}

void Rechercher(){

    
}

void Supprimer(){

    
}

void SupprimerRepeter(){

    
}

void GenereWordlist(){

    
}

void Menu(){
    
    int menu;
    int i , n;

    do{
        printf("=================================================================================================\n");
        printf("Menu d'application\n");
        printf("=================================================================================================\n");
        printf("1 - Afficher les donnee");
        printf("\n2 - Ajouter une donnee");
        printf("\n3 - Rechercher sur une  donnee");
        printf("\n4 - Supprimer une donnee");
        printf("\n5 - Supprimer les donnees repetes");
        printf("\n6 - Genere le wordlist");
        printf("\n7 - Genere le wordlist dans un fichier.txt");
        printf("\n8 - Afficher les donnees de type entier");
        printf("\n=================================================================================================");
        printf("\nTapez votre choix [1-6] : ");
        scanf("%d",&menu);

        switch (menu){
        case 1:
            Afficher();
            break;
        case 2:
            Ajouter();
            break;
        case 3:
            Rechercher();
            break;
        case 4:
            Supprimer();
            break;
        case 5:
            SupprimerRepeter();
            break;
        case 6:
            GenereWordlist();
            break;
        }
    }
    while (menu != 6);
    
}



int main(){

    Menu();

    return 0;
}
