#include <stdio.h>
#include <stdlib.h>

typedef int TipoDatoA;
typedef struct nodoA{
	TipoDatoA dato;
	struct nodoA *izq, *der;
}ELEMENTODEARBOLBINARIO;

typedef ELEMENTODEARBOLBINARIO *ARBOLBINARIO;

ARBOLBINARIO CrearNodoA(TipoDatoA);
void nuevoArbol(ARBOLBINARIO *, ARBOLBINARIO, ARBOLBINARIO, TipoDatoA);
int profundidad(ARBOLBINARIO);
void hojas(ARBOLBINARIO, int *);
void liberar(ARBOLBINARIO *);
void insertarABB(ARBOLBINARIO *, TipoDatoA);
ARBOLBINARIO buscarABB(ARBOLBINARIO, TipoDatoA);
void eliminarABB(ARBOLBINARIO *, TipoDatoA);
void reemplazar(ARBOLBINARIO *);
void copiarABB(ARBOLBINARIO, ARBOLBINARIO *);
