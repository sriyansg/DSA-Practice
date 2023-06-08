// 1009. Complement of Base 10 Integer

// The complement of an integer is the integer you get
// when you flip all the 0's to 1's and all the 1's to 0's
// in its binary representation.

// For example, The integer 5 is "101" in binary and its
//  complement is "010" which is the integer 2.
// Given an integer n, return its complement.

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int bitwiseComplement(int n)
    {
        int x = n;
        int mask = 0;

        while (x != 0)
        {
            mask = (mask << 1) | 1;
            x = x >> 1;
        }
        int ans = (~n) & mask;
        return ans;
    }
     
};
