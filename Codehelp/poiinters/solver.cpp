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
        for(int i=0;i<n;i++)
        {
           cin>>arr[i];
        }
        int ele=arr[0];
        for(int i=1;i<n;i++)
        {
            ele=ele^arr[i];
        }
        cout<<ele;
        t--;
    }
 
    return 0;
}