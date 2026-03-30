# Insertion Sort em C com Medição de Tempo

![Language](https://img.shields.io/badge/language-C-blue)
![Standard](https://img.shields.io/badge/standard-C11-orange)
![Build](https://img.shields.io/badge/build-Makefile-green)
![Data Structure](https://img.shields.io/badge/data_structure-array-yellow)
![Algorithm](https://img.shields.io/badge/algorithm-insertion_sort-lightgrey)
![License](https://img.shields.io/badge/license-MIT-lightgrey)

---

## Visão geral

Este projeto implementa o algoritmo de ordenação **Insertion Sort** em C, juntamente com um módulo simples para **medição de tempo de execução**.

O objetivo não é apenas implementar o algoritmo, mas **observar seu comportamento em escala**, evidenciando o impacto da sua complexidade quadrática.

---

## Funcionalidades

- Estrutura de array dinâmica  
- Inserção de valores  
- Impressão dos dados  
- Ordenação com Insertion Sort  
- Geração de dados aleatórios  
- Medição de tempo de execução  
- Liberação de memória  

---

## Estrutura de dados

A estrutura utilizada encapsula um array dinâmico:

```c
struct _structureArray{
    float *_data;
    int _size;
    int _capacity;
};
````

* `_data`: array de elementos
* `_size`: quantidade de elementos válidos
* `_capacity`: capacidade total alocada

---

## Insertion Sort

```c
void insertionSorte(Array *array);
```

### Como funciona

O algoritmo percorre o array e, a cada passo, insere o elemento atual na posição correta dentro da parte já ordenada.

### Complexidade

* **Melhor caso:** `O(n)`
* **Caso médio:** `O(n²)`
* **Pior caso:** `O(n²)`

---

## Medição de tempo

O projeto utiliza `clock_gettime` com `CLOCK_MONOTONIC`, evitando interferência de ajustes no relógio do sistema.

```c
double executionTime = executionTimeCalculate(insertionSorte, array);
executionTimePrint(executionTime);
```

Exemplo de saída:

```
Tempo de execução: 0 H : 0 M : 0 S : 850 ms
```

---

## Observação importante

O Insertion Sort é eficiente para conjuntos pequenos ou quase ordenados.

No entanto, para grandes volumes de dados, o custo cresce rapidamente devido à sua complexidade `O(n²)`.

Este projeto permite visualizar esse comportamento na prática.

---

## Estrutura do projeto

```
Insertion-Sort/
│
├── app/             # Aplicação principal (main)
├── bin/             # Executáveis gerados
├── include/         # Arquivos de cabeçalho (.h)
├── build/           # Arquivos objeto (.o)
├── src/             # Código-fonte (.c)
├── lib/             # Biblioteca estática
│
├── Makefile         # Regras de compilação
├── README.md        # Documentação do projeto
└── LICENSE          # Licença do projeto
```

---

> [!IMPORTANT]
> ## Requisitos
> 
> Para compilar e executar o projeto é necessário:
> 
> * **GCC ou Clang**
> * **GNU Make**
> * Sistema **Linux ou macOS**

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
> ## Licença
>
> Este projeto está licenciado sob a **Licença MIT**.

---

## Autor

**Natam Leão Ferreira**

Conclusão: **2026**

---