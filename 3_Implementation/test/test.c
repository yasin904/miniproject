#include "unity.h"
#include "func.h"

#define PROJECT_NAME    "energy_calculator"
/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

/*prototyping all the test functions*/

void test_kinetic();
void test_gravitational();
void test_mechanical();

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_kinetic);
  RUN_TEST(test_gravitational);
  RUN_TEST(test_mechanical);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
int m,k,g,v,h;


void test_kinetic(void) {
  m=20.00;
  v=30.00;
  TEST_ASSERT_EQUAL(300.00, kinetic(20.00, 30.00));
  
}

void test_gravitational(void){
    m=10.00;
    h=20.00;
    TEST_ASSERT_EQUAL(1960.00, gravitational(10.00,20.00));
}

void test_mechanical(void){
    k=100.00;
    g=200.00;
    TEST_ASSERT_EQUAL(300.00, mechanical(100.00,200.00));
    
}
