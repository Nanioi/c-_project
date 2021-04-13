#include <iostream>
#include "upper.h"
#include "lower.h"
using namespace std;

int main() {
    char c[2];
    int a,b;
    upper *u=new upper;
    lower *l=new lower;

    cin.getline(c,2);

    if(c[0]>='A'&& c[0]<='Z')
    {
        a=u->changeC(c[0]);
        b=u->changeC(c[1]);
        u->print(a,b);
    } else{
        a=l->changeC(c[0]);
        b=l->changeC(c[1]);
        l->print(a,b);
    }
}
