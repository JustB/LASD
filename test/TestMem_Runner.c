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
extern void test_MemAllocAllocatingOneByteIsSuccess(void);
extern void test_MemAllocAllocatingTooMuchMemoryIsError(void);
extern void test_MemCallocAllocatingOneByteIsSuccess(void);
extern void test_MemCallocAllocatingTooMuchMemoryIsError(void);
extern void test_MemFreeDeallocateAllocatedMemory(void);
extern void test_MemFreePointerAlreadyDeallocatedShouldFail(void);


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "TestMem.c";
  UnityBegin();
  RUN_TEST(test_MemAllocAllocatingOneByteIsSuccess, 16);
  RUN_TEST(test_MemAllocAllocatingTooMuchMemoryIsError, 25);
  RUN_TEST(test_MemCallocAllocatingOneByteIsSuccess, 40);
  RUN_TEST(test_MemCallocAllocatingTooMuchMemoryIsError, 49);
  RUN_TEST(test_MemFreeDeallocateAllocatedMemory, 64);
  RUN_TEST(test_MemFreePointerAlreadyDeallocatedShouldFail, 75);

  return (UnityEnd());
}
