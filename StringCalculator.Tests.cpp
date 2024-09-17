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
