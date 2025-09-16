#include "fraction.h"
#include <iostream>

/**
 * @brief Finds the greatest common divisor (GCD) of two integers
 * @param a First integer
 * @param b Second integer
 * @return GCD of a and b
 */
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

Fraction add(Fraction a, Fraction b) {
    Fraction result;
    result.num = (a.num * b.den) + (b.num * a.den);
    result.den = a.den * b.den;
    simplify(result);
    return result;
}

Fraction multiply(Fraction a, Fraction b) {
    Fraction result;
    result.num = a.num * b.num;
    result.den = a.den * b.den;
    simplify(result);
    return result;
}

void simplify(Fraction &f) {
    int gcd = findGCD(f.num, f.den);
    f.num /= gcd;
    f.den /= gcd;
}
