#include <gtest/gtest.h>
#include "fibonacci_generator.hpp"

using namespace module1;

class FibonacciGeneratorTest : public ::testing::Test
{
protected:
    // You can remove any or all of the following functions if their bodies would
    // be empty.

    FibonacciGeneratorTest()
    {
        // You can do set-up work for each test here.
    }

    ~FibonacciGeneratorTest() override
    {
        // You can do clean-up work that doesn't throw exceptions here.
    }

    // If the constructor and destructor are not enough for setting up
    // and cleaning up each test, you can define the following methods:

    void SetUp() override
    {
        // Code here will be called immediately after the constructor (right
        // before each test).
    }

    void TearDown() override
    {
        // Code here will be called immediately after each test (right
        // before the destructor).
    }

    FibonacciGenerator mGenerator;
};

// Tests that the FibonacciGenerator::next() method does Abc.
TEST_F(FibonacciGeneratorTest, test_next)
{
    const long long expected[] = {
        0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610,
        987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025,
        121393, 196418, 317811, 514229, 832040};

    int size = sizeof(expected) / sizeof(expected[0]);
    for (int i = 0; i < size; i++)
    {
        std::pair<int, long long> result = mGenerator.next();
        EXPECT_EQ(i, result.first);
        EXPECT_EQ(expected[i], result.second);
    }
}