#include <bits/stdc++.h>

using namespace std;

int main()
{
  int T; cin >> T;

  while(T--)
  {
    int N; cin >> N;
    int odd = 0, even = 0;

    int temp;
    for(int i=0; i<2*N; i++)
    {
      cin >> temp;
      if(temp == 0 || temp%2 == 0) even+=1;
      else odd+=1;
    }

    if(even == odd) {cout << "Yes" << endl;}
    else {cout << "No" << endl;}
  }

  return 0;
}
