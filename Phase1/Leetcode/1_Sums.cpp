#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int nums[]={2,7,11,15};
    int target=9;
    int n=sizeof(nums)/sizeof(nums[0]);
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                cout<<i<<" "<<j;
                break;
            }
        }
    }

  return 0;
}