//
// Created by j.guillerminprina on 20/10/2021.
//

int find_by_dichotomy(int array[], int size_t, int value ){
    int tmp1 = 0, tmp2 = size_t - 1;
    int i;
    while (tmp1 <= tmp2 ) {
        i = (tmp1 + tmp2)/2;
        if (array[i] == value)
            return i;
        if (array[i] < value)
            tmp1 = i+1;
        else
            tmp2 = i-1;
    }
    return -1;
}