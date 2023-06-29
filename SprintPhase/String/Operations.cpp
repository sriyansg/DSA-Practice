#include <bits/stdc++.h>
using namespace std;

int main()
{

  // Sorting a string
  cout << "1" << endl;
  string s = "hello";
  sort(s.begin(), s.end());
  cout << s << endl;

  // Reverse a string
  cout << "2" << endl;
  reverse(s.begin(), s.end());
  cout << s << endl;

  // Adding at end
  cout << "3" << endl;
  s = "hello";
  s.push_back('c');
  cout << s<<endl;

  //Removing from end
  s="goodbye";
  cout<<"4"<<endl;
  s.pop_back();
  cout<<s<<endl;

  



  return 0;
}