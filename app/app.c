#include "../include/executionTime.h"
#include "../include/insertionSort.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CAPACITY 1000000000
#define SIZE 100000000

int main(){

    float *_array = calloc(CAPACITY, sizeof(float));
    if(!_array){
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    srand(time(NULL));
    for(int i = 0; i < SIZE; i++){
        float min = -5000000.0f;
        float max =  5000000.0f;
        _array[i] = min + ((float)rand() / RAND_MAX) * (max - min);
    }

    Array *array = arrayCreate(SIZE, CAPACITY);

    arraySetArray(array, _array);

    //arrayPrint(array);
    
    double executionTime = executionTimeCalculate(insertionSortWrapper, array);

    //arrayPrint(array);

    executionTimePrint(executionTime);

    arrayDestroy(array);
    
    return 0;
}