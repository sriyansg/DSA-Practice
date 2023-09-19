#include <bits/stdc++.h>
using namespace std;
// Maximum subarray
int main()
{
  int arr[] = {3, 1, 6, 2, -3, 4};
  int len = sizeof(arr) / sizeof(arr[0]);
  int max_sofar=INT_MIN;
  int max_ending=0;
  for (int i = 0; i < len; i++)
  {
    max_ending=max_ending+arr[0];
    if(max_sofar<max_ending)
    {
      max_sofar=max_ending;
    } 
    if(max_ending<0)
    {
      max_ending=0;
    }
  }
  cout<<max_sofar;
  return 0;
}