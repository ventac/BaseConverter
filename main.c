#include <stdio.h>
#include <stdbool.h>
//#include <system.h>

bool canBeBIN(char * saisie){

}

bool canBeOCT(char * saisie){

}

bool canBeDEC(char * saisie){

}

bool canBeHEX(char * saisie){
    // Tester si supérieur à F
}


int toBIN(char* saisie, int base){

    switch (base)
    {    
    case 8:
    break;
    case 10:
    break;
    case 16:
    break;    
    default:
        break;
    }


}

bool baseNonValide(int base){
    if ((base != 2) && (base != 8) && (base != 10) && (base != 16)){
        return true;
    }else return false;
}

int toOCT(){}
int toDEC(){}
char* toHEX(){}

int main(){

    char* saisieUser;
    int baseIN, baseOUT = 0;

    // Entrée
    printf("Merci de saisir ce que vous voulez convertir : ");   
    scanf("%s",saisieUser);    
    while (/* character supp 16 */true)
    {
        printf("La limite est la base HEX, donc pas possible supérieur à F\n");
        printf("\nMerci de resaisir le nombre : \n");
    }
    

    printf("Merci de choisir la base ENTREE : \n"); 

    // Test entrée
    if (canBeBIN(saisieUser)) printf("[2] Pour binaire : \n");
    if (canBeOCT(saisieUser)) printf("[8] Pour octal : \n");
    if (canBeDEC(saisieUser)) printf("[10] Pour décimal : \n");
    if (canBeHEX(saisieUser)) printf("[16] Pour hexadecimal : \n");        

    printf("\nVotre choix : ");
    scanf("%s",baseIN);

    // Clear screen      

    printf("Conversion de %s de base %d vers : " );
    // Pas afficher si déjà dans la base
    if (baseIN != 2) printf("[2] Pour binaire : \n");
    if (baseIN != 8) printf("[8] Pour octal : \n");
    if (baseIN != 10) printf("[10] Pour décimal : \n");
    if (baseIN != 16) printf("[16] Pour hexadecimal : \n");        

    printf("\nVotre choix : ");
    scanf("%s",baseOUT);

    while ((baseIN == baseOUT) || (baseOUT == NULL) || (baseNonValide(baseOUT) || (baseOUT == 0)))
    {
        // ClearScreen        
        if (baseIN == baseOUT){
            printf("\nLa base d'entrée et de sortie ne peut pas être la même\n");
        }else if(baseOUT == NULL){
            printf("\nLa base de sortie ne peut pas être vide\n");
        }

        
        printf("Conversion de %s de base %d vers : " );
        // Pas afficher si déjà dans la base
        if (baseIN != 2) printf("[2] Pour binaire : \n");
        if (baseIN != 8) printf("[8] Pour octal : \n");
        if (baseIN != 10) printf("[10] Pour décimal : \n");
        if (baseIN != 16) printf("[16] Pour hexadecimal : \n");        

        printf("\nVotre choix : ");
        scanf("%s",baseOUT);
    }

    /*
    switch (expression)
    {
    case:
  
        break;
    
    default:
        break;
    }
    */

    printf("Merci de choisir la base RETOUR");

    // Tester si saisie est ok
    printf("Choisir base d'origine");

    return 0;

}
