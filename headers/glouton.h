//
// Created by j.guillerminprina on 20/10/2021.
//

#ifndef PROGDYN_GLOUTON_H
#define PROGDYN_GLOUTON_H
/**
 * structure item contenant une valeur et un poid
 */
typedef struct {
    float valeur;
    float volume;
} Item;

float remplirSac(Item tab[],int array_size,int volMax);
void triItems(Item tab[], int size);

#endif //PROGDYN_GLOUTON_H
