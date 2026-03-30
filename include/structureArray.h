/******************************************************* INTERFACE PUBLICA *******************************************************/

#ifndef STRUCTURE_ARRAY_H
#define STRUCTURE_ARRAY_H

// Estrutura de array
typedef struct _structureArray StructureArray;

/**
 * @brief Cria a estrutura de um array.
 *
 * @param size Quantidade de elementos válidos no array.
 * @param capacity Capacidade máxima que o array deve ter (>= array_size).
 * @return Ponteiro para o array alocado, ou NULL se falhar.
 */
StructureArray* arrayCreateStructureArray(int size, int capacity);

/**
 * @brief Retorna o vetor interno de dados do array.
 *
 * Permite acesso direto ao array que armazena os elementos do array.
 *
 * @param structure Ponteiro para a estrutura do array.
 * @return Ponteiro para o vetor de floats que representa os dados.
 */
float* arrayGetArray(StructureArray *structure);

/**
 * @brief Retorna a capacidade máxima do array.
 *
 * Informa quantos elementos o array pode armazenar antes de ocorrer overflow.
 *
 * @param structure Ponteiro para a estrutura do array.
 * @return Capacidade máxima do array.
 */
int arrayGetCapacity(StructureArray *structure);

/**
 * @brief Retorna o tamanho atual do array.
 *
 * Indica quantos elementos válidos estão armazenados no array no momento.
 *
 * @param structure Ponteiro para a estrutura do array.
 * @return Número de elementos atualmente no array.
 */
int arrayGetSize(StructureArray *structure);

/**
 * @brief Define o valor de um elemento no array.
 *
 * Altera diretamente o valor armazenado no índice especificado.
 *
 * @param structure Ponteiro para a estrutura do array.
 * @param array Ponteiro para um array.
 */
void arraySetArray(StructureArray *structure, float *array);

/**
 * @brief Ajusta a capacidade do array.
 *
 * Altera a capacidade máxima em relação ao valor atual.
 *
 * @param structure Ponteiro para a estrutura do array.
 * @param value Valor a ser adicionado à capacidade.
 */
void arraySetCapacity(StructureArray *structure, int value);

/**
 * @brief Ajusta o tamanho atual do array.
 *
 * Altera o campo `size` em relação ao valor atual.
 *
 * @param structure Ponteiro para a estrutura do array.
 * @param value Valor a ser adicionado ao tamanho.
 */
void arraySetSize(StructureArray *structure, int value);

/**
 * @brief Altera a capacidade do array em uma quantidade específica.
 *
 * Incrementa ou decrementa o campo `capacity` da estrutura do array
 * de acordo com o valor de `delta`. Pode ser positivo (aumenta) ou
 * negativo (diminui).
 *
 * @param structure Ponteiro para a estrutura do array.
 * @param delta Valor a ser adicionado ao campo capacity.
 */
void arrayChangeCapacity(StructureArray *structure, int delta);

/**
 * @brief Altera o tamanho atual do array em uma quantidade específica.
 *
 * Incrementa ou decrementa o campo `size` de acordo com o valor de `delta`.
 *
 * @param structure Ponteiro para a estrutura do array.
 * @param delta Valor a ser adicionado ao campo size.
 */
void arrayChangeSize(StructureArray *structure, int delta);

/**
 * @brief Adiciona um valor 'value' em uma posição 'idenx' no vetor
 * 
 * @param structure Ponteiro para a estrutura do array.
 * @param index Indice do vetor no qual se quer adicionar o valor.
 * @param value Valor que se quer adicionar ao vetor,
 */
void arrayAddValue(StructureArray *structure, int index, float value);

/**
 * @brief Imprime todos os elementos do array no console.
 *
 * A função percorre o vetor interno do array do índice 0 até array->size - 1
 * e imprime os valores. 
 *
 * @param structure Ponteiro para o array a ser impresso.
 *
 * @note Os elementos são impressos na ordem interna do vetor, não necessariamente
 *       em ordem decrescente de valor.
 */
void arrayPrint(StructureArray *structure);

/**
 * @brief Libera toda a memória usada pelo array.
 *
 * Desaloca o vetor interno de dados (`data`) e a própria estrutura
 * do array. 
 *
 * @param structure Ponteiro para a estrutura do array a ser destruída.
 */
void arrayDestroy(StructureArray *structure);

#endif

/*********************************************************************************************************************************/