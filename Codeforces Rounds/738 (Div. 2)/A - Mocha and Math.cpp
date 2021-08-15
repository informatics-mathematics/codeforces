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
		int arr[N];
		
		for(int i=0; i<N; i++) cin >> arr[i];

		int mx = -1;
		int idx = -1;

		for(int i=0; i<N; i++)
		{
			if(arr[i] > mx)
			{
				mx = arr[i];
				idx = i;
			}
		}

		int mn = mx;
		for(int i=0; i<N; i++)
			if(i != idx)
				mn = min(mn, mn & arr[i]);

		cout << mn << "\n";
	}

	return 0;
}
