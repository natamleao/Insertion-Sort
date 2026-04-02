# *Insertion Sort* com Medição de Tempo

![Language](https://img.shields.io/badge/language-C-blue)
![Standard](https://img.shields.io/badge/standard-C11-orange)
![Build](https://img.shields.io/badge/build-Makefile-green)
![Data Structure](https://img.shields.io/badge/data_structure-array-yellow)
![Algorithm](https://img.shields.io/badge/algorithm-insertion_sort-lightgrey)
![License](https://img.shields.io/badge/license-MIT-lightgrey)

---

## Visão geral

Este projeto implementa o algoritmo de ordenação *Insertion Sort* em C, juntamente com um módulo para **medição de tempo de execução**.

O foco não é só implementar, mas **medir e observar o comportamento real**, evidenciando o impacto da complexidade quadrática.

---

## Funcionalidades

* Estrutura de *array* simples
* Inserção de valores
* Impressão dos dados
* Ordenação com *Insertion Sort*
* Geração de dados aleatórios
* Medição de tempo com `clock_gettime`
* Liberação de memória

---

## Estrutura de dados

A estrutura encapsula um *array* de tamanho fixo:

```c
struct _structureArray{
    float *_data;
    int _size;
};
```

* `_data`: *array* de elementos
* `_size`: quantidade de elementos

Aqui a ideia foi simplificar: não há *capacity*, apenas um *array* com tamanho definido.

---

## *Insertion Sort*

```c
void insertionSort(StructureArray *array);
```

### Como funciona

O algoritmo percorre o *array* e, a cada passo, insere o elemento atual na posição correta dentro da parte já ordenada.

### Complexidade

* **Melhor caso:** `O(n)`
* **Caso médio:** `O(n²)`
* **Pior caso:** `O(n²)`

---

## Medição de tempo

O projeto utiliza `clock_gettime` com `CLOCK_MONOTONIC`, garantindo medição estável:

```c
double executionTime = executionTimeCalculate(insertionSortWrapper, array);
executionTimePrint(executionTime);
```

Exemplo:

```
Tempo de execução: 0 H : 0 M : 0 S : 850 ms
```

---

## Observação importante

O *Insertion Sort* é eficiente para conjuntos pequenos ou quase ordenados.

Mas quando o tamanho cresce:

* o número de operações explode
* o tempo cresce quadraticamente
* o algoritmo rapidamente se torna inviável

Esse projeto deixa isso claro na prática.

---

## Estrutura do projeto

```
Insertion-Sort/
│
├── app/             # Arquivo principal da aplicação (main)
├── bin/             # Executável gerado
├── include/         # Arquivos de cabeçalho (.h)
├── build/           # Arquivos objeto (.o)
├── src/             # Código-fonte da aplicação (.c)
├── lib/             # Biblioteca estática
│
├── Makefile         # Regras de compilação
├── README.md        # Documentação 
└── LICENSE          # Licença 
```

---

> [!IMPORTANT]
>
> ## Requisitos
>
> * *GCC* ou *Clang*
> * *GNU Make*
> * Sistema *Linux* ou *macOS*

---

## Instalação

```bash
git clone git@github.com:natamleao/Insertion-Sort.git
cd Insertion-Sort
```

---

## Compilação

```bash
make
```

---

## Execução

```bash
make run
```

---

## Limpeza

```bash
make clean
make cleanapp
```

---

> [!WARNING]
>
> ## Licença
>
> Este projeto está sob a licença *MIT*.

---

## Autor

**Natam Leão Ferreira**

Conclusão: **2026**

---
