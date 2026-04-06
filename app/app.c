#include "../include/execution_time.h"
#include "../include/insertion_sort.h"
#include "../include/array.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main(){

    StructureArray *array = structureArrayCreate(SIZE);
    if(!array){
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    srand(time(NULL));
    for(int i = 0; i < SIZE; i++){
        float min = -1e6f;
        float max =  1e6f;
        structureArraySet(array, i, min + ((float)rand() / RAND_MAX) * (max - min));
    }

    //structureArrayPrint(array);

    double executionTime = executionTimeCalculate(insertionSortWrapper, array);

    executionTimePrint(executionTime);

    structureArrayDestroy(array);

    return 0;
}
