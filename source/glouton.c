//
// Created by j.guillerminprina on 20/10/2021.
//

#include "../headers/glouton.h"

/**
 * permet de trier un tableau contenant des Structures items et les classe
 * par ordre decroissant de rapport valeur/volume
 * @param tab tableau contenan des Items
 * @param size taille du tableau
 */
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
/**
 * Rempli un sac de volumeMax avec les Items ayant le plus de valeur
 *
 * @param tab tableau d'Items
 * @param array_size taille du tableau
 * @param volMax Le volume du sac à dos volumeMax
 * @return la valeur Totale de notre sac
 */
float remplirSac(Item tab[],int array_size,int volMax){
    triItems(tab, array_size);
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


