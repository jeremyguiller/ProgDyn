//
// Created by j.guillerminprina on 22/10/2021.
//

#include <stdio.h>
#include <stdlib.h>

int *creerMatrice(){
    int *tab = malloc(10000*sizeof(int));
    srand(3);
    for (int i = 0; i < 10000; ++i) {
        tab[i]=rand()%2;
    }
    return tab;
}


void matriceTostring(int *tableau){
    int a = -100;
    for (int j = 0; j <100 ; ++j) {
        printf("\n");
        a = a+100;
        for (int i = 0; i < 100; ++i) {
            if(tableau[a]==1){printf("*");}
            else { printf(" ");}
            a=a+1;
        }

    }
}