#include <bits/stdc++.h>
using namespace std;

int main() 
{
    // ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T; cin >> T;
    
    while (T--) 
    {
        string S; cin >> S;
        cout << *max_element(S.begin(), S.end()) << '\n';
    }

    return 0;
}
