//
// Created by 나연 on 20/04/2020.
//

#ifndef PLOBLEM6_STUDENT_H
#define PLOBLEM6_STUDENT_H
#include <iostream>
using namespace std;

class student {
    string first_name;
    string last_name;
    int age;
    float GPA;
public:
    student();
    void get();
    void put();
};


#endif //PLOBLEM6_STUDENT_H
