#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int T; cin >> T;

	while(T--)
	{
		int N; cin >> N;
		
		char str[N];
		for(int i=0; i<N; i++) cin >> str[i];

		int idx = -1;
		for(int i=0; i<N; i++)
		{
			if(str[i] != '?')
			{
				idx = i; break;
			}
		}

		if(idx == -1) // all are ?
		{
			for(int i=0; i<N; i++)
				str[i] = (i%2 == 0) ? 'R' : 'B';
		}

		// backwards
		for(int i=idx; i>-1; i--)
		{
			if(str[i] == 'B') str[i-1] = 'R';
			else str[i-1] = 'B';
		}
		// forwards
		for(int i=idx; i<N-1; i++)
		{
			if(str[i] == 'B' && str[i+1] == '?') str[i+1] = 'R';
			if(str[i] == 'R' && str[i+1] == '?') str[i+1] = 'B';
		}

		string s;
		for(int i=0; i<N; i++) s += str[i];

		cout << s << "\n";

	}

	return 0;
}
