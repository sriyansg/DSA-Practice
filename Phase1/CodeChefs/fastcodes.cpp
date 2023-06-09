#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int a,b,c;
        int a2,b2,c2;
        int s1=0;
        int s2=0;
        cin>>a>>b>>c>>a2>>b2>>c2;
        if(a>a2)
        {
            s1++;
        }else{
            s2++;
        }
        if(b>b2){
            s1++;
        }
        else{
            s2++;
        }
        if(c>c2){
            s1++;
        }
        else{
            s2++;
        }
        if(s1>s2){
            cout<<"A"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }


        t--;
    }
 
    return 0;
}