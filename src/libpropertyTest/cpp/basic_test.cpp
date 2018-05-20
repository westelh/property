#include "gtest/gtest.h"
#include "property.hpp"

namespace {
    constexpr int initialNumber = 1923;
}

class BasicTest : public ::testing::Test {
protected:
    BasicTest(): prop{initialNumber} { 

    }

    elh::property<int> prop;
};

TEST_F(BasicTest, init) {
    ASSERT_EQ(prop, initialNumber);
}

TEST_F(BasicTest, assign_rvalue) {
    prop = 100;
    ASSERT_EQ(prop, 100);
}

TEST_F(BasicTest, assign_lvalue) {
    auto v = 200;
    prop = v;
    ASSERT_EQ(prop, v);
}