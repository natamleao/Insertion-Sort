#include "../include/insertion_sort.h"

/******************************************************* INTERFACE PUBLICA *******************************************************/

void insertionSort(StructureArray *array){
    float *data = structureArrayGetData(array);
    int size = structureArrayGetSize(array);

    for(int i = 1; i < size; i++){
        float key = data[i];
        int j = i - 1;

        while(j >= 0 && data[j] > key){
            data[j + 1] = data[j];
            j--;
        }

        data[j + 1] = key;
    }
}

void insertionSortWrapper(void *a){
    insertionSort((StructureArray*)a);
}

/*********************************************************************************************************************************/
