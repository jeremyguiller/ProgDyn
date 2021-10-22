//
// Created by j.guillerminprina on 22/10/2021.
//

#include <stdio.h>
#include <stdlib.h>
/**
 * cree une nouvelle matrice de taille variable avec des nombres aleatoires
 * @return
 */
int *creerMatrice(){
    int *tab = malloc(100*sizeof(int));
    srand(4);
    for (int i = 0; i < 100; ++i) {
        tab[i]=rand()%2;
    }
    return tab;
}


void matriceTostring(int *tableau){
    int a = -10;
    for (int j = 0; j <10 ; ++j) {
        printf("\n");
        a = a+10;
        for (int i = 0; i < 10; ++i) {
            if(tableau[a]==1){printf("*");}
            else { printf(" ");}
            a=a+1;
        }

    }
}