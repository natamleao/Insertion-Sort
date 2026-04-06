#include "../include/execution_time.h"
#include "../include/array.h"
#include "../include/insertion_sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define MAX_TESTS 7

int main(){

    int tests[] = {10000, 20000, 50000, 100000, 200000, 500000, 1000000};

    printf("+------------------------------------------------------------------+\n");
    printf("+------------------------ Testes iniciados ------------------------+\n");

    for(int i = 0; i < MAX_TESTS; i++){
        printf("+------------------------------------------------------------------+\n");
        printf("Teste n.º: %d\n", i+1);
        printf("+------------------------------------------------------------------+\n");
        StructureArray *arrayInsertion = structureArrayCreate(tests[i]);

        srand(time(NULL));
        for(int j = 0; j < tests[i]; j++){
            float min = -1e6f;
            float max =  1e6f;
            float value = min + ((float)rand() / RAND_MAX) * (max - min);
            structureArraySet(arrayInsertion, j, value);
        }

        double executionTimeInsertionSort = executionTimeCalculate(insertionSortWrapper, arrayInsertion);
        printf("InsertionSort - ");
        //structureArrayPrint(arrayInsertion);
        executionTimePrint(executionTimeInsertionSort);
        structureArrayDestroy(arrayInsertion);
    }

    printf("+------------------------------------------------------------------+\n");
    printf("+----------------------- Testes finalizados -----------------------+\n");
    printf("+------------------------------------------------------------------+\n");

    return 0;
}
