#include <stdio.h>
#include <malloc.h>
#include "headers/dichotomy.h"
#include "headers/glouton.h"

int main() {
//    int const taille = 10000;
//    int *array = (int*) malloc(sizeof(int)*taille);
//    for (int i = 0; i <taille ; i++) {
//        array[i]=i;
//    }
//    int a = find_by_dichotomy(array,taille,869);
//    printf("%d",a);

    Item objets[5];
    Item monItem1; monItem1.volume = 10; monItem1.valeur = 3;
    Item monItem2; monItem2.volume = 10; monItem2.valeur = 4;
    Item monItem3; monItem3.volume = 10; monItem3.valeur =10 ;
    Item monItem4; monItem4.volume = 10; monItem4.valeur = 15;
    Item monItem5; monItem5.volume =10 ; monItem5.valeur =20;

    objets[0] = monItem1;
    objets[1] = monItem2;
    objets[2] = monItem3;
    objets[3] = monItem4;
    objets[4] = monItem5;
//    for (int i = 0; i < 5; ++i) {
//        printf("%f\n",objets[i].valeur/objets[i].volume);
//    }
    triItems(objets,5);
    for (int i = 0; i < 5; ++i) {
        printf("%f\n",objets[i].valeur/objets[i].volume);
    }
    printf("la valeur du sac est : %f", remplirSac(objets,5,20));
}
