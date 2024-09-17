#include "StringCalculator.h"
#include <gtest/gtest.h>

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

TEST(StringCalculatorTestSuite,add_when_passed_two_comma_delimed_numbers_Sum_Is_Expected){
  string input="2,5";
  int expectedValue = 7;
  int actualValue = Add(input);
  ASSERT_EQ(actualValue,expectedValue);
}
