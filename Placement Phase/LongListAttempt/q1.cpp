#include <bits/stdc++.h>
using namespace std;
// min and max in an array
int main() {
 
    int arr[]={4,1,5,7,8,9};
    int len=sizeof(arr)/sizeof(arr[0]);
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<len;i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"Max"<<max<<"Min"<<min;
    

    
  

  return 0;
}