#include "../include/array.h"

/******************************************************* INTERFACE PUBLICA *******************************************************/

void insertionSort(Array *array){
    for(int i = 1; i < arrayGetSize(array); i++){
        float key = arrayGetArray(array)[i];
        int j = i - 1;

        while(arrayGetArray(array)[j] > key && j >= 0){
            arrayChange(array, j + 1, arrayGetArray(array)[j]);
            j--;
        }

        arrayChange(array, j + 1, key);
    }
}

void insertionSortWrapper(void *a){
    insertionSort((Array*)a);
}

/*********************************************************************************************************************************/