#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T; cin >> T;

	while(T--)
	{
		int N; cin >> N;
		
		char s[N];
		char t[N];

		for(int i=0; i<N; i++) cin >> s[i];
		for(int i=0; i<N; i++) cin >> t[i];

		bool found = false;
		for(int i=0; i<N; i++)
		{
			if(t[i] == 'o') 
			{
				found = true; break;
			}
		}

		if(found) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}	

	return 0;
}
