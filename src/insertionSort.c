#include "insertionSort.h"

/******************************************************* INTERFACE PUBLICA *******************************************************/

void insertionSorte(StructureArray *structure){
    for(int i = 1; i < arrayGetSize(structure); i++){
        float key = arrayGetArray(structure)[i];
        int j = i - 1;

        while(arrayGetArray(structure)[j] > key && j >= 0){
            arrayAddValue(structure, j + 1, j);
            j--;
        }

        arrayAddValue(structure, j + 1, key);
    }
}

/*********************************************************************************************************************************/