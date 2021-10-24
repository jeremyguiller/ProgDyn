//
// Created by jeremy on 10/23/21.
//
#include <malloc.h>
#include <assert.h>
#include "CUnit/CUnit.h"
#include "../headers/dichotomy.h"
#include "../headers/glouton.h"


void testDichotomy(){
    int const TAILLE = 10000;
    int *array = (int*) malloc(sizeof(int) * TAILLE);
    for (int i = 0; i < TAILLE ; i++) {
        array[i]=i;
    }
    assert(find_by_dichotomy(array, TAILLE, 869) == 869) ;
    assert(find_by_dichotomy(array, TAILLE, 589) == 589) ;
    assert(find_by_dichotomy(array, TAILLE, 2)==2) ;
}

void testGlouton() {
    Item objets[5];
    Item monItem1; monItem1.volume = 5; monItem1.valeur = 5;
    Item monItem2; monItem2.volume = 5; monItem2.valeur = 7;
    Item monItem3; monItem3.volume = 10; monItem3.valeur =10;
    Item monItem4; monItem4.volume = 10; monItem4.valeur = 12;
    Item monItem5; monItem5.volume =20; monItem5.valeur =30;

    objets[0] = monItem1;
    objets[1] = monItem2;
    objets[2] = monItem3;
    objets[3] = monItem4;
    objets[4] = monItem5;

    assert(remplirSac(objets,5,25)==37);
    CU_ASSERT(2);
}


