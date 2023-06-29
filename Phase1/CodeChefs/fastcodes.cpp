#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin>>n;
        int arr[n];
        int great=INT_MAX;
        int nos;
        int count=0;
        for(int i=0;i<n;i++)
        {
            cin>>nos;
            if(nos<great)
            {
                great=nos;
            }
            count=count+nos;
        }
        if(count!=0)
        {
            count=count-great;
            cout<<count<<endl;
        }
        else{
            cout<<count<<endl;
        }

        t--;
    }
 
    return 0;
}