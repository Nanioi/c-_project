//
// Created by 나연 on 03/04/2020.
//

#include "upper.h"

int upper::changeC(char c) {
    int r;

    r=(int)(c-'A');
    return r;
}

void upper::print(int x, int y){
    if(x<y)
    {
        for(int i=x;i<=y;i++)
            cout<<(char)(i+'A');
    } else
        for(int i=x;i>=y;i--)
            cout<<(char)(i+'A');
}
