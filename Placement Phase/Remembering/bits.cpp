#include <bits/stdc++.h>
using namespace std;

int main() {
 
  int x[5]={2,4,2,3,4};
  int c=x[0];
  cout<<(4^3)<<"xor";
  for(int i=1;i<5;i++)
  
  {
    c=c^x[i];
  }

  cout<<c;
  return 0;
}