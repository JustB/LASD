/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_AddVertexWithLabel(void);
extern void test_AddVertexWithSameLabelShouldFail(void);
extern void test_ReallocFreeList(void);
extern void test_FindByLabel(void);
extern void test_DeleteVertex(void);


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "TestVertex.c";
  UnityBegin();
  RUN_TEST(test_AddVertexWithLabel, 24);
  RUN_TEST(test_AddVertexWithSameLabelShouldFail, 37);
  RUN_TEST(test_ReallocFreeList, 45);
  RUN_TEST(test_FindByLabel, 55);
  RUN_TEST(test_DeleteVertex, 69);

  return (UnityEnd());
}
