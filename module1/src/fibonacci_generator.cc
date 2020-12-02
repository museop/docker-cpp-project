#include "fibonacci_generator.hpp"

namespace module1
{

std::pair<int, long long> FibonacciGenerator::next()
{
    std::pair<int, long long> ret = {count, fn};
    long long tmp = fn + fn1;
    fn = fn1;
    fn1 = tmp;
    count++;

    return ret;
}

}; // namespace module1