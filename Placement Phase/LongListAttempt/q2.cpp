#include <bits/stdc++.h>
using namespace std;
// Reverse an array
int main() {
    
    int n;
    cin>>n;
    int arr[n];
    int j;
    for (int i = 0; i<n; i++)
    {
        cin>>j;
        arr[i]=j;
    }
    cout<<"Array normally:"<<endl;
    for (int i = n; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    int half=n/2;
    int temp;
    for(int i =0;i<half;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    cout<<"Array revved:"<<endl;
    for (int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    


  return 0;
}