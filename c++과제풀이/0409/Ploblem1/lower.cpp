//
// Created by 나연 on 03/04/2020.
//

#include "lower.h"

int lower::changeC(char c) {
    int r;

    r=(int)(c-'a');
    return r;
}
void lower::print(int x, int y){
    if(x<y)
    {
        for(int i=x;i<=y;i++)
            cout<<(char)(i+'a');
    } else
        for(int i=x;i>=y;i--)
            cout<<(char)(i+'a');
}
