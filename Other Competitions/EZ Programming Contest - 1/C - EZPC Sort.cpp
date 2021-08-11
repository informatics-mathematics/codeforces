#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T; cin >> T;

	while(T--)
	{
		char ch[26];

		int e = 0, z = 0, p = 0, c = 0;

		for(int i=0; i<26; i++) cin >> ch[i];

		for(int i=0; i<26; i++)
		{
			if(ch[i] == 'e') e = i;
			if(ch[i] == 'z') z = i;
			if(ch[i] == 'p') p = i;
			if(ch[i] == 'c') c = i;
		}
		

		if(c > e && c > z && c > p)
		{
			if(p > z) cout << "YES" << "\n";
			else cout << "NO" << "\n";
		}
		else cout << "NO" << "\n";

	}	

	return 0;
}
