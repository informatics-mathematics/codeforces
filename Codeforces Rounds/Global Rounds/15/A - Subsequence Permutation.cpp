#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin >> T;

    while(T--)
    {
        int L; cin >> L;
        string S; cin >> S;

        string T = S;
        sort(T.begin(), T.end());

        int ans = 0;
        for(int i=0; i<L; i++)
        {
            if(S[i] != T[i]) ans += 1;
        }

        cout << ans << "\n";
    }
    
    return 0;
}
