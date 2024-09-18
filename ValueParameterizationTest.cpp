#include"StringCalculator.h"
#include <gtest/gtest.h>
#include <tuple>

class StringCalculatorFixture:public testing::Test{
protected:
string inpuy;
int expectedValue;
int actualValue;
};

class StringCalculatorParameterFixture:public StringCalculatorFixture,public testing::WithParamInterface<tuple<string,int>>{
};

//parameter Values

INSTANTIATE_TEST_SUITE_P(ValidStringCalculatorInputs,StringCalculatorParameterFixture,testing::Values(
make_tuple("",0);
make_tuple("0",0);
make_tuple("1",1);
make_tuple("-1,5",6);
make_tuple("55,10",0);
));

TEST_P(StringCalculatorParameterFixture,ParameterizedTest){
      input=std::get<0>(GetParam());
      expectedValue=std::get<1>(GetParam());
      actualValue=Add(input);
      ASSERT_EQ(actualValue,expectedValue);

};
