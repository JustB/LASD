#include "jvertex.h"
#include <stdio.h>
#include <stdlib.h>

struct jvertex_tag
{
	char *Label; /**< Vertex's Label */
	int  *Data;  /**< Vertex's Data */ //TODO questo deve essere generico, non un int
};

/**
 * Allocate a new Vertex and initialize its attributes
 *
 * @return Pointer to new vertex created
 * 		   NULL on error
 *
 * */
J_VERTEX *NewJVertex()
{
	J_VERTEX *Vert = NULL; /**< Temporary vertex */

	/* Create new vertex */
	Vert = (J_VERTEX *)malloc(sizeof(struct jvertex_tag));
	if( Vert )
	{
		/* Initialize vertex attributes */
		Vert->Label = NULL;
		Vert->Data  = NULL;
	}
	else
	{
		/* Error in malloc */
		fprintf(stderr, "Error in malloc\n");
	}
	/* Return pointer to new vertex */
	return Vert;

}   


#ifdef TEST_DRIVER
#include <assert.h>
int main()                     
{
	J_VERTEX *V = NULL;

	V = NewJVertex();
	assert( V->Data == NULL );
	assert( V->Label == NULL );

	return 0;

}
#endif
