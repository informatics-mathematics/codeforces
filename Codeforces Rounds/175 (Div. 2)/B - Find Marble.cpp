#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	int N, S, T; cin >> N >> S >> T;
	
	unordered_map<int, int> ump;
	unordered_map<int, bool> visited;

	for(int i=1; i<=N; i++)
	{
		ump.insert({i, 0});
		visited.insert({i, false});
	}

	for(int i=1; i<=N; i++) cin >> ump[i];

	if(S != T && (ump[S] == S || ump[T] == T)) cout << -1 << "\n";
	
	else if(S == T) cout << 0 << "\n";
	
	else
	{
		int steps = 0;
		int curr = S, end = T;

		bool x = true;

		while(curr != end)
		{
			if((ump[curr] == curr) || (visited[curr] == true))
			{
				x = false; break;
			}
			else
			{
				visited[curr] = true;
				curr = ump[curr];
				steps += 1;
			}
		}

		if(x) cout << steps << "\n";
		else cout << -1 << "\n";
	}

	return 0;
}
