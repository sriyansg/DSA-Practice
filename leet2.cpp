#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int check=n;
    int x=0;
    int count=0;
    while(n>0)
    {   
        x=x*10+(n%10);
        n=n/10;
    }
    if(n==check)
    {
        return true;
    }
    else{
        return false;
    }
    
    return 0;
}