#include "jvset.h"
#include "mem.h"
#include <stdlib.h>

/**
 * Implementazione dell'interfaccia J_VSET utilizzando un array
 *
 * */
struct jvertex_tag
{
	char *Label; /**< Vertex's Label */
};

struct jvset_tag
{
    J_VERTEX *Vertices; /**< Array contenente i vertici */
};

/**
 * Inizializza l'insieme
 * */
J_STATUS JVset_Init( int HintNumVertices, J_VSET **Set )
{
   J_STATUS ReturnStatus;
   J_VSET *S; /**< Variabile temporanea */
   int i; /**< Contatore per cicli */

   ReturnStatus = SUCCESS;
   /* Creo un alias per l'insieme */
   S = *Set;

   /* Alloco la struct che rappresenta l'insieme */
   ReturnStatus = MemAlloc(sizeof(J_VSET), (void **)&S);

   if( ReturnStatus == SUCCESS )
   {
       /* Se l'insieme è stato correttamente allocato, alloco l'array
       	* singoli vertici
       	* */
       ReturnStatus = MemAlloc( HintNumVertices * sizeof(J_VERTEX), 
               (void **)&(S->Vertices) );
       if( ReturnStatus == SUCCESS )
       {
           /* Inizializza l'insieme dei vertici */
       }
   }

   return ReturnStatus;
}

/**
 * Dealloca l'insieme di vertici
 * */
void JVset_Destroy( J_VSET *Set )
{
    J_VERTEX *V = Set->Vertices;
    MemFree( (void **)V );
    MemFree( (void **)&Set );
}

/*
 * METODI PER VERTICI
 *
 * */

/**
 * Inizializza un vertice
 *
 * Inizializza tutti i valori di un vertice in uno stato consistente.
 *
 * */
void JVertex_Init( J_VERTEX *V )
{
    V->Label = NULL;
}

#ifdef ASD
/**
 * Aggiunge un vertice con etichetta Label e dati associati all'insieme
 * */
J_STATUS JVset_AddVertex( char *Label, void *Data, J_VSET *Set )
{
}

/**
 * Rimuove un vertice dall'insieme
 * */
J_STATUS JVset_RemoveVertex( char *Label, J_VSET *Set )
{
}

/**
 * Recupera l'informazione associata al vertice
 * */
J_STATUS JVset_GetVertexData( char *Label, void *Data, J_VSET *Set )
{
}

#endif
