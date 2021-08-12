#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T; cin >> T;

	while(T--)
	{
		long long int N; cin >> N;
		long long int sum = ((N+1)*N)/2;

		long long int i = 1;
		while(i <= N)
		{
			sum -= 2*i;
			i = i*2;
		}

		cout << sum << "\n";
	}

	return 0;
}
