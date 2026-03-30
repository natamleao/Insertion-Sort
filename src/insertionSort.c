#include "../include/array.h"

/******************************************************* INTERFACE PRIVADA *******************************************************/

void insertionSort(Array *array){
    for(int i = 1; i < arrayGetSize(array); i++){
        float key = arrayGetArray(array)[i];
        int j = i - 1;

        while(arrayGetArray(array)[j] > key && j >= 0){
            arrayAddValue(array, j + 1, arrayGetArray(array)[j]);
            j--;
        }

        arrayAddValue(array, j + 1, key);
    }
}

/******************************************************* INTERFACE PUBLICA *******************************************************/

void insertionSortWrapper(void *a) {
    insertionSort((Array*)a);
}

/*********************************************************************************************************************************/