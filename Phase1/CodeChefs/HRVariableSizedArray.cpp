    // Variable sized arrays
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {

        int n, q;
        cin >> n >> q;
        int num;
        vector<int> A[n];
        int k;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            for (int j = 0; j < k; j++)
            {
                cin >> num;
                A[i].push_back(num);
            }
        }
        int q1,q2;
        for (int i = 0; i < q; i++)
        {
            cin>>q1>>q2;
            int count=0;
            for(auto it=A[q1].begin();it!=A[q1].end();it++)
            {
                
                if(count==q2)
                {
                    cout<<*it<<endl;

                }
                count++;
            }
        }

        return 0;
    }