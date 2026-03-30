#include "structureArray.h"
#include <stdio.h>
#include <stdlib.h>


/******************************************************* INTERFACE PRIVADA *******************************************************/

struct _structureArray{
    float *data;
    int size;
    int capacity;
};

/******************************************************* INTERFACE PUBLICA *******************************************************/

StructureArray* arrayCreateStructureArray(int size, int capacity){
    if(capacity < size){
        printf("Erro: capacidade menor que o tamanho do array!\n");
        return NULL;
    }

    StructureArray *structure = (StructureArray*)malloc(sizeof(structure));
    if(!structure) return NULL;

    structure->data = NULL;
    structure->size = size;
    structure->capacity = capacity;

    return structure;
}

float* arrayGetArray(StructureArray *structure){return structure->data;}
int arrayGetCapacity(StructureArray *structure){return structure->capacity;}
int arrayGetSize(StructureArray *structure){return structure->size;}

void arraySetArray(StructureArray *structure, float *array){structure->data = array;}
void arraySetCapacity(StructureArray *structure, int value){structure->capacity = value;}
void arraySetSize(StructureArray *structure, int value){structure->size = value;}

void arrayChangeCapacity(StructureArray *structure, int delta){arraySetCapacity(structure, arrayGetCapacity(structure) + delta);}
void arrayChangeSize(StructureArray *structure, int delta){arraySetSize(structure, arrayGetSize(structure) + delta);}

void arrayAddValue(StructureArray *structure, int index, float value){structure->data[index] = value;}

void arrayPrint(StructureArray *structure){
    printf("[");
    for(int i = 0; i < arrayGetSize(structure) - 1; i++)
        printf("%.2f  ", arrayGetArray(structure)[i]);
    
    printf("%.2f]\n", arrayGetArray(structure)[arrayGetSize(structure) - 1]);
}

void arrayDestroy(StructureArray *structure){
    if(structure){
        free(structure->data);
        free(structure);
    }
}

/*********************************************************************************************************************************/