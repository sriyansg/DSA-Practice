#include <bits/stdc++.h>
using namespace std;

int main()
{
  int num=5;  
  int *ptr=&num;
  cout<<&num<<endl; // Address 0x61ff04
  cout<<ptr<<endl;  // Address 0x61ff04
  cout<<*ptr<<endl; // 5

  // (ptr)++;

  // cout<<ptr;

  int q=*ptr;
  cout<<q; // 5
  cout<<++(*ptr);


  return 0;
}