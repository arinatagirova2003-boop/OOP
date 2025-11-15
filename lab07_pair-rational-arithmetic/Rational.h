#pragma once
#include "Pair.h"
class Rational :
    public Pair
{
public:
    Rational();
    Rational(int, int);

    Rational operator+(const Rational&);
    Rational operator/ (const Rational&);
    Rational operator- (const Rational&);
};

