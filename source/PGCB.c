//
// Created by j.guillerminprina on 22/10/2021.
//

#include <stdio.h>
#include <stdlib.h>

int tab creerMatrice(){
    int tab[10000];
    srand(3);
    for (int i = 0; i < 10000; ++i) {
        tab[i]=rand()%2;
    }
    return tab;
}


void matriceTostring(int tab[]){
    int a = -100;
    for (int j = 0; j <100 ; ++j) {
        printf("\n");
        a = a+100;
        for (int i = 0; i < 100; ++i) {
            if(tab[a]==1){printf("*");}
            else { printf(" ");}
            a=a+1;
        }

    }
}