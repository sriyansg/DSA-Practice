#include <bits/stdc++.h>
using namespace std;

int main() {
 
  int n=5;
  int arr[5]={3,6,3,8,6};
  
  for(int i=0;i<n;i++)
  {
    int min=arr[i];
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]>arr[j])
        {
            swap(arr[i],arr[j]);
        }
    }
  }
  for(int x=0;x<n;x++)
  {
    cout<<arr[x]<<" ";
  }

  return 0;
}