#include <iostream>
#include "fibonacci_generator.hpp"
#include "fibonacci.h"

int main(int argc, char *argv[])
{
    // module1
    module1::FibonacciGenerator generator;
    for (int i = 0; i < 20; i++) {
        std::pair<int, long long> result = generator.next();
        std::cout << result.first << "th fibonacci number is " << result.second << " (from FibonacciGenerator class)\n";
    }
    std::cout << "\n";

    // module2
    for (int i = 0; i < 20; i++) {
        std::cout << i << "th fibonacci number is " << fibonacci(i) << " (from fibonacci function)\n";
    }

    return 0;
}