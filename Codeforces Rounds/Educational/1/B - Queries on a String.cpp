#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s; cin >> s;

	int N; cin >> N;

	for(int i=0; i<N; i++)
	{
		int L, R, K; cin >> L >> R >> K;
		L -= 1; R -=1;

		K = K % (R - L + 1);

		s = s.substr(0, L) + s.substr(R-K+1, K) + s.substr(L, R-L+1-K) + s.substr(R+1);
	}

	cout << s << "\n";
	return 0;
}
