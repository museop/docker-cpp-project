#include <gtest/gtest.h>
#include "fibonacci.h"

TEST(test_module2, test_fibonacci)
{
    const long long expected[] = {
        0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610,
        987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025,
        121393, 196418, 317811, 514229, 832040};

    int size = sizeof(expected) / sizeof(expected[0]);
    for (int i = 0; i < size; i++)
    {
        EXPECT_EQ(expected[i], fibonacci(i));
    }
}