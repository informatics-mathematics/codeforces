```
#include <bits/stdc++.h>
typedef long long int LLI;

// const unsigned int MOD = 1000000007;

using namespace std;

int main()
{
  int T; cin >> T;

  while(T--)
  {
    LLI n, a, b;
    cin >> n >> a >> b;

    LLI x = 1;
    int f = 0;

    // n = a^x + b*y

    if(a == 1)
    {
      if((n-1)%b == 0) cout << "Yes" << endl;
      else cout << "No" << endl;
      continue;
    }

    while(x<=n)
    {
      if((n-x)%b == 0) {
        f = 1; break;
      }

      x = x*a;
    }

    if(f) cout << "Yes" << endl;
    else cout << "No" << endl;
  }

  return 0;
}
```
