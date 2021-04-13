#include <iostream>
using namespace std;

int main()
{
    int n[10],tmp,cnt=0;
    for(int i=0;i<10;i++)
    {
        n[i]=(i+1)%10;
    }

    while(1)
    {
        for(int i=0;i<10;i++)
        {
            cout<<n[i]<<" ";
        }
        cout<<"\n";

        for(int i=0;i<9;i++)
        {
            tmp=n[i];
            n[i]=n[i+1];
            n[i+1]=tmp;
        }
        cnt++;
        if(cnt==10)
            break;

    }
}