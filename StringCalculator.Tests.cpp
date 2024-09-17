#include"StringCalculator.h"
#include <gtest/gtest.h>

TEST(StringCalculatorTestSuite,add_emptyInputString_ZeroIsExpected){
  //Arrange
  String input="";
  int expectedValue=0;
  //ACt
  int actualValue =add(input);
  //Assertion
  ASSERT_EQ(actualValue,expectedValue);
  
}
