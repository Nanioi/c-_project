#include <iostream>
#include "Rational.h"
using namespace std;

int main() {
    Rational A,C;
    float r;
    int x,y;
    bool b;

    cout<<"numerator :";
    cin>>x;
    cout<<"denominator : ";
    cin>>y;
    Rational B(x,y);
    cout<<A.numerator<<" / "<<A.denominator <<endl;
    cout<<B.numerator<<" / "<<B.denominator <<endl;


    C.Add(A,B);
    C.Print(C);
    C.Sub(A,B);
    C.Print(C);
    C.Mult(A,B);
    C.Print(C);
    C.Div(A,B);
    C.Print(C);
}
