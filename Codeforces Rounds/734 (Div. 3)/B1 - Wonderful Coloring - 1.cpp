#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin >> T;

    while(T--)
    {
        string S; cin >> S;
        unordered_map<char, int> mp;

        int L = S.length();

        unordered_map<char, int> :: iterator itr;

        for(int i=0; i<L; i++)
        {
            if(mp.find(S[i]) != mp.end()) // exists
                mp[S[i]] += 1;
            else
                mp[S[i]] = 1;
        }

        int ans = 0;
        int c = 0;
        
        for(itr = mp.begin(); itr != mp.end(); itr++)
        {
            if(itr->second >= 2)
                ans += 1;
            else
                c += 1; 
        }

        ans = ans + c/2;

        cout << ans << "\n";

    }

    return 0;
}
