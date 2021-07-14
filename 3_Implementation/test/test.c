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

double test_kinetic();
double test_gravitational();
double test_mechanical();

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



double test_kinetic(void) {
  
  TEST_ASSERT_EQUAL(300.00,20.00, 30.00);
  
}

double test_gravitational(void){
    
    
    TEST_ASSERT_EQUAL(1960.00, 10.00,20.00);
}

double test_mechanical(void){
    
    
    TEST_ASSERT_EQUAL(300.00, 100.00,200.00);
    
}
