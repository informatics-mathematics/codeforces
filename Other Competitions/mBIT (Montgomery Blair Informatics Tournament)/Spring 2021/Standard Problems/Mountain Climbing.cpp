#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N; cin >> N;
	int arr[N];

	for(int i=0; i<N; i++)
		cin >> arr[i];

	int	sum = arr[0];

	for(int i=1; i<N; i++)
		sum += abs(arr[i] - arr[i-1]);

	sum += arr[N-1] + sizeof(arr)/sizeof(arr[0]);

	cout << sum;
}
