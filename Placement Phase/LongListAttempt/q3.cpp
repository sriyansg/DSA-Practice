#include <bits/stdc++.h>
using namespace std;
// longest subsequence sum
int longsubsc(int arr[],int size)
{
  int maxsofar=INT_MIN, maxending=0;
  for(int i=0;i<size;i++)
  {
    maxending=maxending+arr[i];
    if(maxsofar<maxending)
    {
      maxsofar=maxending;
    }
    if(maxending<0)
    {
      maxending=0;
    }
  }
  return maxsofar;
}
int main() {
 
  int arr[]={3,2,-3,1,2,-5,8,-2,-6,4,3};
  int len=sizeof(arr)/sizeof(arr[0]);
  cout<<longsubsc(arr,len);
  return 0;
}