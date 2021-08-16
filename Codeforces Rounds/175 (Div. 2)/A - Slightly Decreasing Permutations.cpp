#include <iostream>
using namespace std;

int main()
{
	int N, K; cin >> N >> K;

	for(int i = K+1; i>=1; i--)
		cout << i << " ";

	for(int i = K+2; i<=N; i++)
		cout << i << " ";

	cout << "\n";

	return 0;
}
