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
    char saisieArrayChar[MAX];
    int saisieInt;
    float DEC = 0;
    int baseIN = 0;
    int baseOUT = 0;
    int puissance = 0;
    int choix = 0;
    bool baseValide = false;

    while(!baseValide)
    {
        //viderTableau(psaisieUser);
        printf("Merci de choisir la base d'origine : \n"); 

        // Test entrée
        printf("[2] Pour binaire : \n");
        printf("[8] Pour octal : \n");
        printf("[10] Pour décimal : \n");
        printf("[16] Pour hexadecimal : \n");
        scanf("%d",&choix);


        switch (choix)
        {
            //__________________________________________________________________
            case 2:        
                printf("Merci de saisir le chiffre binnaire :  ");       
                scanf("%s",saisieArrayChar); 

                // De binaire à décimal
                for (int i=MAX-1 ; i>=0 ; i--){
                    DEC += ((saisieArrayChar[i]-48) * Power(2,puissance)); 
                    puissance++;        
                }
                printf("\n\nDécimal: %f\n",DEC); 

                baseValide = true;
            break;
            //__________________________________________________________________
            case 8:
                printf("Merci de saisir le chiffre octal :  ");       
                scanf("%d",&saisieInt);  

                // De octal à décimal

                baseValide = true;
            break;
            //__________________________________________________________________
            case 10:
                // Pas de conversion
                printf("Merci de saisir le chiffre décimal :  ");       
                scanf("%d",&DEC);   
                baseValide = true;
            break;
            //__________________________________________________________________
            case 16:
                printf("Merci de saisir le chiffre hexadécimal :  ");       
                scanf("%d",&saisieInt);  

                // De HEX à décimal

                baseValide = true;
            break;
            //__________________________________________________________________
            default:
                // Base non valide
                printf("Base non valide! ");
                baseValide = false;
            break;
        }
    }
    
    // Agora so preciso converter tudo em decimal
    




    // De decimal à binaire
    int nbre = 31;
    nbre = DEC;  // Test de conversion directe
    int reste = nbre;
    int resultatBIN[255];
    int i = 8;
    int tailleTableau = 0;

    do {   
        resultatBIN[i] = reste%2;    
        reste /= 2;
        i--;
        tailleTableau++;
    } while (reste >= 2);   

    printf("Binaire : %d",reste);  // Le reste de la dernière opération
    for (int j = i+1;j<tailleTableau+i+1;j++){
        printf("%d",resultatBIN[j]);
    }
    
    // De décimal à octal
        // Diviser le numero par goupes de 3
        // Il y a une fonction qui fait tout ça
    int resultatDEC_int = DEC;
    printf("\nOctal : %o\n",resultatDEC_int);

    // De décimal à hexadécimal
    printf("Hexadécimal : %x\n",resultatDEC_int);

    // 






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
