#include <iostream>
using namespace std;

int numm(int n){
    int ssum=0;

    while(n>0){
        ssum+=n%10;
        n/=10;
    }
    return ssum;
}
int main() {
    int n;
    cin>>n;

    while(1)
    {
        if(n<10)
            break;
        n=numm(n);
    }
    cout<<n;


}
