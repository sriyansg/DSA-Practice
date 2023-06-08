#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Reversing an array
    int n;
    cout << "No of elements" << endl;
    int c;
    cin >> n;
    int arr[n];

    //Input
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        arr[i] = c;
    }

    //Cooodddin
    int temp;
    int x =n/2;
    n = n - 1;
    for (int i = 0; i < x; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i];
        arr[n - i] = temp;
    }

    //Printing
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}