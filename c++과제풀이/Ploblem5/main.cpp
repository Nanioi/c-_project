#include <iostream>
using namespace std;
#include "student.h"

int main() {
    student S[5];

    for(int i=0;i<5;i++)
    {
        cout<<"student : "<<i+1<<endl;
        S[i].getdata();
    }
    for(int i=0;i<5;i++)
    {
        cout<<"Student : "<<i+1<<endl;
        S[i].putdata();
    }
}
