#include <stdlib.h> 
#include <stdio.h>
#include <string.h>
#include "CuTest.h"
#include "../src/lista.h"
/* HELPER FUNCTIONS */
#define MOCK_LIST_OBJECT_INIT LIST L; OPERATIONS Op; Op.Compare = (COMPARATOR)strcasecmp; Op.InitNode = (INITIALIZER)InizializzaNodoStringa;
#define ASDRUBALE 20
char *InizializzaNodoStringa( char *Value )
{
	char *str= (char *) malloc( (strlen(Value) + 1) * sizeof(char) );
	strcpy(str, Value);
	return str;
}

void StampaNodoStringa(char *Value)
{
	printf("%s\n", Value);
}

void DeallocaStringa( char *Value )
{
	free(Value);
}
/* END HELPER FUNCTIONS */

/* BEGIN TESTS */
void TestInitializedListIsEmpty( CuTest *tc )
{
	MOCK_LIST_OBJECT_INIT
    List_Init(&L, &Op);
	printf("%d\n", ASDRUBALE);
	CuAssertTrue( tc, List_IsEmpty(&L) );
}

void TestInsertOneNodeInFrontOfList( CuTest *tc )
{
	int Status;
	MOCK_LIST_OBJECT_INIT
	List_Init(&L, &Op);
	Status = List_Insert("Giustino", &L);
	CuAssertIntEquals( tc, Status, 0);
	CuAssertStrEquals( tc, L.Head->Info, "Giustino");
	CuAssertTrue( tc, List_IsEmpty(&L) != 1 );
	CuAssertTrue( tc, L.Head->Next == NULL );
}

void TestInsertIsDoneInOrder( CuTest *tc )
{
	int Status;
	MOCK_LIST_OBJECT_INIT
	List_Init(&L, &Op);
	Status = List_Insert("Giustino", &L);
	Status = List_Insert("Asdrubale", &L);
	CuAssertIntEquals( tc, Status, 0);
	CuAssertStrEquals( tc, L.Head->Info, "Asdrubale");
}

void TestInsertDuplicateDoesNotInsertNewNode( CuTest *tc )
{
	int Status;
	MOCK_LIST_OBJECT_INIT
	List_Init(&L, &Op);
	Status = List_Insert("Giustino", &L);
	Status = List_Insert("Giustino", &L);
	CuAssertIntEquals( tc, Status, W_DUPLICATE);
	CuAssertStrEquals( tc, "Giustino", L.Head->Info);
}

#define malloc(x) my_malloc((x))
void TestInsertNotDoneWhenMallocFails( CuTest *tc )
{
	int Status;
	MOCK_LIST_OBJECT_INIT
	List_Init(&L, &Op);
   	Status = List_Insert("Giustino", &L);
	CuAssertIntEquals( tc, E_MALLOC, Status);
}
/* END TESTS */
