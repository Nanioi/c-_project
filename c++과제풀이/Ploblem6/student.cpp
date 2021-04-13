//
// Created by 나연 on 20/04/2020.
//
#include "student.h"

student::student() {
    first_name ="first_name_NA";
    last_name="last_name_NA";
    age=0;
    GPA=0;
}

void student::get() {
    cout<<"first_name : ";
    cin>>first_name;
    cout<<"last_name : ";
    cin>>last_name;
    cout<<"age : ";
    cin>>age;
    cout<<"GPA : ";
    cin>>GPA;
}

void student::put() {
    cout<<"first_name : "<<first_name<<endl;
    cout<<"last_name : "<<last_name<<endl;
    cout<<"age : "<<age<<endl;
    cout<<"GPA : "<<GPA<<endl;
}
