#include <iostream>
#include "my_header.h"

int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}

int main() {
    std::cout << "Hello, C++ project on remote Linux!" << std::endl;
    int a = 1;
    int b = 2;

    int sum = a+b;
    int sum2 = add(a, b);
    int diff = subtract(a, b);
    std::cout << "Sum of " << a << " and " << b << " is: " << sum << std::endl;
    return 0;
}

int multiply(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0; // or handle the error as needed
    }
}
int modulus(int a, int b) {
    return a % b;
}
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}
int factorial(int n) {
    if (n < 0) {
        std::cerr << "Error: Factorial of a negative number!" << std::endl;
        return -1; // or handle the error as needed
    }
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}
int fibonacci(int n) {
    if (n < 0) {
        std::cerr << "Error: Fibonacci of a negative number!" << std::endl;
        return -1; // or handle the error as needed
    }
    if (n == 0) return 0;
    if (n == 1) return 1;
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int lcm(int a, int b) {
    if (a == 0 || b == 0) return 0;
    return (a / gcd(a, b)) * b;
}
int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int square(int n) {
    return n * n;
}
int cube(int n) {
    return n * n * n;
}
// int square_root(int n) {
//     if (n < 0) {
//         std::cerr << "Error: Square root of a negative number!" << std::endl;
//         return -1; // or handle the error as needed
//     }
//     return static_cast<int>(sqrt(n));
// }