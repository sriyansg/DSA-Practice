#include <bits/stdc++.h>
using namespace std;

int main()
{
    string f;
    cin>>f;
    string c=f;
    int x=f.length();
    bool ez=false;
    for(int i=0;i<x;i++)
    {
        if(f[i]==c[x-i])
        {
            ez=true;
        }
    }
    cout<<ez;
    return 0;
}