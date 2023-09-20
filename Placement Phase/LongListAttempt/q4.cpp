// Given an array of N integers where each value represents
// the number of chocolates in a packet. Each packet can
// have a variable number of chocolates. There are m students,
// the task is to distribute chocolate packets such that: 

// Each student gets one packet.
// The difference between the number of chocolates in the packet
// with maximum chocolates and the packet with minimum chocolates
// given to the students is minimum.

#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int arr[] = {3, 4, 1, 9, 56, 7, 9, 12} , m = 5; 

    int len=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+len);
    for (int i = 0; i < len; i++)//printing sorted
    {
        cout<<arr[i]<<" ";
    }
    int min=INT_MAX;
    int curmin=0;
    for(int i=0;i<=len-m;i++)
    {
        curmin=arr[m+i-1]-arr[i];
        if(curmin<min)
        {
            min=curmin;
        }
    }
    cout<<"the min is "<< min;
  return 0;
}
    