#include <iostream>
using namespace std;

int main() {
    char c[2];
    int i,start,end;

    cin>>c;
    start=(int)c[0];
    end=(int)c[1];
    if(start>end){
        for(i=start;i>=end;i--)
        {
            cout<<(char)i;
        }
    } else
    {
        for(i=start;i<=end;i++)
            cout<<(char)i;
    }
}
