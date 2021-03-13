#include "unity.h"
#include "main.h"

void setUp(){}

void tearDown(){}

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
     


return UNITY_END();
}