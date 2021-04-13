//
// Created by 나연 on 20/04/2020.
//
#include <iostream>
using namespace std;
#ifndef PLOBLEM4_STUDENT_H
#define PLOBLEM4_STUDENT_H

class Student {
    string name;
    int id;
    float score1,score2,score3;
    float avg;
public:
    void get_details();
    void put_details();
    float scoreAvg();
};


#endif //PLOBLEM4_STUDENT_H
