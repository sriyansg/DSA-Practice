#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x;
    cin>>x;
    int c=0;
    int a;
    while(x>0)
    {
        a=x%10; 
        c=(c*10)+a;
        x=x/10;
    }
    cout<<c;

    return 0;
}