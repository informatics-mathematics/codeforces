#include <bits/stdc++.h>
using namespace std;

int main() 
{
    // ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int T; cin >> T;
    
    while (T--) 
    {
        long long int n; cin >> n; 

        if(n < 9) cout << 0 << "\n";
        else if (n == 9) cout << 1 << "\n";
        else 
        {
            if(n%10 == 9) cout << (n/10 + 1) << "\n";
            else cout << n/10 <<"\n";
        }
    }

    return 0;
}
