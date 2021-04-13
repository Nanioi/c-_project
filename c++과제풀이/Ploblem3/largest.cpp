//
// Created by 나연 on 20/04/2020.
//
#include <iostream>
#include "largest.h"
using namespace std;

largest::largest() {
    a=b=0;
}

void largest::input() {
    cin>>a>>b;
}

void largest::display() {
    if(a>b)
        cout<<"Largest :"<<a<<endl;
    else
        cout<<"Largest :"<<b<<endl;
}
