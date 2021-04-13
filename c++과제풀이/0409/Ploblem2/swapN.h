//
// Created by 나연 on 04/04/2020.
//
#include <iostream>
#ifndef PLOBLEM2_SWAPN_H
#define PLOBLEM2_SWAPN_H
using namespace std;

class swapN {

public:
    int n[10];

    swapN(int *n){
        for(int i=0;i<10;i++)
            n[i]=(i+1)%10;
    };
    void swap(int *n);
};


#endif //PLOBLEM2_SWAPN_H
