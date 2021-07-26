#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int N; 
	cin >> N;

	int a[5] = {1, 5, 10, 20, 100};

	int i = 4;
	int c = 0;
	while(N != 0 || i < 0)
	{
		if(N/a[i] > 0)
		{
			c = c + N/a[i];
			N = N % a[i];
		}
		else 
			i = i-1;

	}

	cout << c;

	return 0;
}
