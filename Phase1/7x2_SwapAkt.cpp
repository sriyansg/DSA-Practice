// INP: {1,2,3,4,5,6}
// OP : {2,1,4,3,6,5}
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int temp;
    for(int i=0;i<n;i=i+2)
    {
        temp=arr[i+1];
        arr[i+1]=arr[i];
        arr[i]=temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}