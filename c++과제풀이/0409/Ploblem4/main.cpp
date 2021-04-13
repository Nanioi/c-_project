#include <iostream>
using namespace std;

int threeCnt(int n){
    int ccnt=0;

    while(n>0){
        if(n%10==3)
            ccnt++;
        n/=10;
    }
    return ccnt;
}
int main() {

    int n,cnt=0;

    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cnt+=threeCnt(i);
    }
    cout<<cnt;
}
