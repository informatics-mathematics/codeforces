#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    long N, M; cin >> N >> M;

    // edge case 0
    if(N == 0) 
    {
        if(M == 1)  cout << 0 << "\n";
        else  cout << -1 << "\n";
        
        return 0;
    }

    if (N > 9*M) 
    {
        cout << -1 << "\n";
        return 0;
    }

    string str = "";

    for(long i = 0;  i< M; i++) 
    {
        if (N > 9) 
        {
            N -= 9;
            str += '9';
        } 
        else 
        {
            str += ('0' + N);
            N = 0;
        }
    }

    cout << str << "\n";
}
