/******************************************************* INTERFACE PUBLICA *******************************************************/

#ifndef CALCULATE_TIME_H
#define CALCULATE_TIME_H

#include "array.h"

/**
 * @brief Mede o tempo de execução de uma função que atua sobre uma estrutura de Array.
 *
 * Esta função recebe como parâmetro um ponteiro para uma função que opera sobre 
 * uma estrutura do tipo `Array`, além de um ponteiro para a própria 
 * estrutura array. Ela executa a função fornecida e calcula o tempo total 
 * de execução em segundos.
 *
 * @param function Ponteiro para a função a ser executada. 
 *             Essa função deve receber um parâmetro do tipo `Array*` e não retornar valor.
 * @param array Ponteiro para a estrutura `Array` sobre a qual a função irá atuar.
 *
 * @return Tempo de execução da função (em segundos) como um valor do tipo `double`.
 *
 * @note Usa a função `clock()` da biblioteca `<time.h>`, logo mede tempo de CPU, 
 *       não tempo real decorrido.
 */
double executionTimeCalculate(void (*function)(Array *array), Array *array);

/**
 * @brief Imprime o tempo de execução em horas, minutos, segundos e milissegundos.
 *
 * Esta função recebe o tempo total em segundos (tipo double) e converte
 * para horas, minutos, segundos e milissegundos, imprimindo no formato:
 * "H M S ms".
 *
 * @param executionTime Tempo total em segundos (pode conter fração para milissegundos).
 *
 * @note A função apenas imprime o resultado na tela; não retorna nenhum valor.
 */
void executionTimePrint(double executionTime);

#endif

/*********************************************************************************************************************************/