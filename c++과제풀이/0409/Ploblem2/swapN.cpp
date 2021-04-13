//
// Created by 나연 on 04/04/2020.
//

#include "swapN.h"

void swap(int *n) {
    int tmp;

    for (int i = 0; i < 9; i++) {
        tmp = n[i];
        n[i] = n[i + 1];
        n[i + 1] = tmp;
    }
}