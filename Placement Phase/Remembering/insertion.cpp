#include <bits/stdc++.h>
using namespace std;

int main() {
 
  int n=5;
  int arr[5]={3,6,1,8,5};
  int key,j;
  for(int i=0;i<n;i++)
  {
    key=arr[i];
    j=i-1;
    {
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];  
            j=j-1;
        }
        arr[j+1]=key;
    }
  }
  for(int x=0;x<n;x++)
  {
    cout<<arr[x]<<" ";
  }

  return 0;
}