#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T; cin >> T;

	while(T--)
	{
		int N, K; cin >> N >> K;
		int arr[N];

		int mn = INT_MAX;
		int mx = INT_MIN;

		for(int i=0; i<N; i++)
		{
			cin >> arr[i];
			mn = min(mn, arr[i]);
			mx = max(mx, arr[i]);
		}

		cout << mx - mn << "\n";
	}

	return 0;
}
