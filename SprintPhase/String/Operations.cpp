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

  // Lenght of string
  cout<<"5"<<endl;
  s="lengtho of tisafa";
  cout<<s.length()<<endl;

  // begin() This function returns an "iterator" to the beginning of the string.
  // end() For end of string

  // Swapping Strings
  cout<<"6"<<endl;
  s="Hello";
  string s2="Kall";
  swap(s,s2);
  cout<<s<<endl;
  // OP: kall

  // Concat
  cout<<"7"<<endl;
  char ch[20]="Helo";
  char th[20]="mello";
  strcat(ch,th);
  cout<<ch<<endl;


  





  return 0;
}