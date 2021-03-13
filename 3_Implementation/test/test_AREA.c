#include "unity.h"
#include <AREA.h>

/* Modify these two lines according to the project */

#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */

void test_triangle_area(void);
void test_square_area(void);
void test_rect_area(void);
void test_circum_area(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

// void test_factorial_positive_num(void)
// {
//     long result = 1;
//     TEST_ASSERT_EQUAL(SUCCESS, find_factorial(10,&result));
//     TEST_ASSERT_EQUAL(3628800, result);
// }
// void test_factorial_negative_num(void)
// {
//     long result = 1;
//     TEST_ASSERT_EQUAL(SUCCESS, find_factorial(10,&result));
// }

void test_positive_area_square()
{
    TEST_ASSERT_EQUAL(49, square_area(7));
}
 void test_Negative_area_square()
{
     TEST_ASSERT_EQUAL(169, square_area(13));
}
 void test_positive_rect_area()
{
   TEST_ASSERT_EQUAL(200, rect_area(10,20));
}
void test_Negative_rect_area()
{
    TEST_ASSERT_EQUAL(-120, rect_area(-12,10));
}
void test_positive_triangle_area()
{
     TEST_ASSERT_EQUAL(100, triangle_area(10,20));
}
void test_Negative_triangle_area()
{
   TEST_ASSERT_EQUAL(-60, triangle_area(-12,10));
}

int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();
  
//   RUN_TEST(test_factorial_positive_num);
  /* Close the Unity Test Framework */
  RUN_TEST(test_positive_area_square);
  RUN_TEST(test_positive_rect_area);
  RUN_TEST(test_positive_triangle_area);
  RUN_TEST(test_Negative_area_square);
  RUN_TEST(test_Negative_rect_area);
  RUN_TEST(test_Negative_triangle_area);

  return UNITY_END();
}
