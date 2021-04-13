//
// Created by 나연 on 20/04/2020.
//

#include "input.h"

input::input() {
    cin>>x>>y;
}
void input::largest() {
    if(x>y)
        cout<<"Largest : "<<x<<endl;
    else
        cout<<"Largest : "<<y<<endl;
}
