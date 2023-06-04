// This question finds the number of binary digits a number has

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int x;
    cin >> x;
    int count=0;
    while(x!=0)
    { 
        x=x>>1;
        count++;
    }
    cout<<count;


    return 0;
}