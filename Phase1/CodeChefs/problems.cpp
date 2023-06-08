
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int m, n;
    cin >> t;
    while (t > 0)
    {
        cin >> m >> n;
        if(m==n)
        {
            cout<<"YES"<<endl;
        }
        else if ((m - 1) == (n + 1) || (n-1)==(m+3))
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
            t--;
    }

    return 0;
}