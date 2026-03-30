#include "calculateTime.h"
#include "insertionSort.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int capacity = 1100000;
    int size = 500000;

    float *array = calloc(capacity, sizeof(float));
    if(!array){
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    srand(time(NULL));
    for(int i = 0; i < size; i++){
        float min = -5000000.0f;
        float max =  5000000.0f;
        array[i] = min + ((float)rand() / RAND_MAX) * (max - min);
    }

    StructureArray *structure = arrayCreateStructureArray(size, capacity);

    arraySetArray(structure, array);

    //arrayPrint(structure);
    
    double executionTime = calculateTimeExecutionTime(insertionSorte, structure);

    arrayPrint(structure);

    calculateTimePrintExecutionTime(executionTime);

    arrayDestroy(structure);
    
    return 0;
}