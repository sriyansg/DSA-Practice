#include <bits/stdc++.h>
using namespace std;
// https://media.geeksforgeeks.org/wp-content/uploads/20230131123800/pyramid_pattern_in_cpp.png
int main()
{
    int t;
    cin >> t;
    switch (t)
    {
    case 1:
        for (int i = 0; i <= 5; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*"
                     << " ";
            }
            cout << endl;
        }
        break;
    case 2:
        for (int i = 1; i <= 5; i++)
        {
            for (int k = i; k < 5; k++)
            {
                cout << "  ";
            }
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
        break;

    case 3:
        for (int i=5;i<1;i++)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
        break;
    case 4:
        
        break;
    case 5:

        break;
    case 6:

        break;
    case 7:

        break;
    case 8:

        break;
    case 9:

        break;
    case 10:

        break;
    case 11:

        break;
    case 12:

        break;

    default:
        break;
    }
    return 0;
}