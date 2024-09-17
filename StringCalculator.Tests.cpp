#include "StringCalculator.h"
#include <gtest/gtest.h>

class StringCalculationFixture:public testing::Test{
protected,
  string input;
  int expectedValue;
  //ACT
  int actualValue;
};

TEST_F(StringCalculationFixture,add_emptyInputString_ZeroIsExpected){
  input= "0";
  expectedValue = 0;
  //ACT
  actualValue = Add(input);
  //Assert
  ASSERT_EQ(actualValue, expectedValue);
  
}

TEST(StringCalculatorTestSuite,add_emptyInputString_ZeroIsExpected)
{
  //Arrange
  string input="";
  int expectedValue = 0;
  //ACT
  int actualValue = Add(input);
  //Assert
  ASSERT_EQ(actualValue, expectedValue);
  
}
TEST(StringCalculatorTestSuite,add_ZeroInputString_ZeroIsExpected)
{
  //Arrange
  string input= "0";
  int expectedValue = 0;
  //ACT
  int actualValue = Add(input);
  //Assert
  ASSERT_EQ(actualValue, expectedValue);
  
}

TEST(StringCalculatorTestSuite,add_1InputString_1IsExpected){

  string input="1";
  int expectedValue=1;
  int actualValue =Add(input);
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_input_passed_two_comma_delimed_numbers_Sum_Is_Expected){
  string input="2,5";
  int expectedValue = 7;
  int actualValue = Add(input);
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_input_passed_delimited_with_newline_and_comma_Sum_Is_Expected){
  string input="10,\n2,5";
  int expectedValue = 17;
  int actualValue = Add(input);
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuitec,add_input_passed_negative_numbers_exception_invalid_Arguments){
  string input="1,-1,-7";
  ASSERT_THROW(Add(input),invalid_argument);
}

TEST(StringCalculatorTestSuitec,add_input_passed_numbers_over_1_Is_Expected){
  string input="1,1200";
  int expectedValue = 1;
  int actualValue = Add(input);
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuitec,add_input_passed_multiple_delimiters_Sum_Is_Expected){
  string input="//%$1,%%10,%%%%,20,\n80,90";
  int expectedValue = 201;
  int actualValue = Add(input);
  ASSERT_EQ(actualValue,expectedValue);
}
