#include "unity.h"
#include "main.h"

void setUp(){}

void tearDown(){}
###############################################################################################


void test_add(void);
void test_add_testcase2(void);
void test_add_testcase3(void);
void test_add_testcase4(void);
void test_add_testcase5(void);

void test_subtract(void);
void test_subtract_testcase2(void);
void test_subtract_testcase3(void);
void test_subtract_testcase4(void);
void test_subtract_testcase5(void);

void test_multiply(void);
void test_multiply_testcase2(void);
void test_multiply_testcase3(void);
void test_multiply_testcase4(void);
void test_multiply_testcase5(void);

void test_divide(void);
void test_divide_testcase2(void);
void test_divide_testcase3(void);
void test_divide_testcase4(void);
void test_divide_testcase5(void);

void test_percentage(void);
void test_percentage_testcase2(void);
void test_percentage_testcase3(void);
void test_percentage_testcase4(void);
void test_percentage_testcase5(void);

void test_gcd(void);
void test_gcd_testcase2(void);
void test_gcd_testcase3(void);
void test_gcd_testcase4(void);
void test_gcd_testcase5(void);

void test_rem(void);
void test_rem_testcase2(void);
void test_rem_testcase3(void);
void test_rem_tvoid test_add(void);
void test_add_testcase2(void);
void test_add_testcase3(void);
void test_add_testcase4(void);
void test_add_testcase5(void);

void test_subtract(void);
void test_subtract_testcase2(void);
void test_subtract_testcase3(void);
void test_subtract_testcase4(void);
void test_subtract_testcase5(void);

void test_multiply(void);
void test_multiply_testcase2(void);
void test_multiply_testcase3(void);
void test_multiply_testcase4(void);
void test_multiply_testcase5(void);

void test_divide(void);
void test_divide_testcase2(void);
void test_divide_testcase3(void);
void test_divide_testcase4(void);
void test_divide_testcase5(void);

void test_percentage(void);
void test_percentage_testcase2(void);
void test_percentage_testcase3(void);
void test_percentage_testcase4(void);
void test_percentage_testcase5(void);

void test_gcd(void);
void test_gcd_testcase2(void);
void test_gcd_testcase3(void);
void test_gcd_testcase4(void);
void test_gcd_testcase5(void);

void test_rem(void);
void test_rem_testcase2(void);
void test_rem_testcase3(void);
void test_rem_testcase4(void);
void test_rem_testcase5(void);

void test_power(void);
void test_power_testcase2(void);
void test_power_testcase3(void);
void test_power_testcase4(void);
void test_power_testcase5(void);estcase4(void);
void test_rem_testcase5(void);

void test_power(void);
void test_power_testcase2(void);
void test_power_testcase3(void);
void test_power_testcase4(void);
void test_power_testcase5(void);


################################################################################################
void sin_func_test(void)
{
     TEST_ASSERT_EQUAL(0.5,sin_func(30));
}

void cos_func_test(void)
{
     TEST_ASSERT_EQUAL(0.5,cos_func(30));
}
void tan_func_test(void)
{
      TEST_ASSERT_EQUAL(-6,tan_func(30));
}
void cosec_func_test(void)
{
      TEST_ASSERT_EQUAL(-1,cosec_func(30));
}
void sec_func_test(void)
{
      TEST_ASSERT_EQUAL(6.48,sec_func(30));
}

void sin_func_test_1(void)
{
     TEST_ASSERT_EQUAL(0.866,sin_func(60));
}

void cos_func_test_1(void)
{
     TEST_ASSERT_EQUAL(0.5,cos_func(60));
}
void tan_func_test_1(void)
{
      TEST_ASSERT_EQUAL(-6,tan_func(30));
}
void cosec_func_test_1(void)
{
      TEST_ASSERT_EQUAL(-1,cosec_func(30));
}

void cot_func_test_1(void)
{
      TEST_ASSERT_EQUAL(3,cot_func(60));
}

void sin_func_test_2(void)
{
     TEST_ASSERT_EQUAL(0.5,sin_func(30));
}

void cos_func_test_2(void)
{
     TEST_ASSERT_EQUAL(0.5,cos_func(30));
}
void tan_func_test_2(void)
{
      TEST_ASSERT_EQUAL(-6,tan_func(30));
}
void cosec_func_test_2(void)
{
      TEST_ASSERT_EQUAL(-1,cosec_func(30));
}
void sec_func_test_2(void)
{
      TEST_ASSERT_EQUAL(6.48,sec_func(30));
}


void sin_func_test_3(void)
{
     TEST_ASSERT_EQUAL(0.866,sin_func(60));
}

void cos_func_test_3(void)
{
     TEST_ASSERT_EQUAL(0.5,cos_func(60));
}
void tan_func_test_3(void)
{
      TEST_ASSERT_EQUAL(-6,tan_func(30));
}
void cosec_func_test_3(void)
{
      TEST_ASSERT_EQUAL(-1,cosec_func(30));
}


int main(void)
{ 
  UNITY_BEGIN();

     // trignometric test function call

     RUN_TEST(sin_func_test);
     RUN_TEST(tan_func_test);
     RUN_TEST(cos_func_test);
     RUN_TEST(cosec_func_test);
     RUN_TEST(sec_func_test);
    

    // trignometric test function call

     RUN_TEST(sin_func_test_1);
     RUN_TEST(tan_func_test_1);
     RUN_TEST(cos_func_test_1);
     RUN_TEST(cosec_func_test_1);
     
     RUN_TEST(cot_func_test_1);

/* ################################### */

     RUN_TEST(sin_func_test_2);
     RUN_TEST(tan_func_test_2);
     RUN_TEST(cos_func_test_2);
     RUN_TEST(cosec_func_test_2);
     RUN_TEST(sec_func_test_2);
     

/* ################################### */

     RUN_TEST(sin_func_test_3);
     RUN_TEST(tan_func_test_3);
     RUN_TEST(cos_func_test_3);
     RUN_TEST(cosec_func_test_3);
     
     
    //##########################################NEHA############################################################
     
       /* Run Test functions */
  /*ADDITION*/
  RUN_TEST(test_add);
  RUN_TEST(test_add_testcase2);
  RUN_TEST(test_add_testcase3);
  RUN_TEST(test_add_testcase4); 
  RUN_TEST(test_add_testcase5);

  /*SUBTRACTION*/
  RUN_TEST(test_subtract);
  RUN_TEST(test_subtract_testcase2);
  RUN_TEST(test_subtract_testcase3);
  RUN_TEST(test_subtract_testcase4);
  RUN_TEST(test_subtract_testcase5);

  /*MULTIPLICATION*/
  RUN_TEST(test_multiply);
  RUN_TEST(test_multiply_testcase2);
  RUN_TEST(test_multiply_testcase3);
  RUN_TEST(test_multiply_testcase4);
  RUN_TEST(test_multiply_testcase5);

  /*DIVISION*/
  RUN_TEST(test_divide);
  RUN_TEST(test_divide_testcase2);
  RUN_TEST(test_divide_testcase3);
  RUN_TEST(test_divide_testcase4);
  RUN_TEST(test_divide_testcase5);

  /*PERCENTAGE*/
  RUN_TEST(test_percentage);
  RUN_TEST(test_percentage_testcase2);
  RUN_TEST(test_percentage_testcase3);
  RUN_TEST(test_percentage_testcase4);
  RUN_TEST(test_percentage_testcase5);

  /*GCD*/
  RUN_TEST(test_gcd);
  RUN_TEST(test_gcd_testcase2);
  RUN_TEST(test_gcd_testcase3);
  RUN_TEST(test_gcd_testcase4);
  RUN_TEST(test_gcd_testcase5);

  /*REMAINDER*/
  RUN_TEST(test_rem);
  RUN_TEST(test_rem_testcase2);
  RUN_TEST(test_rem_testcase3);
  RUN_TEST(test_rem_testcase4);
  RUN_TEST(test_rem_testcase5);

  /*POWER*/
  RUN_TEST(test_power);
  RUN_TEST(test_power_testcase2);
  RUN_TEST(test_power_testcase3);
  RUN_TEST(test_power_testcase4);
  RUN_TEST(test_power_testcase5);
     
     
     //####################################################################################################NEHA#################################################
     * All the test functions */ 
/*ADDITION*/
void test_add(void)
{
  TEST_ASSERT_EQUAL(30, add(10, 20));
}

void test_add_testcase2(void)
{
  TEST_ASSERT_EQUAL(-10, add(10, -20));
}

void test_add_testcase3(void)
{
  TEST_ASSERT_EQUAL(-20.5, add(-40.5, 20.0));
}

void test_add_testcase4(void)
{
  TEST_ASSERT_EQUAL(41.0, add(15.5, 25.5));
}
void test_add_testcase5(void)
{
  TEST_ASSERT_EQUAL(15000, add(7500, 7500));
}

/*SUBTRACTION*/
void test_subtract(void) 
{
  TEST_ASSERT_EQUAL(-3, subtract(0, 3));
}

void test_subtract_testcase2(void)
{
  TEST_ASSERT_EQUAL(2, subtract(5, 3));
}

void test_subtract_testcase3(void)
{
  TEST_ASSERT_EQUAL(7, subtract(10, 3));
}

void test_subtract_testcase4(void)
{
  TEST_ASSERT_EQUAL(-4, subtract(3, 7));
}

void test_subtract_testcase5(void)
{
  TEST_ASSERT_EQUAL(100, subtract(1000, 900));
}

/*MULTIPLICATION*/
void test_multiply(void) 
{
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
}

void test_multiply_testcase2(void)
{
  TEST_ASSERT_EQUAL(15, multiply(5, 3));
}

void test_multiply_testcase3(void)
{
  TEST_ASSERT_EQUAL(0, multiply(10, 0));
}

void test_multiply_testcase4(void)
{
  TEST_ASSERT_EQUAL(-30, multiply(6, -5));
}
void test_multiply_testcase5(void)
{
  TEST_ASSERT_EQUAL(10, multiply(2, 5));
}

/*DIVISION*/
void test_divide(void) 
{
  TEST_ASSERT_EQUAL(0, divide(1, 0));
}
void test_divide_testcase2(void)
{
  TEST_ASSERT_EQUAL(5, divide(10, 2));
}

void test_divide_testcase3(void)
{
  TEST_ASSERT_EQUAL(5, divide(5, 1));
}
void test_divide_testcase4(void)
{
  TEST_ASSERT_EQUAL(-6, divide(-30, 5));
}
void test_divide_testcase5(void)
{
  TEST_ASSERT_EQUAL(1, divide(2, 2));
}

/*PERCENTAGE*/
void test_percentage(void) 
{
  TEST_ASSERT_EQUAL(100, percentage(1, 1));
}

void test_percentage_testcase2(void)
{
  TEST_ASSERT_EQUAL (40, percentage(2,5));
}

void test_percentage_testcase3(void)
{
  TEST_ASSERT_EQUAL(20,  percentage(20, 100));
}
void test_percentage_testcase4(void)
{
  TEST_ASSERT_EQUAL(40, percentage(2, 5));
}

void test_percentage_testcase5(void)
{
  TEST_ASSERT_EQUAL(20, percentage(2, 10));
}

/*GCD*/
void test_gcd(void) 
{
  TEST_ASSERT_EQUAL(1, gcd(1, 2));
}

void test_gcd_testcase2(void)
{
  TEST_ASSERT_EQUAL (20, gcd(20, 40));
}

void test_gcd_testcase3(void)
{
  TEST_ASSERT_EQUAL (1, gcd(35, 64));
}

void test_gcd_testcase4(void)
{
  TEST_ASSERT_EQUAL (12, gcd(24, 36));
}

void test_gcd_testcase5(void)
{
  TEST_ASSERT_EQUAL(1, gcd(2, 5));
}

/*REMAINDER*/
void test_rem(void) 
{
  TEST_ASSERT_EQUAL(1, rem(1, 2));
}

void test_rem_testcase2(void)
{
  TEST_ASSERT_EQUAL (0, rem(45,5));
}

void test_rem_testcase3(void)
{
  TEST_ASSERT_EQUAL (2, rem(17,5));
}

void test_rem_testcase4(void)
{
  TEST_ASSERT_EQUAL (2, rem(18,4));
}

void test_rem_testcase5(void)
{
  TEST_ASSERT_EQUAL(1, rem(5, 4));
}

/*POWER*/
void test_power(void) 
{
  TEST_ASSERT_EQUAL (1, power(1, 2));
}

void test_power_testcase2(void)
{
  TEST_ASSERT_EQUAL (27, power(3,3));
}

void test_power_testcase3(void)
{
  TEST_ASSERT_EQUAL (1, power(3,0));
}

void test_power_testcase4(void)
{
  TEST_ASSERT_EQUAL (1, power(1,4));
}
void test_power_testcase5(void)
{
  TEST_ASSERT_EQUAL(25, power(5, 2));
}


     
     


return UNITY_END();
}
