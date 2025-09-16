#ifndef FRACTION_H
#define FRACTION_H

/**
 * @file fraction.h
 * @brief Header file for the Fraction library
 * @details This file contains the definition of the Fraction structure
 * and declarations of functions for fraction arithmetic.
 */

/**
 * @brief Represents a fraction with numerator and denominator
 */
struct Fraction {
    int num; ///< numerator of the fraction
    int den; ///< denominator of the fraction
};

/**
 * @brief Adds two fractions
 * @param a First fraction to add
 * @param b Second fraction to add
 * @return Result of addition as a new fraction
 */
Fraction add(Fraction a, Fraction b);

/**
 * @brief Multiplies two fractions
 * @param a First fraction to multiply
 * @param b Second fraction to multiply
 * @return Result of multiplication as a new fraction
 */
Fraction multiply(Fraction a, Fraction b);

/**
 * @brief Simplifies a fraction by dividing numerator and denominator by their GCD
 * @param f Fraction to simplify (passed by reference)
 */
void simplify(Fraction &f);

#endif
