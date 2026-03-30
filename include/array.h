/******************************************************* INTERFACE PUBLICA *******************************************************/

#ifndef ARRAY_H
#define ARRAY_H

// Estrutura de array
typedef struct _array Array;

/**
 * @brief Cria a estrutura de um array.
 *
 * @param size Quantidade de elementos válidos no array.
 * @param capacity Capacidade máxima que o array deve ter (>= array_size).
 * @return Ponteiro para o array alocado, ou NULL se falhar.
 */
Array* arrayCreate(int size, int capacity);

/**
 * @brief Retorna o vetor interno de dados do array.
 *
 * Permite acesso direto ao array que armazena os elementos do array.
 *
 * @param array Ponteiro para a estrutura do array.
 * @return Ponteiro para o vetor de floats que representa os dados.
 */
float* arrayGetArray(Array *array);

/**
 * @brief Retorna a capacidade máxima do array.
 *
 * Informa quantos elementos o array pode armazenar antes de ocorrer overflow.
 *
 * @param array Ponteiro para a estrutura do array.
 * @return Capacidade máxima do array.
 */
int arrayGetCapacity(Array *array);

/**
 * @brief Retorna o tamanho atual do array.
 *
 * Indica quantos elementos válidos estão armazenados no array no momento.
 *
 * @param array Ponteiro para a estrutura do array.
 * @return Número de elementos atualmente no array.
 */
int arrayGetSize(Array *array);

/**
 * @brief Define o valor de um elemento no array.
 *
 * Altera diretamente o valor armazenado no índice especificado.
 *
 * @param array Ponteiro para a estrutura do array.
 * @param array Ponteiro para um array.
 */
void arraySetArray(Array *array, float *_array);

/**
 * @brief Ajusta a capacidade do array.
 *
 * Altera a capacidade máxima em relação ao valor atual.
 *
 * @param array Ponteiro para a estrutura do array.
 * @param value Valor a ser adicionado à capacidade.
 */
void arraySetCapacity(Array *array, int value);

/**
 * @brief Ajusta o tamanho atual do array.
 *
 * Altera o campo `size` em relação ao valor atual.
 *
 * @param array Ponteiro para a estrutura do array.
 * @param value Valor a ser adicionado ao tamanho.
 */
void arraySetSize(Array *array, int value);

/**
 * @brief Adiciona um valor 'value' em uma posição 'idenx' no vetor
 * 
 * @param array Ponteiro para a estrutura do array.
 * @param index Indice do vetor no qual se quer adicionar o valor.
 * @param value Valor que se quer adicionar ao vetor,
 */
void arrayAddValue(Array *array, int index, float value);

/**
 * @brief Imprime todos os elementos do array no console.
 *
 * A função percorre o vetor interno do array do índice 0 até array->size - 1
 * e imprime os valores. 
 *
 * @param array Ponteiro para o array a ser impresso.
 *
 * @note Os elementos são impressos na ordem interna do vetor, não necessariamente
 *       em ordem decrescente de valor.
 */
void arrayPrint(Array *array);

/**
 * @brief Libera toda a memória usada pelo array.
 *
 * Desaloca o vetor interno de dados (`data`) e a própria estrutura
 * do array. 
 *
 * @param array Ponteiro para a estrutura do array a ser destruída.
 */
void arrayDestroy(Array *array);

#endif

/*********************************************************************************************************************************/