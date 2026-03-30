#include "../include/array.h"
#include <stdio.h>
#include <stdlib.h>


/******************************************************* INTERFACE PRIVADA *******************************************************/

struct _array{
    float *_data;
    int _size;
    int _capacity;
};

void arrayIncrementSize(Array *array){array->_size++;}
void arrayDecrementSize(Array *array){array->_size--;}

/******************************************************* INTERFACE PUBLICA *******************************************************/

Array* arrayCreate(int _size, int _capacity){
    if(_capacity < _size){
        printf("Erro: capacidade menor que o tamanho do array!\n");
        return NULL;
    }

    Array *array = (Array*)malloc(sizeof(Array));
    if(!array) return NULL;

    array->_data = NULL;
    array->_size = _size;
    array->_capacity = _capacity;

    return array;
}

float* arrayGetArray(Array *array){return array->_data;}
int arrayGetCapacity(Array *array){return array->_capacity;}
int arrayGetSize(Array *array){return array->_size;}
float arrayGetValue(Array *array, int index){return array->_data[index];}

void arraySetArray(Array *array, float *_array){array->_data = _array;}
void arraySetCapacity(Array *array, int value){array->_capacity = value;}
void arraySetSize(Array *array, int value){array->_size = value;}

void arrayChange(Array *array, int index, float value){array->_data[index] = value;}

void arrayAddValue(Array *array, int index, float value){
    array->_data[index] = value;
    arrayIncrementSize(array);
}

void arrayPrint(Array *array){
    printf("["); 
    for(int i = 0; i < arrayGetSize(array) - 1; i++)
        printf("%.2f  ", arrayGetArray(array)[i]);
    
    printf("%.2f]\n", arrayGetArray(array)[arrayGetSize(array) - 1]);
}

void arrayDestroy(Array *array){
    if(array){
        free(array->_data);
        free(array);
    }
}

/*********************************************************************************************************************************/