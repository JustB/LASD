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
extern void test_ListOrderdedInsertWithListStruct(void);
extern void test_ListDeleteReallyRemovesNode(void);
extern void test_HeadInsertInsertInHead(void);
extern void test_HeadDeleteDeleteInHead(void);
extern void test_DeleteRange(void);
extern void test_SearchEmptyListFails(void);
extern void test_SearchExistingNodeSucceed(void);
extern void test_SeachNotExistingNodeFails(void);


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "TestList.c";
  UnityBegin();
  RUN_TEST(test_ListOrderdedInsertWithListStruct, 45);
  RUN_TEST(test_ListDeleteReallyRemovesNode, 57);
  RUN_TEST(test_HeadInsertInsertInHead, 69);
  RUN_TEST(test_HeadDeleteDeleteInHead, 83);
  RUN_TEST(test_DeleteRange, 103);
  RUN_TEST(test_SearchEmptyListFails, 120);
  RUN_TEST(test_SearchExistingNodeSucceed, 128);
  RUN_TEST(test_SeachNotExistingNodeFails, 142);

  return (UnityEnd());
}
