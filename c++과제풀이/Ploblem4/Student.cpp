//
// Created by 나연 on 20/04/2020.
//
#include <iostream>
#include "Student.h"
using namespace std;

void Student::get_details() {
    cout<<"name :";
    cin>>name;
    cout<<"id :";
    cin>>id;
    cout<<"score1 : ";
    cin>>score1;
    cout<<"score2 : ";
    cin>>score2;
    cout<<"score3 : ";
    cin>>score3;
}

void Student::put_details() {
    cout<<"name : "<<name<<endl;
    cout<<"id : "<<id<<endl;
    cout<<"score1 : "<<score1<<endl;
    cout<<"score2 : "<<score2<<endl;
    cout<<"score3 : "<<score3<<endl;
    cout<<"avg : "<<scoreAvg()<<endl;
}

float Student::scoreAvg() {
    float sum=0;
    sum=score1+score2+score3;
    sum/=3.0;
    return sum;
}
