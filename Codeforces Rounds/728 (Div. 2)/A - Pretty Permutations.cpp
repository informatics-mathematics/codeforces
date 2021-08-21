#include <iostream>
using namespace std;

int main()
{
	int T; cin >> T;

	while(T--)
	{
		int N; cin >> N;

		if(N%2 == 0)
			for(int i=1; i<=N; i++)
				cout << ((i & 1) ? i + 1 : i - 1) << " ";

		else
		{
			if(N == 3)
				cout << 3 << " " << 1 << " " << 2;
			else
			{
				cout << 3 << " " << 1 << " " << 2 << " ";
				for(int i=4; i<=N; i++)
					cout << ( !(i & 1) ? i + 1 : i - 1) << " ";
			}
		}

		cout << "\n";
	}

	return 0;
}
