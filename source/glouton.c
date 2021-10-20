//
// Created by j.guillerminprina on 20/10/2021.
//

#include "../headers/glouton.h"


void triItems(Item tab[], int size){
    //initialisation
    int i=0, j=0;
    float ptemp=0,vtemp=0;

    //Fonction de tri selection
    for(i=0;i<size-1;i++){ //Boucle parcours le tableau
        for(j=i+1;j<size;j++) { //Boucle parcours le tableau non trié
            if (tab[i].valeur/tab[i].volume < tab[j].valeur/tab[j].volume) { //Swap
                ptemp = tab[i].volume;
                vtemp = tab[i].valeur;
                tab[i] = tab[j];
                tab[j].volume = ptemp;
                tab[j].valeur= vtemp;
            }
        }
    }
}

float remplirSac(Item tab[],int array_size,int volMax){
    float vol = volMax;
    float valeurTot = 0;
    for (int i = 0; i < array_size; ++i) {
        if(tab[i].volume<=vol){
            valeurTot += tab[i].valeur;
            vol -= tab[i].volume;
        }
    }
    return valeurTot;
}


