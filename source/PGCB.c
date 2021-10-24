//
// Created by j.guillerminprina on 22/10/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * cree une nouvelle matrice de taille variable avec des nombres aleatoires
 * @return un tableau contenant la matrice
 */
int *creerMatrice(){
    int *tab = malloc(500*sizeof(int));
    srand(time(0));
    for (int i = 0; i < 500; ++i) {
        tab[i]=rand()%2;
    }
    tab[101]='\0';
    return tab;
}

/**
 * Affiche la matrice dans la console
 * @param tableau Matrice de 0 et de 1
 */
void matriceTostring(int *tableau){
    int a = 0;
    for (int j = 0; j <10 ; ++j) {
        printf("\n");
        for (int i = 0; i < 50; ++i) {
            if(tableau[a]==1){printf("*");}
            else { printf(" ");}
            a=a+1;
        }
    }
}