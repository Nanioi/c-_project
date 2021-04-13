//
// Created by 나연 on 20/04/2020.
//
#include <iostream>
using namespace std;
#include "Student.h"
Student::Student() {
}
Student::~Student() {
}
void Student::getdata() {
    cout<<"name : ";
    cin>>name;
    cout<<"id : ";
    cin>>id;
}
void Student::putdata() {
    cout<<"name : "<<name<<endl;
    cout<<"id : "<<id<<endl;
}


