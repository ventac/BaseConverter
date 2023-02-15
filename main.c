#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define MAX 5

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


/*int Convertir(int baseIN, int baseOUT, int saisie){

    switch (baseOUT)
    {    
    case 2:
        ToBIN(baseIN, saisie);
    break;
    case 10:
        ToDEC(baseIN, saisie);
    break;
    case 16:
    break;    
    default:
        break;
    }


}*/

int ToBIN(int BaseIN, int saisie){




}

bool baseNonValide(int base){
    if ((base != 2) && (base != 8) && (base != 10) && (base != 16)){
        return true;
    }else return false;
}

int ToOCT(){}
/*
int* ToDEC(int BaseIN, int saisie[MAX]){
    switch (BaseIN)
    {
    case 2:
        for (int i = 0; i<MAX;i++){
            saisie[i] = 1;  // Juste pour tester
        }
        return saisie;
        break;
    
    default:
        break;
    }
}
*/

char* ToHEX(){}
/*
void viderTableau(char (*tableau)[MAX]){
    for (int i = 0;i<MAX;i++){
        *tableau[i] = NULL;
    }
}
*/

// J'ai réecrit ma propre version de la fonction pour éviter les erreurs avec la foction "pow" et "powf"
float Power(float num, int puissance){
    float resultat = 1; // Pour pas multiplier par 0
    for (int i = 0; i < puissance; i++){
        resultat *= num;
    }
    return resultat;
}


int main(){

    // Déclaration des variables
    char saisieUser[MAX];
    //int saisieUser[MAX];
    //char *psaisieUser[MAX];
    //int resultat[20];
    float resultat = 0;
    int baseIN = 0;
    int baseOUT = 0;
    int puissance = 0;

    //viderTableau(psaisieUser);

    // Entrée
    printf("Merci de saisir ce que vous voulez convertir :  ");   
    //scanf("%d",saisieUser);    
    scanf("%s",saisieUser);  
    //printf("\n%c\n",*saisieUser);

    // Convertir
    //printf ("%d", Convertir(2,10,123));

    
    // De binaire à decimal
    for (int i=MAX-1 ; i>=0 ; i--){

        resultat += ((saisieUser[i]-48) * Power(2,puissance));
        //resultat = pow
        puissance++;

        printf("i: %d\n",i);
        printf("puissance: %d\n",puissance);
        printf("saisieUser[i]: %d\n",saisieUser[i]);
        printf("resultat: %f\n",resultat);
        //printf("%f",powf(puissance,3));
        
    }

    printf("\n\nresultat: %f\n",resultat);

    /*
    while (true)// character supp 16 
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
*/
    /*
    switch (expression)
    {
    case:
  
        break;
    
    default:
        break;
    }
    */

    //printf("Merci de choisir la base RETOUR");

    // Tester si saisie est ok
    //printf("Choisir base d'origine");

    return 0;

}
