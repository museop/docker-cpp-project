#pragma once

#include <string>

namespace module1 {

class FibonacciGenerator 
{
public:
    FibonacciGenerator() : count(0), fn(0), fn1(1) {}
    virtual ~FibonacciGenerator() {}

    std::pair<int, long long> next();

private:
    int count;
    long long fn;
    long long fn1;
};


}; // namespace module1
