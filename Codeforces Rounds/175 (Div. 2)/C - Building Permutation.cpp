#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int N; cin >> N;

	vector<long long int> v(N);

	for(long long int i=0; i<N; i++)
		cin >> v[i];

	sort(v.begin(), v.end());

	long long int sum = 0;
	for(long long int i=0; i<N; i++) 
		sum += abs(i + 1 - v[i]);

	cout << sum << "\n";

	return 0;
}
