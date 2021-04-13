//
// Created by 나연 on 20/04/2020.
//
#include <iostream>
#include "student.h"
using namespace std;


student::student() {
}

void student::getdata() {
    cout<<"Name : ";
    cin>>last_name;
    cout<<"ID : ";
    cin>>id;
}

void student::putdata() {
    cout<<"Name : "<<last_name<<endl;
    cout<<"Student ID : "<<id<<endl;

}
