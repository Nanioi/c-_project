//
// Created by 나연 on 27/04/2020.
//
#include <iostream>
#include "Rational.h"
using namespace std;


Rational::Rational() {
    numerator=1;
    denominator=3;
}

Rational::Rational(int x, int y) {
    numerator=x;
    denominator=y;
}


Rational::~Rational() {

}

void Rational::Add(Rational x, Rational y) {
    Rational z;
    z.denominator=x.denominator*y.denominator;
    z.numerator=y.denominator*x.numerator+x.denominator*y.numerator;
    cout<<x.numerator<<"/"<< x.denominator <<"+";
    cout<<y.numerator<<"/"<<y.denominator<<"=";
    cout<<z.numerator<<" / "<<z.denominator <<endl;
}
void Rational::Sub(Rational x, Rational y) {
    Rational z;
    z.denominator = x.denominator * y.denominator;
    z.numerator = y.denominator * x.numerator - x.denominator * y.numerator;
    cout << x.numerator << "/" << x.denominator << "+";
    cout << y.numerator << "/" << y.denominator << "=";
    cout << z.numerator << " / " << z.denominator << endl;
}
void Rational::Mult(Rational x, Rational y) {
    Rational z;
    z.denominator=x.denominator*y.denominator;
    z.numerator=x.numerator*y.numerator;
    cout<<x.numerator<<"/"<< x.denominator <<"+";
    cout<<y.numerator<<"/"<<y.denominator<<"=";
    cout<<z.numerator<<" / "<<z.denominator <<endl;

}
void Rational::Div(Rational x, Rational y) {
    Rational z;
    z.denominator=x.denominator*y.numerator;
    z.numerator=x.numerator*y.denominator;
    cout<<x.numerator<<"/"<< x.denominator <<"+";
    cout<<y.numerator<<"/"<<y.denominator<<"=";
    cout<<z.numerator<<" / "<<z.denominator <<endl;

}

void Rational::Print(Rational x){
    float r1;
    r1=x.numerator/x.denominator;
    cout<<x.numerator<<" / "<<x.denominator <<" = "<<r1;

}

bool Rational::compare(Rational x, Rational y) {
    if(y.denominator*x.numerator-x.denominator*y.numerator>0)
        return 1;
    else
        return 0;
}

void Rational::trimRational(Rational &x) {
    int down=x.numerator,up=x.denominator ,com;
    if(x.numerator>x.denominator){
        down=x.denominator;
        up=x.numerator;
    }
    for(int i=1;i<=down;i++){
        if((down%i)==0&&(up%i)==0)
            com=i;
    }
    x.numerator/=com;
    x.denominator/=com;
}




