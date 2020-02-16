//
// Created by Jan Mouwes on 06/02/2020.
//

#include "lecture1.h"

// Impure function, simplifies fractions
void simplifyFraction(int* numerator, int* denominator) {
    int divisor = calcGCD(*numerator, *denominator);

    *numerator = *numerator/divisor;
    *denominator = *denominator/divisor;
}