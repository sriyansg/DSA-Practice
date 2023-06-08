#include <bits/stdc++.h>
using namespace std;

int main()
{

    //   vector<int>num;
    //   for(int i=1;i<=5;i++)
    //   {
    //     num.push_back(i);
    //   }
    //   cout<<"output from the begging to the end"<<endl;
    //   for(auto a=num.begin();a!=num.end();a++)
    //   {
    //     cout<<*a<<" ";
    //   }
    int c;
    int num;
    vector<int> A[2];
    for (int i = 0; i < 2; i++)
    {
        cout << "enter no of vector element in this array";
        cin >> c;
        for (int j = 0; j < c; j++)
        {
            cout << "Enter element" << j + 1 << endl;
            cin >> num;
            A[i].push_back(num);
        }
    }
    for (int i = 0; i < 2; i++)
    {

        cout << "Elements at index "<< i << ": ";

        // Displaying element at each column,
        // begin() is the starting iterator,
        // end() is the ending iterator
        for (auto it = A[i].begin(); it != A[i].end(); it++)

        {

            // (*it) is used to get the
            // value at iterator is
            // pointing
            cout << *it << ' ';
        }
        cout << endl;
    }

    return 0;
}