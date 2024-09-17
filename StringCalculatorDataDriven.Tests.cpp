#include "StringCalculator.h"
#include <gtest/gtest.h>
#include <vector>
#include <string>

using namespace std;

// Assuming the Add function is defined somewhere
int Add(const string& input);

class TestDataPair {
public:
    string input;
    int expectedValue;
    TestDataPair(string _input, int _expectedValue) : input{_input}, expectedValue{_expectedValue} {}
};

class StringCalculatorTestFixture : public ::testing::Test {
protected:
    vector<TestDataPair> dataList;

    void SetUp() override {
        dataList.push_back(TestDataPair("", 0));
        dataList.push_back(TestDataPair("0", 0));
        dataList.push_back(TestDataPair("1", 1));
        dataList.push_back(TestDataPair("1,2", 3));
        dataList.push_back(TestDataPair("1,2,3", 6));
    }
};

TEST_F(StringCalculatorTestFixture, DataDrivenTestCase) {
    for (const TestDataPair& dataPair : dataList) {
        int actualValue = Add(dataPair.input);
        ASSERT_EQ(actualValue, dataPair.expectedValue);
    }
}
