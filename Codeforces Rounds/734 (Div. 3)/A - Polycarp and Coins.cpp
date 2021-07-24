#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin >> T;

    while(T--)
    {
        long long int S; cin >> S;

        if(S == 1) cout << 1 << " " << 0 << "\n";
        else if(S == 2) cout << 0 << " " << 1 << "\n";
        else
        {
            long long int a = S/3;
            long long int b = S/3;

            if(S%3 == 1) cout << (a+1) << " " << b << "\n";
            else if(S%3 == 2) cout << a << " " << (b+1) << "\n";
            else cout << a << " " << b << "\n";
        }
    }
    return 0;
}
