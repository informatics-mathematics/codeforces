#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T; cin >> T;

	while(T--)
	{
		int N; cin >> N;
		long long int arr[N];


		for(int i=0; i<N; i++)
			cin >> arr[i];

		long long int ans = 0;

		for(int i=1; i<N; i++)
			ans = max(ans, arr[i-1]*arr[i]);

		cout << ans << "\n";
	}

	return 0;
}
