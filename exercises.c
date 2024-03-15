#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Ejercicio 1: Encuentra el Elemento Mayor
Descripción: Escribe una función que tome un arreglo de enteros
y su tamaño, y devuelva el valor más grande del arreglo.
*/
int findMax(int arr[], int size) {
  int index = 0;
  int max = -2147483648;
  while (index < size) {
    if (arr[index] > max) {
      max = arr[index];
    }
    index++;
  }
  return max;
}
/*
Ejercicio 2: Invertir un Arreglo
Descripción: Escribe una función que tome un arreglo y su tamaño, y luego
invierta el orden de sus elementos.
*/
void reverseArray(int arr[], int size) {
  int aux;
  for (int i = 0; i < size; i++) {
    aux = arr[i];
    arr[i] = arr[size - 1];
    arr[size - 1] = aux;
    size--;
  }
  /*
  int indexNew = 0;
  int arrNew[size];
  int indexOrg = size - 1;
  while (indexOrg >= 0)
  {
    while(indexNew < size)
    {
      arrNew[indexNew] = arr[indexOrg];
      indexNew++;
      indexOrg--;
    }
  }
  arr = arrNew;
  */
}

/*
Ejercicio 3: Filtrar Números Pares
Descripción: Escribe una función que tome un arreglo de enteros
y su tamaño, y luego devuelva un nuevo arreglo que contenga solo
los números pares del arreglo original.
newsize apunta a una dirección válida que no ha sido inicializada con nigún
valor específico. *newsize debe almacenar el tamaño del nuevo arreglo que se
retorna.
*/
/*
int cont = 0;
for(index = 0 ; index < size; index++)
{
  if(arr[index] % 2 == 0)
    cont++;
}
int *arregloNuevo = malloc(cont * sizeof(int));*/

/*int *filterEvenNumbers(int arr[], int size, int *newSize) {
  int index;
  (*newSize) = 0;
  int *arregloNuevo = NULL;
  for(index = 0 ; index < size; index++)
  {
    if(arr[index] % 2 == 0)
    {
      arregloNuevo = realloc(arregloNuevo, sizeof(int) * ((*newSize) + 1));
      if (arregloNuevo == NULL)
      {
        free(arregloNuevo);
        return NULL;
      }
      arregloNuevo[(*newSize)] = arr[index];
      (*newSize) += 1;
    }
  }
  return arregloNuevo;
}*/

int *filterEvenNumbers(int arr[], int size, int *newSize) {
  int count = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 == 0) {
      count++;
    }
  }
  int *result = (int *)malloc(sizeof(int) * count);
  if (result == NULL) {
    *newSize = 0;
    return NULL;
  }

  int index = 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 == 0) {
      result[index++] = arr[i];
    }
  }
  *newSize = count;
  return result;
}

/*
Ejercicio 4: Fusión de dos Arreglos Ordenados
Descripción: Escribe una función que tome dos arreglos
ordenados de menor a mayor y sus tamaños, y luego fusione estos dos
arreglos en un tercer arreglo también ordenado de menor a mayor.
*/
void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int result[]) {
  int index1 = 0;
  int index2 = 0;
  int indexNuevo = 0;
while(indexNuevo < (size1 + size2))
  {
    if(index1 < size1 && (index2 >= size2 || arr1[index1] <= arr2[index2]))
    {
      result[indexNuevo] = arr1[index1];
      index1++;
    }
    else
    {
      result[indexNuevo] = arr2[index2];
      index2++;
    }
    indexNuevo++;
  }
}

/*
Ejercicio 5: Comprobación de Ordenación
Descripción: Escribe una función que tome un arreglo y su tamaño,
y luego devuelva 1 si el arreglo está ordenado en orden ascendente,
  0 si no está ordenado, y -1 si está ordenado en orden descendente.
*/
int checkSorted(int arr[], int size) { return -2; }

/*
Ejercicio 6: Información de una Biblioteca
Descripción: Vamos a representar la información de una biblioteca. En la
biblioteca, hay libros, y cada libro tiene un autor. Queremos organizar esta
información utilizando estructuras anidadas en C. Escribe la función para
inicializar la información de un libro.
*/

typedef struct {
  char nombre[50];
  int anioNacimiento;
} Autor;

typedef struct {
  char titulo[100];
  Autor autor;
  int anioPublicacion;
} Libro;

void inicializarLibro(Libro *libro, const char *titulo, const char *nombreAutor,
                      int anioNacimiento, int anioPublicacion) {}

/*
Ejercicio 7: Lista enlazada de números
Descripción: Escribe una función que tome un arreglo de enteros y su tamaño, y
luego cree una lista enlazada usando la estructura Nodo. Cada nodo de la lista
debe contener un número del arreglo, y los nodos deben estar enlazados en el
mismo orden que los números aparecen en el arreglo. El último nodo de la lista
debe apuntar a NULL. La función debe devolver un puntero al primer nodo de la
lista enlazada.
Recuerda reservar memoria dinámica para cada nodo usando malloc.
Puedes guiarte con lo que vimos en las clases (diapos).
  */

typedef struct nodo {
  int numero;
  struct nodo *siguiente; // puntero al siguiente nodo
} Nodo;

Nodo *crearListaEnlazada(int arr[], int size) { return NULL; }
