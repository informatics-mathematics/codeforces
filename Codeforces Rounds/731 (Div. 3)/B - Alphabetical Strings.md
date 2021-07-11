```
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T; cin >> T;

	while(T--)
	{
		string alphabets = "abcdefghijklmnopqrstuvwxyz";

		string word; cin >> word;
		int l = word.length();

		int left, right;

		for(int i=1; i<=l; i++)
		{

			if(i == 1)
			{
				size_t o = word.find(alphabets[i-1]);
				int occur = (int)o;

				if (occur == string::npos)
				{
					cout << "NO" << "\n";
					break;
				}

				else
				{
					left = (occur == 0) ? 0 : occur - 1;
					right = (occur == l-1) ? l-1 : occur + 1;
				}
			}

			else
			{
				size_t o = word.find(alphabets[i-1]);
				int occur = (int)o;

				if(occur == left)
					left = (left == 0) ? 0 : (left - 1);

				else if(occur == right)
					right = (right == l-1) ? right : (right + 1);

				else
				{
					cout << "NO" << "\n";
					break;
				}

			}

			if(i == l)
				cout << "YES" << "\n";
		}
	}

	return 0;
}
```
