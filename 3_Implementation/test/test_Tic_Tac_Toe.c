#include "unity.h"
#include <Tic_Tac_toe.h>

/* Modify these two lines according to the project */
#include <Tic_Tac_Toe.h>
#define PROJECT_NAME    "Tic-Tac-Toe"

/* Prototypes for all the test functions */
void test_play_board(void);
void test_play_rules(void);
int test_checktowin(void);
int test_decision(void)

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_play_board);
  RUN_TEST(test_play_rules);
  RUN_TEST(test_checktowin);
  RUN_TEST(test_decision);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
 void test_play_board(void){
  TEST_ASSERT_EQUAL(display the playboard);
}
void test_play_rules(void) {
  TEST_ASSERT_EQUAL(display the rules of the game);
}

int test_checktowin(void) {
  TEST_ASSERT_EQUAL(display the winner of the game);
}

int test_decision(void) {
  TEST_ASSERT_EQUAL(decides whether to choose x or o );
}
