#include <iostream>
using namespace std;

int main()
{
    int sum=0,n,cnt=0;

    while(1){
        cin>>n;

        if(n<=0)
            break;

        sum+=n;
        cnt++;
    }
    cout<<sum<<" ";
    cout << fixed;
    cout.precision(2);
    cout <<sum/(double)cnt<<" ";
    cout<<cnt<<" ";
}
