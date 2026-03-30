/******************************************************* INTERFACE PUBLICA *******************************************************/

#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include "array.h"

/**
 * @brief Chama a função `insertionSorte` incapsulada.
 * 
 * @param a Ponteiro para o array.
 */
void insertionSortWrapper(void *a);


/**
 * @brief Ordena um array de elementos em ordem crescente usando o algoritmo Insertion Sort.
 *
 * @param array Ponteiro para o Array a ser ordenado.
 */
void insertionSort(Array *array);

#endif

/*********************************************************************************************************************************/