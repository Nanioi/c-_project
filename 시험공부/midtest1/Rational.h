//
// Created by 나연 on 27/04/2020.
//

#ifndef MIDTEST1_RATIONAL_H
#define MIDTEST1_RATIONAL_H
#include <iostream>
using namespace std;


class Rational {

public:
    int numerator,denominator;

    Rational();
    Rational(int x,int y);
    ~Rational();
    void Add(Rational x,Rational y);
    void Sub(Rational x,Rational y);
    void Mult(Rational x,Rational y);
    void Div(Rational x,Rational y);
    void Print(Rational x);
    bool compare(Rational x,Rational y);
    void trimRational(Rational &x);
};


#endif //MIDTEST1_RATIONAL_H
