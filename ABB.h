#include <stdio.h>
#include <stdlib.h>

typedef int TipoDato;
typedef struct nodo{
	TipoDato dato;
	struct nodo *izq, *der;
}ELEMENTODEARBOLBINARIO;

typedef ELEMENTODEARBOLBINARIO *ARBOLBINARIO;

ARBOLBINARIO CrearNodo(TipoDato);
int profundidad(ARBOLBINARIO);
void hojas(ARBOLBINARIO, int *);
void liberar(ARBOLBINARIO *);
void insertarABB(ARBOLBINARIO *, TipoDato);
ARBOLBINARIO buscarABB(ARBOLBINARIO, TipoDato);
void eliminarABB(ARBOLBINARIO *, TipoDato);
void reemplazar(ARBOLBINARIO *);
void copiarABB(ARBOLBINARIO, ARBOLBINARIO *);
