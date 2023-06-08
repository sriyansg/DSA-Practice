#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> n;
    n.assign(9, 1); // 9 vaues filled with 1
    cout << "The content are:";
    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i] << " ";
        cout << endl;
    }
    n.push_back(2);
    int no = n.size();
    cout << "last element:" << n[no - 1] << endl;
    n.pop_back();
    cout << "now the contents are: ";
    for (int a = 0; a < n.size(); a++)
    {
        cout<<n[a]<<" ";
        cout<<endl;
    }
    n.insert(n.begin(),7);
    cout<<"First Element is: "<<n[0]<<endl;

    
    return 0;
}