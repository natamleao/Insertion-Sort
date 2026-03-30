#include "calculateTime.h"
#include <time.h>

/******************************************************* INTERFACE PUBLICA *******************************************************/

double calculateTimeExecutionTime(void (*function)(StructureArray *structure), StructureArray *structure){
    clock_t start, end;
    start = clock();
    function(structure);
    end = clock();
    
    return ((double)(end - start)) / CLOCKS_PER_SEC;
}

void calculateTimePrintExecutionTime(double executionTime){
    int hours, minutes, seconds, milliseconds;

    hours = (int)(executionTime / 3600);
    minutes = (int)((executionTime - hours*3600) / 60);
    seconds = (int)(executionTime - hours*3600 - minutes*60);
    milliseconds = (int)((executionTime - hours*3600 - minutes*60 - seconds) * 1000);

    printf("Tempo de execução: %d H : %d M : %d S : %d ms\n", hours, minutes, seconds, milliseconds);
}

/*********************************************************************************************************************************/