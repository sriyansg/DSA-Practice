#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    char ch;
    cin>>ch;
    if(ch>='a'&&ch<='z')
    {
        cout<<"lower case alpha";
    }
    else if(ch>='A'&&ch<='Z')
    {
        cout<<"Upper case alpha";
    }
    else {
        cout<<"Is a Number or a Symbol";
    }
 
    return 0;
}